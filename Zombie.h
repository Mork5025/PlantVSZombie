#pragma once
#include "base_subject.h"
class Zombie :
    public base_subject
{
public:
    bool Is_screen;
    int How_Death;
    int Kind;
    time_t arrive_time;//僵尸出场的时间
};

