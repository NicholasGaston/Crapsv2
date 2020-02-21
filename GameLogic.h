//
// Created by marsb on 2/21/2020.
//
#include <iostream>
#include <string>
#ifndef CRAPSV2_GAMELOGIC_H

#define CRAPSV2_GAMELOGIC_H

    int PlayersTurn(Die PlayersDie);
    void CheckWin(int rolledNumber, Die PlayersDie);
    void SettleBet(int betAmount, std ::string nameOfPlayer);
    void CreatePlayerFile();


#endif //CRAPSV2_GAMELOGIC_H
