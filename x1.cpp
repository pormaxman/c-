#include "x1.h"
void yuan::setr(int r1) {
	r = r1;
}
void yuan::setxy(int x1, int y1) {
x = x1;
y = y1;
}
int yuan:: showr() {
return r;
}
int yuan::showx() {
return x;
}
int yuan::showy() {
return y;
}
void  yuan::panduan(dian c) {
if ((x - c.showx()) * (x - c.showx()) + (y - c.showy()) * (y - c.showy()) == r * r) {
	cout << "在圆上" << endl;
}
else if((x - c.showx()) * (x - c.showx()) + (y - c.showy()) * (y - c.showy()) > r * r) {
	cout << "在圆外" << endl;
}
else {
	cout << "在圆内" << endl;
}
}