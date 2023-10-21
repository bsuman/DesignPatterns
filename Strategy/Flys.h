#pragma once
#include"IFly.h"
#include<iostream>

class FlyWithWings :public IFly {
public:
	FlyWithWings() {
	}

	void fly() {
		std::cout << "I am flying with my wings!!" << std::endl;
	}
};

class NoFly :public IFly {
public:
	NoFly() {

	}
	void fly() {
		std::cout << "I am not flying!!" << std::endl;
	}
};

class BatteryPoweredFly :public IFly {
public:
	void fly() {
		std::cout << "I am flying with the battery power!!" << std::endl;
	}
};
