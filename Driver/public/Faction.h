/*
 *  Faction.h
 *  Created on: 10/13/2022.
 *  Author: Keelan Matthews (u21549967)
 */

#pragma once
#include "../../Manipulation/public/Country.h"
#include "../../Creation/public/FactionState.h"
#include "../public/enums.h"
#include "./enums.h"
#include "./ConcreteSimulator.h"
#include <list>

class Faction {
public:
    virtual void reStock() = 0;
    virtual void attack() = 0;
    virtual FactionState* getState() = 0;
    virtual FactionStance getStance() = 0;
    virtual FactionName getName() = 0;
    virtual int getStrength() = 0;


protected:
    ConcreteSimulator* simulator;
    std::list<Country*> countries;
    FactionStance stance;
    FactionName name;
};
