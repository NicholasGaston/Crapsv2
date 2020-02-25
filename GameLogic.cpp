//
// Created by marsb on 2/21/2020.
//
#include "Die.h"
#include "GameLogic.h"
#include <cstring>

 double playersBet;
double playersBank = 1000;
int PlayersTurn(Die PlayersDie)
{
    int value;


    value = PlayersDie.roll();
    return value;

}
void SettleBet(double playersBet, int rolledNumber)
{

    if(rolledNumber == 11|| rolledNumber == 7)
    {
        cout << "You have gotten your money you have bet back (1:1)" << endl;
        playersBank += playersBet;

    }
    else if(rolledNumber == 4)
    {
        cout << "You have received your bet back plus half of your bet!" << endl;
        playersBank += (playersBet * 2);

    }
    else if(rolledNumber == 5)
    {
        cout << "You have received your bet back plus half of your bet!" << endl;
        playersBank += (playersBet * 1.5);

    }
    else if(rolledNumber == 6)
    {
        cout << "You have received your bet back plus a fifth of your bet!" << endl;
        playersBank += (playersBet * 1.2);

    }
    else if(rolledNumber == 8)
    {
        cout << "You have received your bet back plus a fifth of your bet!" << endl;
        playersBank += (playersBet * 1.2);

    }
    else if(rolledNumber == 9)
    {
        cout << "You have received your bet back plus half of your bet!" << endl;
        playersBank += (playersBet * 1.5);

    }
    else if(rolledNumber == 10)
    {
        cout << "You have doubled your bet" << endl;
        playersBank += (playersBet * 2.0);

    }



}
void CheckWin(int rolledNumber, Die PlayersDie)
{
    int secondRollValue;
    //Checks if player has rolled one of the three losing numbers
        if(rolledNumber == 12 || rolledNumber == 3 || rolledNumber == 2)
        {
            cout << "You have rolled a " << rolledNumber << " Which means you have lost nice try!" << endl;
            SettleBet(playersBet, rolledNumber);
        }
        //Checks if the player has rolled one of the two winning numbers
        else if(rolledNumber == 7 || rolledNumber == 11)
        {
            cout << "You have rolled a " << rolledNumber << " Which means you have won! Nice Job!" << endl;
            SettleBet(playersBet, rolledNumber);
        }
        //Checks if the player has rolled one of the 6 numbers that gives the player a second roll
        else if(rolledNumber == 4 || rolledNumber == 5 || rolledNumber == 6 || rolledNumber == 8 || rolledNumber == 9 || rolledNumber == 10)
        {
            cout << "You have rolled a " << rolledNumber << " which means you get to roll again! Press enter when you are ready to roll again" << endl;
            cin.get();
            cin.get();
           //Calls the PlayersTurn function so we can compute the second roll
            secondRollValue = PlayersTurn(PlayersDie);

            //If the first and second roll equal eachother then the player wins!
                if(rolledNumber == secondRollValue)
                {
                    cout << "You have rolled a " << secondRollValue<< " Which means you have rolled the same number twice meaning you win! Congrajulations" << endl;
                    SettleBet(playersBet, rolledNumber);
                }
                //if the numbers do not match the player loses
                else
                {
                    cout << "You have rolled a " << secondRollValue << " Which means you have lost because you didnt roll the same number twice" << endl;
                }


        }





}

void setBet()
{
    int userInput;

    cout << "How much would you like to bet?" << endl;
    cin >> userInput;
    playersBet = userInput;
    cout << "\nYou will bet " << playersBet << endl;
    playersBank -= playersBet;
}

void CreatePlayerFile()
{



}




