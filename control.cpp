#include "control.h"
extern archive archives;
extern int sunshine_number;
extern Plant* cards[13];
extern Plant* battle_map[6][10];
extern int zombie_nums;
extern Zombie* zombies[5000];
extern Sunshine* sunshine[500];
extern Car* cars[6];
/*
	根据鼠标点击事件结构体判断鼠标点了哪里
*/
int what_screen(ExMessage message){

	return 0;
}

void load_archive(){

}
/*
	载入本次战斗所有的僵尸
*/
void load_zombie(){

}

void plant_action(Plant plant){


}

void zombie_action(Zombie zombie)
{
	if (!zombie.Is_screen) {//如果僵尸没上场，要判断它上不上场

	}
	//如果僵尸所在的行列存在植物，僵尸就应该攻击了
	//然后还要判断这次攻击后这个植物挂没挂
	if (battle_map[zombie.location.x][zombie.location.y] != NULL) {

	}
}

void car_action(Car car){

}

void move_zombie(Zombie zombie){

}