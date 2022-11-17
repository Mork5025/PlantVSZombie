#pragma once
#include "Plant.h"
class Sun_Plant :
    public Plant
{
public:
	Sun_Plant();
	Sun_Plant(int set_blood, int set_need_sunshine, int set_x, int set_y);

private:
	double Sun_Speed;
	double Sun_;//当这个值满25个就生成一个阳光，然后该值减25
};

