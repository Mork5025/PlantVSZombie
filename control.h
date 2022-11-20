#pragma once
#include"all_header.h"

//根据鼠标点击位置确定打开哪个界面
int what_screen(ExMessage message);
//载入存档
void load_archive();
//载入本次战役的所有僵尸
void load_zombie();

void plant_action(Plant plant);

void zombie_action(Zombie zombie);

void car_action(Car car);

void move_zombie(Zombie zombie);