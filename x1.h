#pragma once
#include<iostream>
#include"y1.h";
using namespace std;\
class yuan {
public:
	void setr(int r1);
	void setxy(int x1, int y1);
	int showr();
	int showx();
	int showy();
	void panduan(dian c);
private:
	int r;
	int x, y;
};