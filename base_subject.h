#pragma once
#include"base_data.h"

class base_subject
{
public:
	base_subject();
	base_subject(int set_blood);

	void set_xy(int x, int y);
	Location get_xylocation();

	void set_location(int lx, int ly, int rx, int ry);
	Image_Location get_location();


	int get_blood();
	void set_blood(int a);

	bool is_alive();
	void set_alive(bool a);

	int get_speed();
	void set_speed(int a);

	int get_attack();
	void set_attack(int a);

	void set_image(IMAGE an_image);

private:
	int blood;
	int attack;
	double attack_speed;
	Location location;
	Image_Location image_location;
	IMAGE image;
	bool Is_Alive;
	int speed;
};

