#pragma once
#include "base_subject.h"
class Sunshine :
    public base_subject
{
public:
	Sunshine();
	void set_stay_time(double a);
	double get_stay_time();

	void set_start_time(double a);
	double get_start_time();

	void set_left_time(double a);
	double get_left_time();

private:
	double stay_time;
	double start_time;
	double left_time;
};