#pragma once
#include"all_header.h"

//绘制主界面
void main_screen();
//绘制商店界面
void shop_screen();
//选择植物界面
void choose_screen();
//战斗界面
void battle_screen();
//失败界面
void lose_screen();
//胜利界面
void win_screen();
//战斗暂停界面
void stop_screen();
//设置界面
void setting_screen();


//绘制阳光
void draw_sunshine(Sunshine sunshineclass);
//绘制植物
void draw_plant(Plant plantclass);

void draw_bullet(Bullet bullet);

//绘制僵尸
void draw_zombie(Zombie zombieclass);
//绘制小推车
void draw_car(Car carclass);

