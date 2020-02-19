#include <iostream>
#include "Die.h"
int main() {
    Die d6(6, 1, 1, "white", "bone");
    std::cout << "Hello, World!" << std::endl;
    for (int i = 0; i < 20; i++)
        cout << "The dice rolled " <<  d6.roll() << endl;
        cout << "The dice rolled " <<  d6.roll() << endl;
    return 0;
}
