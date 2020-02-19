//
// Created by marsb on 2/14/2020.
//

#include "Die.h"
#include <cmath>
#include <ctime>


Die :: Die(int startingNumberofSides, int startingincremnet, int firstStartingValue, string startingColor, string startingMaterial)
{
    numberOfSides = startingNumberofSides;
    increment = startingincremnet;
    startingValue = firstStartingValue;
    color = startingColor;
    material = startingMaterial;
    srand(time(0));

}
int Die :: GetNumberOfSides() {

            return numberOfSides;
}
int Die :: GetIncremnet() {

    return increment;
}
string Die :: GetColor() {

    return color;
}
string Die :: GetMaterial() {
    return material;
}
int Die :: getValue() {
    return value;
}
int Die :: getStartingValue() {
    return startingValue;
}
bool Die:: IsSymbol() {

    return false;
}
int Die :: roll()
{


    return rand() % numberOfSides + startingValue;
}
void Die :: SetColor(string newColor)
{
    color = newColor;
}
void Die :: SetMaterial(string newMaterial)
{
        material = newMaterial;
}
void Die :: SetIncrement(int newIncrement)
{
    increment = newIncrement;
}
void Die :: SetStartingValue(int newStartingValue) {

    startingValue = newStartingValue;
}
void Die :: SetNumberOfSides(int newNumnberOfSides) {

    numberOfSides = newNumnberOfSides;
}
