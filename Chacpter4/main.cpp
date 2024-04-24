#include <iostream>
#include <string>
#include <cstring>

using namespace std;


//1.
void out();
//2.
void instr2();
//3.
void NameChar1();
//4.
void NameChar2();
//5~6.
void Candy();
//7.
void Pizzas();
int main() {
    Pizzas();
    return 0;
}

void out(){
    cout << "What is your first name? Betty Sue \n";

    cout << "What is your last name? Yswe\n";
    cout << "What letter grade do you deserve? B\n";
    cout << "What is your age? 22\n";
    cout << "Name: Yewe, Betty Sue\n";
    cout << "Grade: C\n";
    cout << "Age: 22\n";;
}

void instr2(){
    string str, dessert;
    cout << "Enter your name:\n";
    getline(cin,str);
    cout << "Enter your favorite dessert:\n";
    getline(cin,dessert);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << str << ".\n";
}

void NameChar1(){
    char firstName [10] = {'\0'};
    char lastName [10] = {'\0'};
    cout << "Enter your first name:" << endl;
    cin >> firstName;
    cout << "Enter your last name:" << endl;
    cin >> lastName;
    char name [strlen(firstName)+strlen(lastName)+3];
    strcpy(name,lastName);
    strcat(name,", ");
    strcat(name,firstName);
    strcat(name,"\0");
    cout << sizeof(firstName) << " " << sizeof(lastName) << " " << sizeof(name) << endl;
    cout << "Here's the information in a single string: " << name << endl;
}

void NameChar2(){
    string firstName, lastName, name;
    cout << "Enter your first name:" << endl;
    getline(cin, firstName);
    cout << "Enter your last name:" << endl;
    cin >> lastName;
    name = lastName + ", " + firstName;
    cout << "Here's the information in a single string: " << name << endl;
}

void Candy(){
    struct CandyBar{
        string brand;
        double weight;
        int energy;
    };

    CandyBar snack {"Mocha Munch", 2.3, 350};
    CandyBar snacks [3] = {{"Rabbit", 1.2, 200},{"Dog", 5.1, 600},{"Cat", 0.5, 78}};
    cout << snack.brand << " " << snack.weight << " " << snack.energy << endl;
}

void Pizzas(){
    struct pizza{
        string company;
        double length;
        double weight;
    };
    pizza one;
    cout << "Input the pizza's company\n";
    getline(cin,one.company);
    cout << "Input the pizza's lenght\n";
    cin >> one.length;
    cout << "Input the pizza's weight\n";
    cin >> one.weight;

    cout << one.company << " " << one.length << " " << one.weight << endl;
}