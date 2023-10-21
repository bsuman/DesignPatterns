// Strategy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "IDuck.h"
#include "Quacks.h"
#include "Flys.h"
#include "Ducks.h"

int main()
{
    std::cout << "Welcome to strategy pattern!\n";
    IFly* flyingBehaviour = new FlyWithWings();
    IQuack* quackingBehaviour = new Quack();
    MallardDuck* mduck = new MallardDuck(quackingBehaviour, flyingBehaviour);
    mduck->flyDuckfly();
    mduck->quakDuckquak();
    delete flyingBehaviour;
    delete quackingBehaviour;
    delete mduck;

    IFly* noflyingBehaviour = new NoFly();
    IQuack* noquackingBehaviour = new MuteQuack();
    MuteDuck* muteduck = new MuteDuck(noquackingBehaviour, noflyingBehaviour);
    muteduck->flyDuckfly();
    muteduck->quakDuckquak();
    delete noflyingBehaviour;
    delete noquackingBehaviour;
    delete muteduck;
    
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
