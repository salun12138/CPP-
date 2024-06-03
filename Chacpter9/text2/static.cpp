//
// Created by dell on 2024/6/3.
//
#include <iostream>

using namespace std;
void StrCount(string str);

int main()
{

    string input;
    cout << "Enter a line:\n";
    while (getline(cin, input) && !input.empty()){
        StrCount(input);
        cout << "Enter next line (empty line to quit):\n";
    }

}

void StrCount(const string str){
    static int total = 0;
    int count = 0;
    cout << "\"" << str << "\" contains ";
    count = (int)str.length();
    total += count;
    cout << count << " characters\n";
    cout << total << " characters total\n";
}
