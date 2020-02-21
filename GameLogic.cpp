//
// Created by marsb on 2/21/2020.
//
#include "Die.h"
#include "GameLogic.h"

int PlayersTurn(Die PlayersDie)
{
    int value;

    value = PlayersDie.roll();
    return value;

}
void CheckWin(int rolledNumber, Die PlayersDie)
{
    int secondRollValue;
    //Checks if player has rolled one of the three losing numbers
        if(rolledNumber == 12 || rolledNumber == 3 || rolledNumber == 2)
        {
            cout << "You have rolled a " << PlayersDie.getValue() << " Which means you have lost nice try!" << endl;
        }
        //Checks if the player has rolled one of the two winning numbers
        else if(rolledNumber == 7 || rolledNumber == 11)
        {
            cout << "You have rolled a " << PlayersDie.getValue() << " Which means you have won! Nice Job!" << endl;
        }
        //Checks if the player has rolled one of the 6 numbers that gives the player a second roll
        else if(rolledNumber == 4 || rolledNumber == 5 || rolledNumber == 6 || rolledNumber == 8 || rolledNumber == 9 || rolledNumber == 10)
        {
            cout << "You have rolled a " << PlayersDie.getValue() << " which means you get to roll again! Press enter when you are ready to roll again" << endl;
            cin.get();
           //Calls the PlayersTurn function so we can compute the second roll
            secondRollValue = PlayersTurn(PlayersDie);

            //If the first and second roll equal eachother then the player wins!
                if(rolledNumber == secondRollValue)
                {
                    cout << "You have rolled a " << PlayersDie.getValue() << " Which means you have rolled the same number twice meaning you win! Congrajulations" << endl;
                }
                //if the numbers do not match the player loses
                else
                {
                    cout << "You have rolled a " << PlayersDie.getValue() << " Which means you have lost because you didnt " << endl;
                }


        }





}
void SettleBet(int betAmount, std ::string nameOfPlayer)
{

}
void CreatePlayerFile()
{



}




