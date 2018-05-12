/***************************************************************************************
** Program name:  Prey-Predator Group #19 Project
** Author:  Issac J Thornton
** Date:  10 May 2018
** Description: This project uses cellular automata to create a 2D predator–prey
** simulation in your program.  The preys are ants and the predators are doodlebugs.
****************************************************************************************/
#include <iostream>
#include <stdlib.h>

#include "Ant.hpp"
#include "Doodlebug.hpp"
#include "GamePlay.hpp"
#include "Menu.hpp"

int main()
{
    int simSteps=10;

    Menu mainMenu;

    mainMenu.startMenu();

    int arrySize=20;
    Critter** critterGrid  = new Critter*[arrySize];//dynamic allocation of array of pointers

    Critter* critterPntr;

    if(critterGrid==NULL)//memory cannot be allocated for some reason
    {
      std::cout<<"Memory allocation failed; terminating program"<<"\n";
      exit(0);
    }


    for(int i=0;i<arrySize;i++)//arrySize equals number of columns and rows for square matrix
     {
       critterGrid[i] = new Critter[arrySize];//allocates (arrySize*(size of Critter*)) for each matrixArry row, i
     }

    //initialize (i,j) critterGrid pointers to NULL
    for(int i=0;i<arrySize;i++)
    {
        for(int j=0;i<arrySize;j++)
        {
            critterPntr=*(critterGrid+i)+j;
            critterPntr=NULL;
        }

    }

    GamePlay mainGame(critterGrid,simSteps);//need to get user input for simSteps each time game is played;


    do
    {
     std::cout<<"\nAwaiting statements\n";
    }while(mainMenu.getMenuOption()!=2);


    //Free the dynamically allocated memory
    for(int i=0;i<arrySize;i++)//arrySize equals number of columns and rows for square matrix
    {
       delete[] critterGrid[i];
    }

    delete[] critterGrid;

    return 0;
}
