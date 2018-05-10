/*------------------------------------------------------------------*
 * Ant.hpp
 * group Project
 *
 * Group 19 05/06/18
 *------------------------------------------------------------------*/
#ifndef Ant_hpp
#define Ant_hpp

#include <iostream>
#include "Critter.hpp"

class Ant: public Critter{
private:
    int steps;
    
public:
    //constructor
    Ant();
    
    //destructor
    virtual ~Ant();
    
    virtual void move(int rowPos, int colPos);
    virtual void breed();
    
    void addStep();
    int getStep();
};


#endif /* Ant_hpp */
