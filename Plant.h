#pragma once
#include "base_subject.h"
class Plant :
    public base_subject
{
public:
	Plant();
	Plant(int set_blood, int set_need_sunshine, int set_x, int set_y);

	int get_need_sunshine();

	double get_cd();
	void set_cd();

	int get_kind();
	void set_kind(int a);


private:
	int Need_Sunshine;
	double CD;
	PlantType Kind;
};

