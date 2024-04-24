#include <iostream>
#include <cctype>
#include <fstream>
#include <cerrno>

using namespace std;

//1.
void ToUp();
//2.
void Donation();
//3.
void Menu();
//5.
void Tvarps();
//6.
void Fund();
//8.
void ReadFile();
//9.
void ReadDonate();

int main() {
    ReadDonate();
    return 0;
}

void ToUp(){
    char ch, turn;
    while (cin.get(ch) && ch != '@'){
        if (!isdigit(ch)){
            if (isupper(ch))
                turn = tolower(ch);
            else
                turn = toupper(ch);
            cout << turn;
        }
    }
}

void Donation(){
    double donation [10] = {};
    int count = 0, num = 0;
    double avg = 0, sum = 0;
    while (count < 10 && cin >> donation[count]){
        sum += donation[count];
        count++;
    }
    avg = sum * 1.0 / (count + 1);
    for (double i : donation) {
        if (i > avg)
            num++;
    }
    cout << avg << " " << num;
}

void Menu(){
    char ch;
    int flag = 1;
    while (flag){
        cout << "Please enter one of the following choices:" << endl;
        cout << "c) carnivore p) pianist t)tree g) game" << endl;
        cin >> ch;
        switch (ch) {
            case 'c':
                cout << "a maple is a carnivore." << endl;
                flag = 0;
                break;
            case 'p':
                cout << "a maple is a pianist." << endl;
                flag = 0;
                break;
            case 't':
                cout << "a maple is a tree." << endl;
                flag = 0;
                break;
            case 'g':
                cout << "a maple is a game." << endl;
                flag = 0;
                break;
            default:
                break;
        }
    }
}

void Tvarps(){
    double tax {};
    double money {};
    cout << "Please input your money:";
    while (cin >> money && money >=0){
        if (money > 5000 && money <= 15000)
            tax = (money - 5000) * 0.1;
        else if (money > 15000 && money <= 35000)
            tax = 10000 * 0.1 + (money - 15000) * 0.15;
        else
            tax = 10000 * 0.1 + 20000 * 0.15 + (money - 35000) * 0.20;
        cout << "Your tax is: " << tax << endl;
    }
}

void Fund(){
    struct member{
        string name;
        double save {};
    };
    int number {};
    cout << "Please input the donation number:" << endl;
    cin >> number;
    cin.get();
    auto * stc = new member [number];
    cout << "Please input all the member:" << endl;
    for (int i = 0; i < number; ++i) {
        getline(cin, stc[i].name);
        cout << stc[i].name << endl;
        cin >> stc[i].save;
        cin.get();
        cout << "input next:" << endl;
    }
    cout << "Grand Patrons" << endl;
    int count {};
    for (int i = 0; i < number; ++i) {
        if (stc[i].save > 10000){
            cout << stc[i].name << endl;
            count++;
        }
    }
    if (count == 0)
        cout << "none" << endl;
    cout << "Patrons" << endl;
    count = 0;
    for (int i = 0; i < number; ++i) {
        if (stc[i].save <= 10000){
            cout << stc[i].name << endl;
            count++;
        }
    }
    if (count == 0)
        cout << "none" << endl;

}

void ReadFile(){
    ifstream input;
    input.open("../first");
    char ch;
    int count {};
    if (!input.is_open()){
        cout << "error" << endl;
        exit(EXIT_FAILURE);
    }

    input.get(ch);
    while (!input.eof()){
        count++;
        input.get(ch);
    }
    input.close();
    cout << count << endl;
}

void ReadDonate(){
    struct member{
        string name;
        double save {};
    };
    ifstream inFile;
    inFile.open("../DONATE");
    if (!inFile.is_open())
        exit(EXIT_FAILURE);
    int size;
    inFile >> size;
    inFile.get();
    auto * arrays = new member [size];
    for (int i = 0; i < size; ++i) {
        getline(inFile,arrays[i].name);
        inFile >> arrays[i].save;
        inFile.get();
    }
    inFile.close();
    cout << "Grand Patrons" << endl;
    int count {};
    for (int i = 0; i < size; ++i) {
        if (arrays[i].save > 10000){
            cout << arrays[i].name << endl;
            count++;
        }
    }
    if (count == 0)
        cout << "none" << endl;
    cout << "Patrons" << endl;
    count = 0;
    for (int i = 0; i < size; ++i) {
        if (arrays[i].save <= 10000){
            cout << arrays[i].name << endl;
            count++;
        }
    }
    if (count == 0)
        cout << "none" << endl;
}



