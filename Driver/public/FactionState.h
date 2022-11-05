/*
 *  FactionState.h
 *  Created on: 10/31/2022
 *  Author: Dhairiya Chhipa (u21437841)
 */

#pragma once

#include "./Faction.h"

/**                         
 * @brief This class handles the attack strategy of a faction
 */
class FactionState
{                           
public:
    FactionState(int);
    virtual ~FactionState();
    virtual void handleState(ActionResult, Faction*, FactionState*) = 0;
    void printState(FactionName, string, bool);

protected:
    string getFactionName(FactionName);
    void deletePreviousState(FactionState*);
    int getMorale();
    int calculateMorale(ActionResult, Faction*);

private:
    int morale;
};