#pragma once
#include"all_header.h"

//���������λ��ȷ�����ĸ�����
int what_screen(ExMessage message);
//����浵
void load_archive();
//���뱾��ս�۵����н�ʬ
void load_zombie();

void plant_action(Plant plant);

void zombie_action(Zombie zombie);

void car_action(Car car);

void move_zombie(Zombie zombie);