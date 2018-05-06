/*------------------------------------------------------------------*
 * Critter.hpp
 * group Project
 *
 * Group 19 05/06/18
 *------------------------------------------------------------------*/
#ifndef Critter_hpp
#define Critter_hpp

#include <iostream>

class Critter{
private:
    char species;
    
protected:
    int rowPosition;
    int colPostiion;
    
public:
    //destructor
    ~Critter();
    
    //methond to allow access for private species
    void setSpecies(char);
    
    //move and breed virtual methods
    virtual void move(int rowPos, int colPos);
    virtual void breed();
    
};


#endif /* Critter_hpp */
