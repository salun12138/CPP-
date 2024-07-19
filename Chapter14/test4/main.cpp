//
// Created by dell on 2024/7/10.
//
#include "Person.h"
#include "cstring"
const int SIZE = 5;

int main() {
    using std::cin;
    using std::cout;
    using std::endl;
    using std::strchr;
    Person * persons[SIZE];
    int ct;
    for (ct = 0; ct < SIZE; ++ct) {
        char choice;
        std::cout << "Enter the employee category:\n"
                  << "p: Person  g: Gunslinger  k: PokerPlayer"
                  << "b: BadDue  q: quit\n";
        cin >> choice;
        while (strchr("pgkbq", choice) == nullptr)
        {
            cout << "Please enter a p, g, k, b, or q: ";
            cin >> choice;
        }
        if (choice == 'q')
            break;
        switch (choice) {
            case 'p': persons[ct] = new Person("Person", "pe");
                break;
            case 'g': persons[ct] = new Gunslinger("Gunslinger", "gu", 10, 99);
                break;
            case 'k': persons[ct] = new PokerPlayer("PokerPlayer", "po");
                break;
            case 'b': persons[ct] = new BadDude("BadDude", "ba", 20, 100);
                break;
            default:
                break;
        }
        cin.get();
    }
    cout << "\nHere is persons: \n";
    for (int i = 0; i < ct; ++i) {
        cout << endl;
        persons[i]->Show();
    }
    for (int i = 0; i < ct; ++i) {
        delete persons[i];
    }
    cout << "Bye.\n";
    return 0;
}