#pragma once
#include"IDuck.h"
class MallardDuck :public Duck {
public:

	MallardDuck(IQuack* quackingBehaviour, IFly* flyingBehaviour) {
		mQuackingBehaviour = quackingBehaviour;
		mFlyingBehaviour = flyingBehaviour;
		duck_name = "Mallard Duck!";
		duck_color = "White";
	}
};

class MuteDuck :public Duck {
public:

	MuteDuck(IQuack* quackingBehaviour, IFly* flyingBehaviour) {
		mQuackingBehaviour = quackingBehaviour;
		mFlyingBehaviour = flyingBehaviour;
		duck_name = "Mute Duck!";
		duck_color = "Yellow";
	}
};

class PlasticDuck :public Duck {
public:

	PlasticDuck(IQuack* quackingBehaviour, IFly* flyingBehaviour) {
		mQuackingBehaviour = quackingBehaviour;
		mFlyingBehaviour = flyingBehaviour;
		duck_name = "Plastic Duck!";
		duck_color = "Blue";
	}
};
