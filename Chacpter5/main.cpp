#include <iostream>
#include <array>
#include <cstring>
using namespace std;

//1.
void Sum();
//2.
void ForMore();
//3.
void CountSum();
//4.
void Profit();
//5.
void Sale();
//7.
void Cars();
//8.
void Done();
//10
void Loop();
int main() {
    Loop();
    return 0;
}

void Sum(){
    int small, big, sum = 0;
    cin >> small;
    cin >> big;
    for (int i = small; i <= big; ++i) {
        sum += i;
    }
    cout << small << " " << big << " " << sum;
}

void ForMore(){
    array<long double,100> factorials;
    factorials[0] = factorials[1] = 1;
    for (int i = 2; i < 100; ++i) {
        factorials[i] = factorials[i-1] * i;
    }
    for (int i = 0; i < 100; ++i) {
        cout << i << "! = " << factorials[i] << endl;
    }
}

void CountSum(){
    int input, sum = 0;
    cin >> input;
    while (input != 0){
        sum += input;
        cout << sum << endl;
        cin >> input;
    }
}

void Profit(){
    const int money = 100;
    int year = 1;
    int daphne = 10;
    double cleo = 5;
    while (cleo <= daphne){
        daphne += 10;
        cleo += (money + cleo) * 0.05;
        year++;
    }
    cout << year << " " << daphne + money << " " << cleo + money << endl;

}

void Sale(){
    string month[12] = {"一月","二月","三月","四月","五月","六月","七月","八月","九月","十月","十一月","十二月"};
    int sales[12] = {0};
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        cout << "请输入" << month[i] << "的销售额：" ;
        cin >> sales[i];
        sum += sales[i];
    }
    cout << sum << endl;
}

void Cars(){
    int count = 0;
    struct car{
        string make;
        int year;
    };
    cout << "How many cars do you wish to catalog? " ;
    cin >> count;
    cin.get();
    car * cars = new car [count];
    for (int i = 0; i < count; ++i) {
        cout << "Car #" << i+1 << ":" << endl;
        cout << "Please enter the make: " ;
        getline(cin, cars[i].make);
        cout << "Please enter the year made:";
        cin >> cars[i].year;
        cin.get();
    }
    cout << "Here is your collection: " << endl;
    for (int i = 0; i < count; ++i) {
        cout << cars[i].year << " " << cars[i].make << endl;
    }
}

void Done(){
    char chars[20] {'\0'};
    int count = 0;
    cout << "Enter words (to stop, type the word done): " << endl;
    cin >> chars;
    while (strcmp(chars,"done")){
        count++;
        for (int i = 0; i < strlen(chars); ++i) {
            chars[i] = '\0';
        }
        cin >> chars;
    }
    cout << "You entered a total of " << count << " words";
}

void Loop(){
    int rows;
    cout << "Input the rows:" << endl;
    cin >> rows;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < rows - i - 1; ++j) {
            cout << ".";
        }
        for (int j = 0; j < i + 1; ++j) {
            cout << "*";
        }
        cout << endl;
    }
}