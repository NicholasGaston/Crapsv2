#include <iostream>

#include "Die.h"
#include "GameLogic.h"
using namespace std;
int main() {
 int dieRollValue;

bool valid;
string userInput;
  Die d1 (6, 1, 1, "white", "bone");

    cout  << "Welcome to Craps press enter to start" << endl;
    cin.get();
    setBet();
    dieRollValue = PlayersTurn(d1);
    CheckWin(dieRollValue, d1);





    return 0;
}
