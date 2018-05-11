/*------------------------------------------------------------------*
* Critter.hpp
* group Project
*
* Group 19 05/06/18
*------------------------------------------------------------------*/
#ifndef Critter_hpp
#define Critter_hpp
#include <iostream>
using namespace std;

//not sure if direction will be needed for gameplay or not
enum direction
{
	up, down, left, right
};

class Critter {
private:
	char species;	// ant =='O' or doodlebug =='X'
	int rowPosition;
	int colPosition;
	int step;			//number of moves ant/doodlebug surives
	bool move;			//tracks if object passed through move()

public:
	Critter();		//initializes move to true and step count to 0

	int getRow();
	int getCol();
	int getStepCnt();		//tracks number of turns survived
	bool getMove();
	void setCoord(int, int);	//may or may not need for setting coordinates

	void setRow(int);
	void setCol(int);
	void setStepCnt(int);	//tracking number of moves for objects
	void setSpecies(char);	// ant =='O' or doodlebug =='X'
	void setMove(bool);		//number of moves ant/doodlebug surives


	//virtual functions for ant & doodlebug
	virtual void movement(Critter ***) = 0;
	virtual void breed(Critter ***) = 0;

	//destructor
	virtual ~Critter();//
	
};


#endif /* Critter_hpp */


