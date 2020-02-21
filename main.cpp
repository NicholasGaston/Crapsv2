#include <iostream>

#include "Die.h"
#include "GameLogic.h"
using namespace std;
int main() {
 int dieRollValue;
  Die d1 (6, 1, 1, "white", "bone");

    cout  << "Welcome to Craps press enter to start" << endl;
    cin.get();
    dieRollValue = PlayersTurn(d1);
    CheckWin(dieRollValue, d1);

    cout << "\nThank you for playing!!!" << endl;

    return 0;
}
