#include <iostream>
#include <cstring>
#include <string>
#include <cctype>

using namespace std;


//1.
int oneCount = 0;
void PrintFunction(const char * c, int i = 0);
void One();

//2.
struct CandyBar{
    string name;
    double weight {};
    int hot {};
};
void SetBar(CandyBar & bar, const char * c = "Millennium Munch", double d = 2.85, int hot = 350);
void ShowBar(const CandyBar & bar);
void Two();

//3
void StrUpper(string & str);
void Three();

//4.
struct stringy{
    char * str;
    int ct;
};
void set(stringy & beany, const char * testing);
void show(const stringy & beany, int times = 1);
void show(const char * c, int times = 1);
void Four();

//5.
template <typename T> T max5(T ary1[], T ary2[], T ary3[], T ary4[], T ary5[]);

//6.
template <typename T> T maxN(T ary[], int num);
template <> char* maxN<char*>(char *ary[], int num);
void Six();

//7.
template <typename T> T SumArray(T arr[], int n);
template <typename T> T SumArray(T * arr[], int n);
struct debts{
    char name[50];
    double amount;
};


int main() {
    Six();
    return 0;
}

//1.
void PrintFunction(const char * c, int i){
    if (i ==0)
        cout << c << endl;
    else
        for (int j = 0; j <= oneCount; ++j) {
            cout << c << endl;
        }
    oneCount++;
}
void One(){
    PrintFunction("hello 1");
    PrintFunction("hello 2");
    PrintFunction("Hello 3", 3);
}

//2.
void SetBar(CandyBar & bar, const char * c, double d, int hot){
    bar.name = c;
    bar.weight = d;
    bar.hot = hot;
}
void ShowBar(const CandyBar & bar){
    cout << bar.name << " " << bar.weight << " " << bar.hot << endl;
}
void Two(){
    CandyBar bar;
    SetBar(bar);
    ShowBar(bar);
}

//3.
void StrUpper(string & str){
    int length = (int)str.size();
    for (int i = 0; i < length; ++i) {
        str[i] = (char)toupper(str[i]);
    }
}
void Three(){
    string str;
    cout << "Enter a string (q to quit): ";
    while (getline(cin,str) && str != "q"){
        StrUpper(str);
        cout << str << endl;
        cout << "Next string (q to quit): ";
    }
}

//4.
void set(stringy & beany, const char * testing){
    char * pt = new char [100];
    beany.ct = strlen(testing);
    for (int i = 0; i < beany.ct; ++i) {
        pt[i] = testing[i];
    }
    beany.str = pt;
}
void show(const stringy & beany, int times){
    for (int i = 0; i < times; ++i) {
        cout << beany.str << " " << beany.ct << endl;
    }
}
void show(const char * c, int times){
    for (int i = 0; i < times; ++i) {
        cout << c << endl;
    }
}
void Four(){
    stringy beany;
    char testing[] = "hello";
    set(beany, testing);
    show(beany);
    show(beany,2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing,3);
    show("Done!");
}

//5.
template <typename T> T max5(T ary1[], T ary2[], T ary3[], T ary4[], T ary5[]){
    T max = ary1[0];
    for (int i = 0; i < 5; ++i) {
        ary1[i] > max ? max = ary1[i]: max = max;
        ary2[i] > max ? max = ary2[i]: max = max;
        ary3[i] > max ? max = ary3[i]: max = max;
        ary4[i] > max ? max = ary4[i]: max = max;
        ary5[i] > max ? max = ary5[i]: max = max;
    }
    return max;
}

//6.
template <typename T> T maxN(T ary[], int num){
    T max = ary[0];
    for (int i = 0; i < num; ++i) {
        if (ary[i] > max)
            max = ary[i];
    }
    return max;
}
template <> char* maxN<char*>(char *ary[], int num){
    char * pt = ary[0];
    for (int i = 0; i < num; ++i) {
        if (strlen(pt) < strlen(ary[i]))
            pt = ary[i];
    }
    return pt;
}
void Six(){
    int ary1[] {0, 1, 3, 5, 2, 9};
    double ary2[] {2.2, 5.6, 3.7, 8.7};
    char * ary3[] {"hello", "say", "Hello", "yes", "no"};
    cout << "int Type: " <<  maxN(ary1, 6) << endl;
    cout << "Double Type: " << maxN(ary2, 4) << endl;
    char * str = maxN(ary3, 5);
    cout << "Char Type: " << str << endl;
}

//7.
template <typename T> T SumArray(T arr[], int n){
    cout << "template A\n";
    T sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }
}
template <typename T> T SumArray(T * arr[], int n){
    cout << "template B\n";
    T sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += *arr[i];
    }
}