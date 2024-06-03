#include <iostream>
#include "golf.h"

using namespace std;

int main() {
    golf golfs[10];
    cout << "Input 10 golfs or stop with empty name" << endl;
    for (auto & golf : golfs) {
        if (SetGolf(golf) == 0){
            cout << "Input end" << endl;
            break;
        }
        ShowGolf(golf);
    }

    return 0;
}
