/*
 *  Squad.h
 *  Created on: 10/15/2022.
 *  Author: Tayla Orsmond (u21467456)
 */

#pragma once
#include "./Troops.h"

using namespace std;
/**
 * @brief The Squad class
 * @details This class is used to create the squads that will be used in the sim
 * This is the Leaf class in the Composite Design pattern
 * This class inherits from the Troops class
 * 
 * @author Tayla Orsmond
 * @date 10/24/2022
 * 
 */
class Squad : public Troops 
{
    public:
        Squad(NAME name, STATE state);
        ~Squad();
        int takeDMG(int total);
        string getReport();
        vector<Troops *> disband();
        void build(vector<Troops *> squads);
        void add(Troops * squad);
        vector<Troops *> remove(int noToRemove);
        int getTotalHP() {return this->getHP();};
        int getTotalDMG() {return this->getDMG();};
};
