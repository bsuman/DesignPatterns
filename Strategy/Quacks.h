#pragma once
#include<iostream>
#include "IQuack.h"

class Quack :public IQuack {
public:
	Quack() {

	}
	void quack() {
		std::cout << "Quack, Quack!!" << std::endl;
	}
};

class MuteQuack :public IQuack {
public:
	MuteQuack() {

	}
	void quack() {
		std::cout << "I am mute!!" << std::endl;
	}
};

class Squeak :public IQuack {
public:
	Squeak() {

	}
	void quack() {
		std::cout << "Squeak!!" << std::endl;
	}
};
