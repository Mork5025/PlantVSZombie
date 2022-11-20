#pragma once
#include<graphics.h>

struct archive{
	//冒险模式进度
	int main_game=1;
	//小游戏进度
	int happy_game[50] = { 0 };//小游戏通关了就1，没通关就0
	//无尽模式进度
	int endless_game[50] = { 0 };//无尽模式
	//砸罐子，先准备，不打算做
	int extra_game[50] = { 0 };
	//有多少植物
	int haved_plants[100] = { 0 };
	int plants = 1;
	//卡槽数
	int card = 8;
};//游戏存档

//位置信息，记录所在行和列
struct Location {
	int x, y;
};
//图片位置信息，精确到像素点
struct Image_Location {
	int lx, ly;
	int rx, ry;
};

enum PlantType { sun_flower = 1 ,\
	pea_shooter, cherry_boom,null_wall, \
	potato_mine,mouth_flower,double_pea_shooter,\
	ice_pea_shooter,nest_melon\
};

#define WIN_HEIGHT 640//窗高
#define WIN_WIDTH 1040//窗宽
#define INIT_SUN 50//初始阳光数
#define PRO_SPEED_EN 0.25//环境产生阳光的速度
#define SUN_PERNUM 25//每次产生的阳光数
#define SUN_LIVESEC 11//产出的阳光存活时间(s)，与阳光存在时间作比决定阳光死不死
#define SUN_SPEED 5//阳光产生后落地所需时间(s)，落地后即停止移动
#define ZOMBIES_SPEED 5//僵尸的移动速度，一秒移动几个像素点