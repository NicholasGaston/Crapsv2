//
// Created by marsb on 2/14/2020.
//

#include <iostream>;

#ifndef CRAPSV2_DIE_H
using namespace std;

class Die{

private:
    int numberOfSides;
    int increment;
    int value;
    int startingValue;
    string color;
    bool isSymbol;
    string material;



public:
    Die(int startingNumberofSides, int startingincremnet, int firstStartingValue, string startingColor, string startingMaterial);


    int GetNumberOfSides();
    int GetIncremnet();
    int getValue();
    int getStartingValue();
    string GetColor();
    string GetMaterial();
    bool IsSymbol();
    int roll();
    void SetColor(string newColor);
    void SetMaterial(string newMaterial);
    void SetIncrement(int newIncrement);
    void SetStartingValue(int newStartingValue);
    void SetNumberOfSides(int newNumnberOfSides);


};


#endif //CRAPSV2_DIE_H
