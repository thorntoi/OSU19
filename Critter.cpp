/*------------------------------------------------------------------*
* Critter.cpp
* group Project
*
* Group 19 05/06/18
*------------------------------------------------------------------*/
#include "Critter.hpp"
Critter::Critter() {
	setStepCnt(0);
	setMove(true);
}

int Critter::getRow() {
	return rowPosition;
}
int Critter::getCol() {
	return colPosition;
}
int Critter::getStepCnt() {
	return step++;
}
bool Critter::getMove() {
	return move;
}

void Critter::setRow(int rowPosition) {
	this->rowPosition = rowPosition;
}
void Critter::setCol(int colPosition) {
	this->colPosition = colPosition;
}
void Critter::setCoord(int x, int y) {
	setRow(x);
	setCol(y);
}
void Critter::setSpecies(char species) {
	this->species = species;
}
void Critter::setStepCnt(int step) {
	this->step = step;
}
void Critter::setMove(bool move) {
	this->move = move;
}

 
