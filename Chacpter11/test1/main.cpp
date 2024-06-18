#include <iostream>
#include "vect.h"
#include <cstdlib>
#include <ctime>
#include <fstream>

int main() {
    using VECTOR::Vector;
    using namespace std;
    srand(time(0));
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    ofstream of;
    of.open("../test1/randwalk.txt");
    if (!of) {
        cerr << "Unable to open file randwalk.txt";
        return 1;
    }
    cout << "Enter target distance (q to quit): ";
    while (cin >> target)
    {
        cout << "Enter step length: ";
        if (!(cin >> dstep))
            break;
        of << "Target Distance: " << target << ", Step Size: " << dstep << endl;
        cout << "Writing to file: Target Distance: " << target << ", Step Size: " << dstep << endl;
        while (result.Magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            of << steps << ": ";
            of << result << endl;
            steps++;
        }
        of << "After " << steps << " steps, the subject "
                                   "has the following location:\n";
        of << result << endl;
        result.polar_mode();
        of << " or\n";
        of << result << endl;
        of << "Average outward distance per step = "
            << result.Magval()/steps << endl;

        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance (q to quit): ";
    }
    of.close();
    cout << "Bye!\n";
    cin.clear();
    while (cin.get() != '\n')
        continue;
    return 0;
}
