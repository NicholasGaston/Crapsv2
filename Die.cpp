//
// Created by marsb on 2/14/2020.
//

#include "Die.h"



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

}
int Die :: getStartingValue() {

}
bool Die:: IsSymbol() {

    return false;
}
int Die :: roll()
{
    return 2;
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
