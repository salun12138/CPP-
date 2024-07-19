#include <iostream>
#include "Cow.h"

int main() {
    Cow cow1;
    Cow cow2 = Cow("hello1", "game", 100);
    cow2.ShowCow();
    {
        Cow cow3 = Cow(cow2);
        cow3.ShowCow();
    }
    cow2.ShowCow();
    cow1 = cow2;
    cow1.ShowCow();

    return 0;
}
