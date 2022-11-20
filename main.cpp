#include"all_header.h"

archive archives;
int sunshine_number = 0;

//����
Plant* cards[13] = { NULL };
//��Ϸ��ͼ�����ֲ��λ��
Plant* battle_map[6][10] = {NULL};

//���ֽ�ʬ����
int zombie_nums = 0;
//�������еĽ�ʬ
Zombie* zombies[5000] = { NULL };

Sunshine* sunshine[500];
//С��
Car* cars[6];

//ѡ�������߼�
void choose_main();
//ս�������߼�����
void battle_main();
//���ý����߼�����
void setting_main();
//�̵��߼�����
void shop_main();
//
void happy_main();
//
void endless_main();
//
void extra_main();


int main() {
	initgraph(WIN_WIDTH,WIN_HEIGHT);
	
	load_archive();

	while (1) {
		//�������˵�
		main_screen();
		//������������ʼ�жϵ�����ĸ���ť
		if (MouseHit()) {
			//����whatscreen�����ж�Ҫ���ĸ�����
			switch (what_screen(getmessage())){
			case 1:
				choose_main();//����ѡ�����棬Ȼ��ͽ���ս������
				break;
			case 2:
				setting_main();
				break;
			case 3:
				shop_main();
				break;
			case 4:
				happy_main();
				break;
			case 5:
				endless_main();
				break;
			case 6:
				extra_main();
				break;
			default:
				break;
			}
		}
	}
	
	closegraph();
	return 0;
}
/*
	
*/
/*
	�ж���ҵ�ǰӵ��ֲ��������ȿ��۶໹����
	�پ�����ѡ������(����Ҫ�Զ������ѡ�ÿ�)
	��ͽ���ѡ������
*/
void choose_main() {

}


void battle_main() {
	//���뱾��ս���ж��ٽ�ʬ
	load_zombie();
	time_t begin_time = time(0);
	time_t now_time;
	time_t pre_time=0;
	/*
	�ж�ֲ����Ϊ
	Ҫ��Ҫ��������
	Ҫ��Ҫ�����ӵ�

	�жϽ�ʬ��Ϊ
	Ҫ��Ҫ����
	Ҫ��Ҫ����
	��������ֲ��᲻����

	�ж��ӵ���Ϊ
	��û�й�������ʬ
	��ʬ��û��

	�ж�С����Ϊ
	Ҫ��Ҫ����С��
	���Ҫ������ѹ��һ���ŵĽ�ʬ

	�ж���Ϸ��ʤ������ʧ��
	����н�ʬ�ߵ���ͼ���ʧ��
	�����ʬ�����ˣ�ʤ��

	�ж�����¼������������¼��ʹ�������¼�
	���û�оͲ���

	��ʼ���ƽ׶�
	�ƶ��ӵ�
	�ƶ���ʬ�����жϽ�ʬ��Ҫ���������ƶ���
	�ƶ�����
	�ƶ�С��
	*/
	//����ս�����汳��
	battle_screen();

	while (1) {
		//��¼����Ϸ��ʼ����ȥ�˶��
		now_time = time(0)-begin_time;

		//ֲ�ﴦ��
		for (int i = 1; i <= 5; i++) {
			for (int j = 1; j <= 9; j++) {
				if (battle_map[i][j] != NULL) {
					plant_action(battle_map[i][j]);
				}
			}
		}
		//��ʬ����
		for (int i = 0; i < zombie_nums; i++) {
			if (zombies[i]->Is_Alive) {
				zombie_action(zombies[i]);
			}
		}
		//�ӵ�����

		//С������
		for (int i = 0; i < 5; i++) {
			if (cars[i] != NULL) {
				car_action(cars[i]);
			}
		}
		//��괦��
		if (MouseHit()) {

		}
		//���ƽ��������(��ʬ��С�����ӵ�)�ƶ�
		//��������
		BeginBatchDraw();
		//����ֲ��
		for (int i = 1; i <= 5; i++) {
			for (int j = 1; j <= 9; j++) {
				draw_plant(battle_map[i][j]);
			}
		}
		//���ƽ�ʬ���ƶ���ʬ
		for (int i = 0; i < zombie_nums; i++) {
			draw_zombie(zombies[i]);
			move_zombie(zombies[i]);
		}

		//������������
		EndBatchDraw();
		//�ó�����ͣ20ms
		Sleep(20);
	}
}
//���ý���
void setting_main(){

}
//�̵����
void shop_main(){

}

void happy_main(){

}

void endless_main(){

}

void extra_main(){

}
