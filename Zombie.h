#pragma once
#include "base_subject.h"
class Zombie :
    public base_subject
{
public:
    Zombie(int set_blood,int set_attack,double set_arrive_time);

    double get_arrive_time();
    void set_arrive_time(double a);

    void set_is_screen(bool a);
    bool get_is_screen();

    int get_kind();
    void set_kind(int a);

private:
    bool Is_screnn;
    int How_Death;
    int Kind;
};

