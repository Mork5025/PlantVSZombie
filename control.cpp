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
	����������¼��ṹ���ж�����������
*/
int what_screen(ExMessage message){

	return 0;
}

void load_archive(){

}
/*
	���뱾��ս�����еĽ�ʬ
*/
void load_zombie(){

}

void plant_action(Plant plant){


}

void zombie_action(Zombie zombie)
{
	if (!zombie.Is_screen) {//�����ʬû�ϳ���Ҫ�ж����ϲ��ϳ�

	}
	//�����ʬ���ڵ����д���ֲ���ʬ��Ӧ�ù�����
	//Ȼ��Ҫ�ж���ι��������ֲ���û��
	if (battle_map[zombie.location.x][zombie.location.y] != NULL) {

	}
}

void car_action(Car car){

}

void move_zombie(Zombie zombie){

}