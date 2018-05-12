/**************************************************************************************************************
** Program name:  Prey-Predator Group #19 Project
** Author:  Issac J Thornton
** Date:  10 May 2018
** Description: Implementation class, GamePlay.hpp, that uses cellular automata to create a 2D predator–prey
** simulation in your program.  The preys are ants and the predators are doodlebugs.
**
** 1.  Initialize the world with 5 doodlebugs and 100 ants; randomly place them on the grid.
** 2.  Prompt the user to enter the number of time steps to run.
** 3.  For each time step, do the following in your program: after moves, when breeding, eating, and starving are
**     resolved, display the resulting grid.
** 4.  Draw the world using ASCII characters of “O” for an ant, “X” for a doodlebug and blank space for an empty
**     space (the characters should be arranged to look like a grid). The doodlebugs will move before the ants in
**     each time step.
** 5.  When you reach the time steps entered by the user, ask them to enter another number and start to run the
**     simulation again or to exit the program. You must maintain the state of the current grid while creating
**     the next display.
** 6.  You should use a dynamic array to represent the grid.  Each array element will be a pointer to a Critter.
***************************************************************************************************************/
#include "Critter.hpp"

#ifndef GAME_PLAY_HPP
#define GAME_PLAY_HPP

class GamePlay
{
  private:
  //data variables
  int simSteps;//initialized by constructor
  Critter** gameGrid;//initialized by constructor

  public:
  //constructor
  GamePlay(Critter**,int);

  //methods
  void displayGrid();

  void initializeGrid();

  void stepDoodleBugs();

  void stepAnts();

};
#endif // GAME_PLAY_HPP
