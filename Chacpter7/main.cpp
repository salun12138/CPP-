#include <iostream>

using namespace std;

//1.
double SumAvg(int x, int y);
void OneOut();

//2.
int TwoIn(double * ary[], int size);
double TwoAvg(const double ary [],int size);
void Show();

//3.
struct box {
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};
void OnlyValue(box stc);
void UseAddress(box * ptr);
void Three();

//4.
long double probability(unsigned numbers, unsigned picks);
void Four();

//5.
long int recurs(int number);
void Five();

//6.
int Fill_array(double ary[], int size);
void Show_array(const double ary[], int size);
void Reverse_array(double ary[], int size);
void Six();

//7.
const int Max = 5;
double * fill_array(double * begin, double * end);
void show_array(const double ary[], const double * end);
void revalue(double r, double * begin, const double * end);
void Seven();

//8.
const int Seasons = 4;
const char * Snames[4] = {"Spring", "Summer", "Fall", "Winter"};
void fill(double * expense);
void show(const double * expense);
void eight();

//9.
const int SLEN = 30;
struct student{
    char fullname[SLEN];
    char hobby[SLEN];
    int opplevel;
};
int getinfo(student pa[], int n);
void display1(student st);
void display2(const student * ps);
void display3(const student pa[], int n);
void Nine();

//10.
double calculate(double x, double y, double (*pt) (double a, double b));
double add(double a, double b);
double reduce(double a, double b);
double times(double a, double b);
void Ten();

int main() {
    Ten();
    return 0;
}




//1.
double SumAvg(int x, int y){
    double avg {};
    avg = 2.0 * x * y / (x + y);
    return avg;
}
void One(){
    cout << "Please input two number until one of is zero" << endl;
    int x {}, y {};
    while (cin >> x >> y && x != 0 && y != 0)
        cout << "SumAvg is: " << SumAvg(x, y) << endl;
}

//2.
int TwoIn(double ary[], int size){
    cout << "Please input less than 10 golf score, input 'q' to end" << endl;
    int i;
    for (i = 0; i < size; ++i) {
        if (!(cin >> ary[i])){
            cin.clear();
            break;
        }
    }
    return i;
}
double TwoAvg(const double ary [], int size){
    double count {};
    for (int i = 0; i < size; ++i) {
        count += ary[i];
    }
    return count / size;
}
void Two(){
    const int size = 10;
    double ary [size] {};
    int length = TwoIn(ary, size);
    for (int i = 0; i < length; ++i) {
        cout << ary[i] << " ";
    }
    cout << endl << TwoAvg(ary, length) << endl;
}

//3.
void OnlyValue(box stc){
    cout << stc.length << " " << stc.volume << " " << stc.height << " " << stc.maker << " " << stc.width << endl;
}
void UseAddress(box * ptr){
    ptr->volume = ptr->height * ptr->width * ptr->length;
}
void Three(){
    box stc = {"hello", 2.0, 3.0 , 4.0, 5.0};
    OnlyValue(stc);
    UseAddress(&stc);
    OnlyValue(stc);
}

//4.
long double probability(unsigned numbers, unsigned picks){
    long double result = 1.0;
    long double n;
    unsigned p;
    for (n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p;
    return 1.0 / result / 27.0;
}
void Four(){
    double total, choices;
    cout << "Enter the total number of choices on the game card and\n"
         << "the number of picks allowed:\n";
    while ((cin >> total >> choices) && choices <= total)
    {
        cout << "You have one chance in ";
        cout << probability(total, choices);
        cout << " of winning.\n";
        cout << "Next two numbers (q to quit)";
    }
    cout << "bye.\n";
}

//5.
long int recurs(int number){
    if (number == 0)
        return 1;
    return number * recurs(number - 1);
}
void Five(){
    int number {};
    cout << "Please input numbers, use q to quit\n";
    while (cin >> number)
        cout << recurs(number) << endl;
}

//6.
int Fill_array(double ary[], int size){
    cout << "Please input doubles \n";
    int i {};
    while (i < size && cin >> ary[i])
        i++;
    return i;
}
void Show_array(const double ary[], int size){
    for (int i = 0; i < size; ++i) {
        cout << " " << ary[i];
    }
    cout << endl;
}
void Reverse_array(double ary[], int size){
    int start {}, end = size - 1;
    for (; start < end; start++, end--) {
        double temp = ary[start];
        ary[start] = ary[end];
        ary[end] = temp;
    }
}
void Six(){
    const int size = 10;
    double ary [size] {};
    int length = Fill_array(ary, size);
    Show_array(ary, length);
    Reverse_array(ary, size);
    Show_array(ary,size);
    Reverse_array(ary + 1, size - 2);
    Show_array(ary, size);
}

//7.
double * fill_array(double * begin, double * end){
    double * pt = begin;
    double temp;
    for (int i = 1; pt != end; pt++,i++) {
        /**/
        cout << "Enter value #" << i << ": ";
        cin >> temp;
        cout << "\n";
        if (!cin){
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; input process terminated.\n";
            break;
        } else if(temp < 0)
            break;
        *pt = temp;
    }
    return pt;
}
void show_array(const double ary[], const double * end){
    const double * pt = ary;
    for (int i = 1; pt != end ; pt++, i++) {
        cout << "Property #" << i << ": $";
        cout << *pt << endl;
    }
}
void revalue(double r, double * begin, const double * end){
    double * pt = begin;
    while (pt != end){
        (*pt) *= r;
        pt++;
    }
}
void Seven(){
    double properties[Max] {};
    double * end = fill_array(properties, properties + Max );
    show_array(properties, end);
    if (end != properties){
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin >> factor)){
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties, end);
        show_array(properties, end);
    }
    cout << "Done. \n";
    cin.get();
    cin.get();
}

//8.
void fill(double * expense){
    for (int i = 0; i < Seasons; ++i) {
        cout << "Enter " << Snames[i] << "expenses: ";
        cin >> expense[i];
    }
}
void show(const double * expense){
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; ++i) {
        cout << Snames[i] << ": $" << expense[i] << endl;
        total += expense[i];
    }
    cout << "Total Expenses: $" << total << endl;
}
void Eight(){
    double expense[Seasons]  {0.0};
    fill(expense);
    show(expense);
}

//9.
int getinfo(student pa[], int n){
    int count {};
    cout << "Please enter students info\n";
    for (int i = 0; i < n; ++i) {
        cout << "Fullname:" << endl;
        if (cin.get(pa[i].fullname, SLEN)){
            cin.get();
            cout << "hobby:" << endl;
            cin.getline(pa[i].hobby, SLEN);
            cout << "opplevel:" << endl;
            cin >> pa[i].opplevel;
            cin.get();
            count++;
        } else
            break;
    }
    return count;
}
void display1(student st){
    cout << "Student Fullname:" << st.fullname << " "
         << "Student hobby:" << st.hobby << " "
         << "Student opplevel:" << st.opplevel << " " << endl;
}
void display2(const student * ps){
    cout << "Student Fullname:" << ps->fullname << " "
         << "Student hobby:" << ps->hobby << " "
         << "Student opplevel:" << ps->opplevel << " " << endl;
}
void display3(const student pa[], int n){
    for (int i = 0; i < n; ++i) {
        display2(&pa[i]);
    }
}
void Nine(){
    cout << "Enter class size:";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n')
        continue;
    student * ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; ++i) {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete [] ptr_stu;
    cout << "Done\n";
}

//10.
double calculate(double x, double y, double (*pt) (double a, double b)){
    return pt(x, y);
}
double add(double a, double b){
    return a + b;
}
double reduce(double a, double b){
    return a - b;
}
double times(double a, double b){
    return a * b;
}
void Ten(){
    double (*pf[3]) (double ,double) = {add, reduce, times};
    double x {0.0}, y {0.0};
    cout << "input two numbers" << endl;
    while (cin >> x >> y){
        for (auto & i : pf) {
            cout << calculate(x, y, i) << " ";
        }
        cout << endl;
        cin.get();
    }
}