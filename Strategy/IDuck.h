#pragma once
#include<iostream>
#include"IFly.h"
#include"IQuack.h"

class Duck {
public:
	IQuack* mQuackingBehaviour = nullptr;
	IFly* mFlyingBehaviour = nullptr;

	void flyDuckfly() {
		std::cout << "My name is " << this->duck_name << " and I am asked to fly!" << std::endl;
		if(mFlyingBehaviour != nullptr)
			mFlyingBehaviour->fly();
	}
	void quakDuckquak() {
		std::cout << "My color is " << this->duck_color << " and I am asked to quack!" << std::endl;
		if (mQuackingBehaviour != nullptr)
			mQuackingBehaviour->quack();
	}

	std::string duck_name;
	std::string duck_color;
};
