/*------------------------------------------------------------------*
 * Doodlebug.hpp
 * group Project
 *
 * Group 19 05/06/18
 *------------------------------------------------------------------*/
#ifndef Doodlebug_hpp
#define Doodlebug_hpp

#include <iostream>
#include "Critter.hpp"

class Doodlebug: public Critter{
private:
    int steps;
    
public:
    //constructor
    Doodlebug();
    
    //destructor
    virtual ~Doodlebug();
    
    //mutators
    virtual void move(int rowPos, int colPos);
    virtual void breed();
    
    
    void addStep();
    int getStep();
};


#endif /* Doodlebug_hpp */
