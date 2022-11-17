#pragma once
#include "Plant.h"
class Shooter :
    public Plant
{
public:
	Shooter();
	Shooter(int set_blood, int set_need_sunshine, int set_attack, int set_attack_speed, int set_x, int set_y);
};

