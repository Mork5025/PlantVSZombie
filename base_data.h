#pragma once
#include<graphics.h>

struct archive{
	//ð��ģʽ����
	int main_game=1;
	//С��Ϸ����
	int happy_game[50] = { 0 };//С��Ϸͨ���˾�1��ûͨ�ؾ�0
	//�޾�ģʽ����
	int endless_game[50] = { 0 };//�޾�ģʽ
	//�ҹ��ӣ���׼������������
	int extra_game[50] = { 0 };
	//�ж���ֲ��
	int haved_plants[100] = { 0 };
	int plants = 1;
	//������
	int card = 8;
};//��Ϸ�浵

//λ����Ϣ����¼�����к���
struct Location {
	int x, y;
};
//ͼƬλ����Ϣ����ȷ�����ص�
struct Image_Location {
	int lx, ly;
	int rx, ry;
};

enum PlantType { sun_flower = 1 ,\
	pea_shooter, cherry_boom,null_wall, \
	potato_mine,mouth_flower,double_pea_shooter,\
	ice_pea_shooter,nest_melon\
};

#define WIN_HEIGHT 640//����
#define WIN_WIDTH 1040//����
#define INIT_SUN 50//��ʼ������
#define PRO_SPEED_EN 0.25//��������������ٶ�
#define SUN_PERNUM 25//ÿ�β�����������
#define SUN_LIVESEC 11//������������ʱ��(s)�����������ʱ�����Ⱦ�������������
#define SUN_SPEED 5//����������������ʱ��(s)����غ�ֹͣ�ƶ�
#define ZOMBIES_SPEED 5//��ʬ���ƶ��ٶȣ�һ���ƶ��������ص�