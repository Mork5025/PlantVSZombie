#include"all_header.h"

archive archives;
int sunshine_number = 0;

//卡槽
Plant* cards[13] = { NULL };
//游戏地图里面的植物位置
Plant* battle_map[6][10] = {NULL};

//本局僵尸数量
int zombie_nums = 0;
//本局所有的僵尸
Zombie* zombies[5000] = { NULL };

Sunshine* sunshine[500];
//小车
Car* cars[6];

//选卡界面逻辑
void choose_main();
//战斗界面逻辑函数
void battle_main();
//设置界面逻辑函数
void setting_main();
//商店逻辑函数
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
		//绘制主菜单
		main_screen();
		//如果鼠标点击，开始判断点击了哪个按钮
		if (MouseHit()) {
			//根据whatscreen函数判断要打开哪个界面
			switch (what_screen(getmessage())){
			case 1:
				choose_main();//进入选卡界面，然后就进入战斗界面
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
	判断玩家当前拥有植物的数量比卡槽多还是少
	少就跳过选卡界面(但是要自动帮玩家选好卡)
	多就进入选卡界面
*/
void choose_main() {

}


void battle_main() {
	//载入本次战役有多少僵尸
	load_zombie();
	time_t begin_time = time(0);
	time_t now_time;
	time_t pre_time=0;
	/*
	判断植物行为
	要不要生成阳光
	要不要发射子弹

	判断僵尸行为
	要不要出场
	要不要攻击
	被攻击的植物会不会死

	判断子弹行为
	有没有攻击到僵尸
	僵尸死没死

	判断小车行为
	要不要发动小车
	如果要发动就压死一整排的僵尸

	判断游戏是胜利还是失败
	如果有僵尸走到地图左边失败
	如果僵尸死光了，胜利

	判断鼠标事件，如果有鼠标事件就处理鼠标事件
	如果没有就不搞

	开始绘制阶段
	移动子弹
	移动僵尸（先判断僵尸是要攻击还是移动）
	移动阳光
	移动小车
	*/
	//绘制战斗界面背景
	battle_screen();

	while (1) {
		//记录从游戏开始，过去了多久
		now_time = time(0)-begin_time;

		//植物处理
		for (int i = 1; i <= 5; i++) {
			for (int j = 1; j <= 9; j++) {
				if (battle_map[i][j] != NULL) {
					plant_action(battle_map[i][j]);
				}
			}
		}
		//僵尸处理
		for (int i = 0; i < zombie_nums; i++) {
			if (zombies[i]->Is_Alive) {
				zombie_action(zombies[i]);
			}
		}
		//子弹处理

		//小车处理
		for (int i = 0; i < 5; i++) {
			if (cars[i] != NULL) {
				car_action(cars[i]);
			}
		}
		//鼠标处理
		if (MouseHit()) {

		}
		//绘制界面与对象(僵尸，小车，子弹)移动
		//批量绘制
		BeginBatchDraw();
		//绘制植物
		for (int i = 1; i <= 5; i++) {
			for (int j = 1; j <= 9; j++) {
				draw_plant(battle_map[i][j]);
			}
		}
		//绘制僵尸与移动僵尸
		for (int i = 0; i < zombie_nums; i++) {
			draw_zombie(zombies[i]);
			move_zombie(zombies[i]);
		}

		//结束批量绘制
		EndBatchDraw();
		//让程序暂停20ms
		Sleep(20);
	}
}
//设置界面
void setting_main(){

}
//商店界面
void shop_main(){

}

void happy_main(){

}

void endless_main(){

}

void extra_main(){

}
