//
// Created by dell on 2024/6/12.
//
// randwalk.cpp -- using the Vector class
// compile with the vect.cpp file
#include <iostream>
#include <cstdlib>      // rand(), srand() prototypes
#include <ctime>        // time() prototype
#include "../test2/vect.h"
int main()
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));     // seed random-number generator
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    double max = 0, min = 0, average = 0;
    int times = 0, i = 0;
    cout << "Enter times";
    cin >> times;
    cout << "Enter target distance (q to quit): ";
    while (cin >> target && i < times)
    {
        i++;
        cout << "Enter step length: ";
        if (!(cin >> dstep))
            break;

        while (result.Magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;
        }
        if (steps > max)
            max = steps;
        if (min == 0)
            min = steps;
        else if (steps < min)
            min = steps;
        average += steps;
        result.polar_mode();
        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance (q to quit): ";
    }
    cout << "Bye!\n";
    average = average * 1.0 / times;
    cout << "max: " << max << "min: " << min << "average: " << average << endl;
/* keep window open
    cin.clear();
    while (cin.get() != '\n')
        continue;
    cin.get();
*/
    return 0;
}
