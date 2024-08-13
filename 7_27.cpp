#include<iostream>
using namespace std;
#include<string>
#include<cmath>
#include <ctime>
//打印hello word
//int main() {
//	int a = 1200;
//	cout << "hello word" << endl;
//	cout << "a=" << a << endl;
//	system("pause");
//	return 0;
//}


//宏常量  const修饰的变量为常量相当于常变量
//#define day 7
//int main() {
//	const int mou = 10;
//	cout << "一个星期多少天" << day << endl;
//	cout << mou << endl;
//	system("pause");
//	return 0;
//}


////fload :单精度  double：双精度  有效数字都是6位
//int main() {
//	float f1 = 100.5446546;
//	double d1 = 5646.5656565;
//	//e2相当于10的二次方 若为e-2则为0.1的二次方
//	float f2 = 2e2;
//	cout << f2 << endl;
//	cout << f1 << endl;
//	cout << d1 << endl;
//	system("pause");
//	return 0;
//}


//查看ascll码值
//int main() {
//	char x = 'a';
//	cout << (int)x << endl;
//	system("pause");
//	return 0;
//}

//定义字符串
//int main() {
//	string qwer = "hahahha";
//	cout << "qwer=" << qwer <<endl;
//	system("pause");
//	return 0;
//}

//宏常量define与const修饰的常变量
//#define money 100
//int main() {
//	const int haha = 100;
//	cout << "money=" << money<< endl;
//	haha = 200;
//	cout << "money=" << haha << endl;
//	system("pause");
//	return 0;
//}


//整形有short：2字节 int：4 long：windows为4 linux x64 为8 longlong：8
//float：4字节 7位有效数字  double：8字节 15-16有效数字

//cpp里面有bool c里面没  bool类型只占一字节大小
//int main() {
//	bool haha = true;
//	bool ha = false;
//	cout << haha << sizeof(haha) << endl;
//	cout << ha << sizeof(ha) << endl;
//	system("pause");
//	return 0;
//}


//数据的输入
//先初始化数据
//int main() {
//	int a ;
//	cin >> a;
//	cout << "a=" << a << endl;
//	system("pause");
//	return 0;
//}


//运算符中的 == 和！=  返回值为bool类型
//int main() {
//	int a = 100;
//	int b = 200;
//	cout << (a == b) << endl;
//	cout << (a != b) << endl;
//	system("pause");
//	return 0;
//}


//三目运算符  
//int main() {
//	int a, b;
//	cin >> a;
//	cin >> b;
//	int c = (a > b ? a : b);
//	cout << c << endl;
//	system("pause");
//	return 0;
//}


//水仙花数
//int main() {
//	int x = 100;
//	int y, z,m;
//	do {
//		y = x / 100;
//		z = (x/10)%10;
//		m = x % 10;
//		if (x == (pow(y, 3)) + (pow(z, 3)) + (pow(m, 3))) {
//			cout<<x<<endl;
//			x++;
//		}
//		else {
//			x++;
//		}
//	}while(x<1000);
//	system("pause");
//	return 0;
//}


//int main() {
//	int y, z, w;
//	for (int x = 1; x <= 100; x++) {
//		y = x / 100;
//		z = (x / 10) % 10;
//		w = x % 10;
//		if (w == 7 || z == 7 || x % 7 == 0) {
//			cout << "敲桌子" << endl;
//		}
//		else {
//			cout << x << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}


//九九乘法表
//int main() {
//	for (int z = 1; z <= 9; z++) {
//		for (int y = 1; y <= z; y++) {
//			cout << y << "x" << z << "=" << (z * y)<<"  ";
//
//		}
//		cout<< "\n" << endl;
//	}
//	system("pause");
//	return 0;
//}


//goto语句 相当于跳过或者是回环
//int main() {
//	cout << "1" << endl;
//
//	goto FLAG;
//
//	cout << "1" << endl;
//	cout << "1" << endl;
//	cout << "1" << endl;
////注意此处是：
//FLAG:
//
//	system("pause");
//	return 0;
//}


//比较小猪的最大体重
//int main() {
//	int y=1;
//	int arr[5] = { 300,554,689,9,223 };
//	for (int x = 0; x < 5; x++) {
//		y = (y > arr[x]?y:arr[x]);
//	}
//	cout << y << endl;
//	system("pause");
//	return 0;
//}


//元素的逆置-
//int main() {
//	int z=0;
//	int arr1[5] = { 1,2,3,4,5 };
//	int y = (sizeof(arr1) / sizeof(arr1[0])) - 1;
//	for (int x = 0; x < (sizeof(arr1) / sizeof(arr1[0])/2); x++) {
//		for (y; y >= 0;) {
//			z = arr1[x];
//			arr1[x] = arr1[y];
//			arr1[y] = z;
//			y--;
//			break;
//		}
//	}
//	for (int a = 0; a <= (sizeof(arr1) / sizeof(arr1[0])); a++) {
//		cout << arr1[a] << endl;
//	}
//	system("pause");
//	return 0;
//}


//冒泡排序
//int main() {
//	int arr[6] = { 6,2,3,4,5,1 };
//	for (int i = 0; i < 6 - 1; i++) {
//		for (int j = 0; j < 6 - 1 - i; j++) {
//			if (arr[j] > arr[j + 1]) {
//				int x = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = x;
//			}
//		}
//	}
//	for (int y = 0; y < 6; y++) {
//		cout << arr[y] << " ";
//	}
//	system("pause");
//	return 0;
//}


//二堆数组
//int main() {
//	int arr[3][3] = {
//		{1,2,3},
//		{4,5,6},
//		{7,8,9}
//	};
//	//求二堆数组的行数
//	int hang = sizeof(arr) / sizeof(arr[0]);
//	cout << hang << endl;
//	//求列
//	int lie = sizeof(arr[0]) / sizeof(arr[0][0]);
//	cout << lie << endl;
//	system("pause");
//	return 0;
//}


//求成绩咧
//int main() {
//	int arr[3][3] = {
//		{100,100,100},
//		{90,52,62},
//		{45,64,65},
//	};
//	string names[3] = { "zhangsan","lisi","wangwu" };
//	int sum = 0;
//	for (int x = 0; x < 3; x++) {
//		sum = 0;
//		for (int y = 0; y < 3; y++) {
//			int fen = arr[x][y];
//			sum += fen;
//		}
//	cout <<names[x]<<" : " << sum << endl;
//	}
//	system("pause");
//	return 0;
//}


//int haha(int a) {
//	return 10;
//}
//
//int main() {
//	haha(1);
//	cout << haha(1) << endl;
//	system("pause");
//	return 0;
//}


//函数的声明就是创建一个函数但是不写函数体
//int main() {
//	int ha(int x);
//	ha(3);
//	int ha(int x) {
//		cout << x << endl;
//		return 2;
//	}
//	system("pause");
//	return 0;
//}


//分文件编写引用
//#include "host.h"
//int main() {
//	cout<<max(19, 5674)<<endl;
//	system("pause");
//	return 0;
//}


//指针
//指针不一定是int 也可以是float char double。。。
//int * a=&b  a=b的地址  *a=b:叫解地址
//空指针  int * a=NULL;
//野指针：int *p=(int *)0x1100;   相当于直接将内存地址空间分配给p


//const修饰指针有三种
//int main() {
////一：const修饰指针
//	int a = 45;
//	int b = 20;
//	const int* y = &a;
//	//*y = 100; //错误const修饰的是指针不能修改*y
//	cout << &a << endl;
//	cout << &b << endl;
//	cout << *y << endl;
//	y = &b;
//	cout << *y << endl;
////二：const修饰的是指指向的量	
//	int* const x = &a;
//	//x=&b  报错不能修改
//	*x = 100;
//	cout << *x << endl;
//
////三：const既修饰指针也修饰指针指向的量
//	const int* const z = &a;
//	*z = 100;  //都会报错
//	z = &b;
//}


//利用指针遍历数组
//int main() {
//	int arr[10] = { 1,2,3,45,5,6,8,9,5,100 };
//	//注意arr本身就是地址不用&arr
//	int* x = arr;
//	cout << *x << endl;
//	for (int y=0; y < 10; y++) {
//		cout << *x << endl;
//		x++;
//	}
//	system("pause");
//	return 0;
//}


//指针和函数
//void swap(int * x, int * y) {
//	int temp = * x;
//	* x =* y;
//	* y = temp;
//}
//int main() {
//	int x = 100;
//	int y = 200;
//	swap(&x, &y);
//	cout << x << y<<endl;
//	system("pause");
//	return 0;
//}


//冒泡
//void maopao(int * arr, int len) {
//	for (int x=0; x < len - 1; x++) {
//		for (int y=0; y < len - 1 - x; y++) {
//			if (arr[y] > arr[y + 1]) {
//				int temp = arr[y];
//				arr[y] = arr[y + 1];
//				arr[y + 1] = temp;
//			}
//		}
//	}
//}
//
//void print(int arr[], int len) {
//	for (int x = 0; x < len; x++) {
//		cout << arr[x] << endl;
//	}
//}
//
//int main() {
//	int arr[10] = { 1,6,7,95,54,545,887,545,245,544 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	maopao(arr, len);
//
//	print(arr, len);
//	system("pause");
//	return 0;
//}


//结构体 相当于类
//struct student {
//	string name;
//	int age;
//	int score;
//};
//int main() {
//	student s1 = { "张三",20,100 };
//	student s2 = { "李四",21,122 };
//	cout << s1.name << s1.age << s1.score<<endl;
//
//	//结构体数组
//	student arr[2] = {
//		{ "张三",20,100 },
//		{ "李四",21,122 },
//	};
//
//	cout << arr[1].name << endl;
//
//	//结构体指针
//	student* p = arr;
//	//利用指针操作符可以实现访问成员
//	p->name = "baga";
//	cout << p->name << endl;
//	system("pause");
//	return 0;
//}


//结构体镶嵌结构体
//struct student {
//	string name;
//	int age;
//	int score;
//};
//
//struct teacher {
//	string name;
//	int age;
//	student s1; //创建子结构体s1学生
//};
//
//int main() {
//	teacher t1 = { "wnagba",45 };
//	t1.s1 = { "张三",20,100 };
//	cout << t1.s1.name << t1.s1.age << t1.s1.score << endl;
//	system("pause");
//	return 0;
//}


//结构体做函数参数
//struct student {
//	string name;
//	int age;
//};
//
//void change(student* p) {
//	p->name="lisi";
//	cout << p->name << p->age << endl;
//}
//
//int main() {
//	student s1 = { "haha",20 };
//	student s2 = { "zhangsan",54 };
//	change(&s1);
//	cout << s1.name << endl;
//	system("pause");
//	return 0;
//}

//const 同样可以用在结构体中的地址传递中来防止误操作

//案例
//struct student {
//	string name;
//	int score;
//};
//
//struct teacher {
//	string name;
//	student sarr[5];
//};
//
//void ba(teacher tarr[],int len) {
//	string tname = "教师";
//	string sname = "学生";
//	string nameseed = "ABCDE";
//	for (int i = 0; i < len; i++) {
//		tarr[i].name = tname + nameseed[i];
//		cout << tarr[i].name << endl;
//		for (int j = 0; j < 5; j++) {
//			tarr[i].sarr[j].name= sname + nameseed[j];
//			tarr[i].sarr[j].score = rand() % 61 + 40;
//			cout << "\t学生:" << tarr[i].sarr[j].name << "分数为" << tarr[i].sarr[j].score << endl;
//		}
//	}
//}
//
//int main() {
//	srand((unsigned int)time(NULL));
//	teacher tarr[3];
//	int len = sizeof(tarr) / sizeof(tarr[1]);
//	ba(tarr, len);
//
//
//	system("pause");
//	return 0;
//}


//设计一个英雄的结构体，包括成员姓名，年龄，性别; 创建结构体数组，数组中存放5名英雄。通过冒泡排序的算法，将数组中的英雄按照年龄进行升序排序，最终打印排序后的结果。
//struct hero {
//	string name;
//	int age;
//	string sex;
//};
//
//void change(hero arr[], int len) {
//	for (int i = 0; i < len - 1; i++) {
//		for (int j = 0; j < len - i - 1; j++) {
//			if (arr[j].age > arr[j + 1].age) {
//				hero temp = arr[j +1];
//				arr[j + 1] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//}
//
//void print(hero arr[], int len) {
//	for (int i = 0; i < len; i++) {
//		cout << "名字:" << arr[i].name << "年龄：" << arr[i].age << "性别：" << arr[i].sex << endl;
//	}
//}
//
//int main() {
//	hero arr[5] = {
//		{"刘备",23,"男"},
//		{"关羽",22,"男"},
//		{"张飞",20,"男"},
//		{"赵云",21,"男"},
//		{"貂蝉",19,"女"},
//	};
//	int len = sizeof(arr) / sizeof(arr[0]);
//	change(arr, len);
//	print(arr, len);
//	system("pause");
//	return 0;
//}


//通讯录管理系统
//void menu() {
//	cout << "***************************"<< endl;
//	cout << "*******1:添加联系人********"<< endl;
//	cout << "*******2:显示联系人********" << endl;
//	cout << "*****  3:删除联系人  *****" << endl;
//	cout << "*****  4:查找联系人  *****" << endl;
//	cout << "*****  5:修改联系人  *****" << endl;
//	cout << "*****  6:清空联系人  *****" << endl;
//	cout << "*****  0:退出通讯录  *****" << endl;
//	cout << "***************************" << endl;
//}
//
//struct person {
//	string pname;
//	int psex;
//	int page;
//	string pphone;
//	string paddr;
//};
//
//
//#define MAX 1000
//struct addrbook {
//	struct person padd[MAX];
//	int p_size;
//};
//
//void addperson(addrbook* abs)
//{
//	//名字
//	if (abs->p_size == MAX) {
//		cout << "已满无法添加" << endl;
//	}
//	else {
//		string name;
//		cout << "输入姓名" << endl;
//		cin >> name;
//		abs->padd[abs->p_size].pname = name;
//	}
//
//
//	//性别
//	int sex;
//	cout << "输入性别" << endl;
//	cout << "1：男 ， 2：女" << endl;
//	while (1) {
//		cin >> sex;
//		if (sex == 1 || sex == 2) {
//			abs->padd[abs->p_size].psex = sex;
//			break;
//		}
//		cout << "输入错误，请重新输入" << endl;
//	}
//
//
//	//年龄
//	int age = 0;
//	cout << "请输入年龄：" << endl;
//	cin >> age;
//	abs->padd[abs->p_size].page = age;
//
//	//电话
//	string phone="";
//	cout << "请输入电话" << endl;
//	cin >> phone;
//	abs->padd[abs->p_size].pphone = phone;
//
//
//	//家庭住址
//	string add = "";
//	cout << "输入家庭住址" << endl;
//	cin >> add;
//	abs->padd[abs->p_size].paddr =add;
//
//	//更新通讯录的人数
//	abs->p_size++;
//	cout << "添加成功" << endl;
//	system("pause");
//	system("cls");
//}
//
//void showperson(addrbook * abs) {
//	if (abs->p_size == 0) {
//		cout << "未添加任何的记录" << endl;
//	}
//	else {
//		for (int i = 0; i < abs->p_size; i++) {
//			cout << "姓名：" << abs->padd[i].pname << "\t";
//			cout << "性别：" << abs->padd[i].psex << "\t";
//			cout << "年龄：" << abs->padd[i].page  << "\t";
//			cout << "电话：" << abs->padd[i].pphone << "\t";
//			cout << "住址：" << abs->padd[i].paddr << endl;
//		}
//	}
//	system("pause");
//	system("cls");
//}
//
////删除
////封装判断是否存在联系人
//int exitperson(addrbook * abs,string name) {
//	for (int x = 0; x < abs->p_size; x++) {
//		if (abs->padd[x].pname == name) {
//			return x;
//		}
//	}
//	return -1;
//}
//
////封装删除指定的联系人
//void delperson(addrbook* abs) {
//	cout << "输入你想要删除人的名字" << endl;
//	string name;
//	cin >> name;
//	int x = exitperson(abs, name);
//	if (x != -1) {
//		for (int i = x; i < abs->p_size; i++) {
//			abs->padd[i] = abs->padd[i + 1];
//		}
//		abs->p_size--;
//		cout << "删除成功姓名为" << name << endl;
//	}
//	else {
//		cout << "未找到这个人" << endl;
//	}
//	system("pause");
//	system("cls");
//}
//
//
////查找联系人
//void showsperson(addrbook *abs){
//	string name;
//	cout << "输入你要查找人的名字" << endl;
//	cin >> name;
//	int x =exitperson(abs, name);
//	if (x != -1) {
//		cout << "姓名：" << abs->padd[x].pname << "\t";
//		cout << "性别：" << abs->padd[x].psex << "\t";
//		cout << "年龄：" << abs->padd[x].page << "\t";
//		cout << "电话：" << abs->padd[x].pphone << "\t";
//		cout << "住址：" << abs->padd[x].paddr << endl;
//	}
//	else {
//		cout << "查无此人" << endl;
//	}
//	system("pause");
//	system("cls");
//}
//
////修改联系人
//void xiuperson(addrbook* abs) {
//	cout << "输入你要修改的联系人的名字" << endl;
//	string name;
//	cin >> name;
//	int x = exitperson(abs, name);
//	if (x != -1) {
//		int input;
//		while (1) {
//			cout << "输入你要修改的属性（1-5）\n";
//			cout << "1:名字\n" << "2:性别\n" << "3:年龄\n" << "4:电话\n" << "5:住址\n" << "6:修改完毕" << endl;
//			cin >> input;
//			if (input == 1) {
//				string name;
//				cout << "输入名字"<<endl;
//				cin >> name;
//				abs->padd[x].pname = name;
//			}
//			else if (input == 2) {
//				int sex;
//				cout << "请输入性别：" << endl;
//				cout << "1 -- 男" << endl;
//				cout << "2 -- 女" << endl;
//				while (1)
//				{
//					cin >> sex;
//					if (sex == 1 || sex == 2)
//					{
//						abs->padd[x].psex = sex;
//						break;
//					}
//					cout << "输入有误，请重新输入";
//				}
//			}
//			else if (input == 3) {
//				cout << "输入修改的年龄" << endl;
//				int age = 0;
//				cin >> age;
//				abs->padd[x].page = age;
//			}
//			else if (input == 4) {
//				cout << "输入修改的电话" << endl;
//				string phone;
//				cin >> phone;
//				abs->padd[x].pphone = phone;
//			}
//			else if (input == 5) {
//				cout << "输入修改的家庭住址" << endl;
//				string addr;
//				cin >> addr;
//				abs->padd[x].paddr = addr;
//			}
//			else if (input == 6) {
//				cout << "修改完毕" << endl;
//				break;
//			}
//			else {
//				cout << "输入错误请重新输入" << endl;
//			}
//		}
//
//	}
//	else {
//		cout << "未找到姓名为" << name << "的人" << endl;
//	}
//	system("pause");
//	system("cls");
//}
//
////清除所有联系人
//void qinperson(addrbook* abs) {
//	abs->p_size = 0;
//	cout << "通讯录已经清空" << endl;
//	system("pause");
//	system("cls");
//}
//
//int main() {
//	addrbook abs;
//	abs.p_size = 0;
//	int input;
//	while (1) {
//		menu();
//		cout << "输入你要进行的操作" << endl;
//		cin >> input;
//		switch(input){
//		case 1:
//			addperson(&abs);
//			break;
//		case 2:
//			showperson(&abs);
//			break;
//		case 3:
//			delperson(&abs);
//			break;
//		case 4:
//			showsperson(&abs);
//			break;
//		case 5:
//			xiuperson(&abs);
//			break;
//		case 6:
//			qinperson(&abs);
//			break;
//		case 0:
//			cout << "欢迎下次使用" << endl;
//			system("pause");
//			return 0;
//		default:
//			cout << "输入错误请重新输入：" << endl;
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}


//程序运行前为：代码区和全局区   程序运行后为栈区和堆区
// 栈区
//int * func()
//{
//	int a = 10;
//	return &a;
//}
//
//int main() {
//
//	int *p = func();
//
//	cout << *p << endl;
//	cout << *p << endl;
//
//	system("pause");
//
//	return 0;
//}


//堆区
//int* abc() {
//	int *a = new int(10);
//	return a;
//}
//
//int main() {
//	int* b = abc();
//	cout << *b << endl;
//	cout << *b << endl;
//	cout << *b << endl;
//	system("pause");
//	return 0;
//}


//堆区开辟数组
//int main() {
//	int* arr = new int[10];
//	for (int i = 0; i < 10; i++) {
//		arr[i] = 100 + i;
//	}
//	for (int j = 0; j < 10; j++) {
//		cout << arr[j]<< endl;
//	}
//	//释放堆区
//	delete[] arr;
//	system("pause");
//	return 0;
//}


//别名
//int main() {
//	int a = 100;
//	//相当于给a起一个别名b b和a的储存地址是相同的所以改变b的值的时候也会改变a的值
//	int& b = a;
//	cout << a << b << endl;
//	b = 200;
//	cout << a << b << endl;
//	system("pause");
//	return 0;
//}


//函数的默认参数
//函数可以设置初始参数
//int func(int a, int b = 10, int c = 20) {
//	return a + b * c;
//}
//int main() {
//	cout << func(10, 20);
//	return 0;
//}


//函数 的重载
//条件：1：在一个作用域下
//		2：函数名相同
//		3：函数的参数类型不同或者个数不同或者顺序不同
//void ha() {
//	cout << "haha"<<endl;
//}
//void ha(int a) {
//	cout << "haha"<<a<<endl;
//}
//void ha(double a) {
//	cout << "hahahaha"<<a<<endl;
//}
//
//int main() {
//	ha();
//	ha(2.1);
//	ha(3);
//}


//封装
//设计一个类来计算圆的周长
//#define PI 3.14
//class haha {
//public:
//	int m_r;
//	double calculateZC() {
//		return 2 * PI * m_r;
//	}
//};
//
//int main() {
//	haha c1;
//	cin >> c1.m_r;
//	cout << c1.calculateZC() << endl;
//	return 0;
//}


//设计一个学生类，属性有姓名和学号，可以赋值给姓名和学号，并且可以显示；、
//class student {
//public:
//	string m_name;
//	int m_son;
//	void show() {
//		cout << m_name << " " << m_son<<endl;
//	}
//};
//
//int main() {
//	student m;
//	string name;
//	int son;
//	cin >> m.m_name;
//	cin >> m.m_son;
//	m.show();
//	return 0;
//}

//class：public：公共权限 ：都可以访问 protected：保护权限：类可以访问，类外不可以访问  private：私有权限：都不可以访问
//struct：默认访问权限是公共和class：默认访问权限是私有是的唯一区别


//设置判断长方体
//class chang {
//public:
//	void setchang(int m) {
//		chang = m;
//	}
//	void setkuan(int n) {
//		kuan = n;
//	}
//	void setgao(int z) {
//		gao = z;
//	}
//	int showchang() {
//		return chang;
//	}
//	int showkuan() {
//		return kuan;
//	}
//	int showgao() {
//		return gao;
//	}
//	int shows() {
//		return (chang * kuan + chang * gao + kuan * gao) * 2;
//	}
//	int showt() {
//		return chang * kuan * gao;
//	}
//
//	bool panduan(chang&c2) {
//		if (chang == c2.chang && kuan == c2.kuan && gao == c2.gao) {
//			return true;
//		}
//		return false;
//}
//
//private:
//	int chang;
//	int kuan;
//	int gao;
//};
//
//bool haha(chang& c1, chang& c2) {
//	if (c1.showchang() == c2.showchang() && c1.showkuan() == c2.showkuan() && c1.showgao() == c2.showgao()) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//
//int main() {
//	chang c1, c2;
//	c1.setchang(10);
//	c1.setkuan(10);
//	c1.setgao(10);
//
//
//	c2.setchang(10);
//	c2.setkuan(10);
//	c2.setgao(11);
////全局函数判断
//	bool ret = haha(c1, c2);
//	if (ret == true) {
//		cout << "xiangtong" << endl;
//	}
//	else {
//		cout << "buxiangtong" << endl;
//	}
//
//
//
//
////成员函数判断：
//	if (c2.panduan(c1) == true) {
//		cout << "xiangtong" << endl;
//	}
//	else {
//		cout << "buxiangtong" << endl;
//	}
//	return 0;
//}



//类可以在在类内使用
////设计点
//class dian {
//public:
//	void setxy(int x,int y) {
//		xx = x;
//		yy = y;
//	}
//	int showx() {
//		return xx;
//	}
//	int showy() {
//		return yy;
//	}
//private:
//	int xx, yy;
//};
//
//
////设计圆
//class yuan {
//public:
//	void setr(int r1) {
//		r = r1;
//	}
//	void setxy(int x1, int y1) {
//		x = x1;
//		y = y1;
//	}
//	int showr() {
//		return r;
//	}
//	int showx() {
//		return x;
//	}
//	int showy() {
//		return y;
//	}
//	void panduan(dian c) {
//		if ((x - c.showx()) * (x - c.showx()) + (y - c.showy()) * (y - c.showy()) == r * r) {
//			cout << "在圆上" << endl;
//		}
//		else if((x - c.showx()) * (x - c.showx()) + (y - c.showy()) * (y - c.showy()) > r * r) {
//			cout << "在圆外" << endl;
//		}
//		else {
//			cout << "在圆内" << endl;
//		}
//	}
//private:
//	int r;
//	int x, y;
//};
//
//
//#include "x1.h";
//#include "y1.h";
//int main() {
//	yuan y1;
//	y1.setr(10);
//	y1.setxy(10, 0);
//	cout << "半径为" << y1.showr() << endl;
//	cout << "x坐标为" << y1.showx() << endl;
//	cout << "y坐标为" << y1.showy() << endl;
//	dian d;
//	d.setxy(10, 10);
//	y1.panduan(d);
//	return 0;
//}


//函数的初始化清理
//class student {
//public:
//	student(int x) {
//		cout << "你好" << x<<endl;
//	}
//	~student() {
//		cout << "你不好" << endl;
//	}
//};
//
//int main() {
//	student a(2);
//	return 0;
//}


//构造函数
//class person {
//public:
//	person() {
//		cout << "无参构造函数" << endl;
//	}
//
//	person(const person& p) {
//		cout << "这是拷贝函数" << endl;
//	}
//
//	~person() {
//		cout << "这是析折函数" << endl;
//	}
//};
//
//int main() {
//	person p;
//	person p1=person(p);
//	return 0;
//}


//深拷贝与浅拷贝
//class student {
//public:
//	int age;
//	int* scond;
//	student(int a,int b) {
//		age = a;
//		scond = new int(b);
//	}
//	student(const student& a) {
//		age = a.age;
//		scond = new int(*a.scond);
//	}
//	~student() {
//		if (scond != NULL) {
//			delete scond;
//		}
//		cout << "你好" << endl;
//	}
//};
//void show() {
//	student a(2, 3);
//	student b(a);
//	cout << b.age << "   " << *b.scond;
//
//}
//
//int main() {
//	show();
//	return 0;
//}


//初始化列表
//class studnet {
//public:
//	int son, age, scand;
//	studnet(int a, int b, int c) :son(a), age(b), scand(c){}
//
//	void print() {
//		cout << son << age << scand;
//	}
//};
//
//int main() {
//	studnet a(1, 2, 3);
//	a.print();
//	return 0;
//}


//类中的类
//class student {
//public:
//	string name;
//	student(string a) {
//		name = a;
//		cout << "student构造函数" << endl;
//	}
//
//	~student(){
//		cout << "studnet洗过函数" << endl;
//	}
//};
//
//class teacher {
//public:
//	int age;
//	student sname;
//	teacher(int a, string b) :age(a),sname(b) {
//		cout << "techer的构造函数"<<endl;
//	}
//	~teacher() {
//		cout << "teacher的析构函数" << endl;
//	}
//	void print() {
//
//		cout << age << "的老师带的学生的姓名叫" << sname.name << endl;;
//	}
//};
//void test() {
////当类中成员是其他类对象时，我们称该成员为 对象成员
////构造的顺序是 ：先调用对象成员的构造，再调用本类构造
////析构顺序与构造相反
//	teacher a(20, "nima");
//	a.print();
//}
//
//int main() {
//	
//	test();
//	return 0;
//}

//静态成员
//class student {
//public:
//	//静态成员类内定义，类外初始化
//	static int age;
//	int ha = 1;
//	//静态成员函数只能访问静态成员变量
//	static void haha() {
//		cout << age << endl;
//		//无法成功赋值，因为该函数无法确定该变量ha是那个对象的
//		ha = 10;
//	}
//
//};
//
////类外初始化    必须要有不然报错
//int student::age = 1;
////static共用一个数据  只有一个值 所有对象公用
//
//void test() {
//	cout << student::age << endl;
//	student a1;
//	a1.age = 10;
//	student a2;
//	a2.age = 20;
//	student::age = 30;
//	cout << student::age << endl;
//	cout << a1.age << endl;
//}
//
//
//int main() {
//	test();
//	return 0;
//}



//成员变量和成员函数分开储存
//class student {
//public:
//	int a;
//	char b;
//	//非静态成员变量占对象空间
//	int mA;
//	//静态成员变量不占对象空间
//	static int mB;
//	//函数也不占对象空间，所有函数共享一个函数实例
//	void func() {
//		cout << "mA:" << this->mA << endl;
//	}
//	//静态成员函数也不占对象空间
//	static void sfunc() {
//	}
//
//	static int d ;
//};
//
//
//int student::d = 10;
//void test() {
//	student a;
//	//若student类是空类的话，则空类的大小1字节，相当于占位。
//	cout << sizeof(a);
//
//}
//
//int main() {
//	test();
//	return 0;
//}


//this 指针
//class person {
//public:
//	int age;
//	person(int age) {
//		//当形参与成员变量重名是可以用this指针来区分
//		this->age = age;
//	}
//
//	person& jia( person a ) {
//		this->age += a.age;
//		return *this;
//	}
//};
////解决名称冲突
//void test(int x) {
//	person a(x);
//	cout << a.age << endl;
//
//
//}
//
//
////返回对象本身用*this
//
//void test1() {
//	person a(10);
//	person b(10);
//	a.jia(b).jia(b);
//	cout << a .age<< endl;
//}
//int main() {
//	test(100);
//	test1();
//	return 0;
//}


//空指针访问成员函数
//class person {
//public:
//	int a;
//	void a1() {
//		cout << "这是一个你知道的" << endl;
//	}
//	void a2(int a) {
//		if (this == NULL) {
//			return ;
//		}
//		this->a = a;
//		cout << a << endl;
//	}
//
//};
//void test() {
//	person* a = NULL;
//	a->a1();
//	a->a2(2);
//}
//
//int main() {
//	test();
//	return 0;
//}


//const修饰成员函数
//class person {
//public:
//	int age,haha;
//
//};
//
//void test() {
//
//}
//
//int main() {
//
//	return 0;
//}


//友元
//class student {
//	//友元函数的声明
//friend void nihao(student* a);
//public:
//
//	student() {
//		this->sit = "客厅";
//		this->woshi = "卧室";
//	}
//public:
//	string sit;
//private:
//	string woshi;
//};
//
//void nihao(student *a) {
//	cout << a->sit << endl;
//	cout << a->woshi << endl;
//}
//
//
//void test01() {
//	student a;
//	nihao(&a);
//}
//int main() {
//	test01();
//	return 0;
//}


//类做友元
//class teacher{};
//class student {
//public:
//	student();
//	void visit();
//private:
//	teacher* teacher;
//};

//深拷贝与浅拷贝
//class haha {
//public:
//	int m_age;
//	int* m_tall;
//	haha() {
//		cout << "这是构造函数" << endl;
//	}
//	haha(int a,int b) {
//		cout << "这是有参构造" << endl;
//		m_age = a;
//		m_tall = new int(b);
//	}
//	~haha() {
//		if (m_tall!=NULL) {
//			delete m_tall;
//			m_age = NULL;
//		}
//		cout << "这是析构函数" << endl;
//	}
//	haha(haha& a) {
//		cout << "这是拷贝函数" << endl;
//		m_age = a.m_age;
//		m_tall = new int(*a.m_tall);
//
//	}
//};
//
//int main() {
//	haha a(10,120);
//	haha b(a);
//	cout << a.m_age << endl;
//	cout << a.m_age << endl;
//	cout << b.m_tall << endl;
//	cout << a.m_tall << endl;
//	return 0;
//}



//函数调用函数在一个函数内创建函数的对象呀呀呀呀
//class student{
//public:
//	int age;
//	student(int a) {
//		age = a;
//	}
//
//};
//
//
//class teacher {
//public:
// 创建对象aa
//	student aa;
//	int age;
//	teacher(int tage, int sage) :age(tage), aa(sage) {
//		cout << "老师年龄为" << tage << "学生年龄为" << aa.age << endl;
//	}
//
//};
//
//int main() {
//	teacher a(99, 10);
//	return 0;
//}


//class student {
//	friend class teacher;
//public:
//	int age;
//	student(int age) {
//		this->age = age;
//	}
//};
//
//
//class teacher {
//public:
//	int age;
//	student * ca;
//	teacher(int a) :age(a){
//		ca = new student(20);
//		cout << "老师的年龄为" << age << "学生的年龄为" << ca->age << endl;
//	}
//
//};
//int main(){
//	teacher a(30);
//	
//	return 0;
//}


//重载运算符+和—
//class student {
//public:
//	int age;
//	int son;
//	student(int a, int b) {
//		age = a;
//		son = b;
//	}
//	student operator +(const student& a) {
//		student tea(0,0);
//		tea.age = a.age + this->age;
//		tea.son = a.son + this->son;
//		return tea;
//	}
//};
//
//student operator -(const student& a1, const student& a2) {
//	student temp(0,0);
//	temp.age = a1.age + a2.age;
//	temp.son = a1.son + a2.son;
//	return temp;
//}
//
//void test() {
//	student a1(10, 10);
//	student a2(100, 200);
//	student a3 = a1 - a2;
//	cout << a3.age << "   " << a3.son;
//
//}
//
//int main() {
//	test();
//	return 0;
//}



//重载运算符<<
//class teacher {
//	friend ostream& operator <<(ostream& cout, const teacher& a);
//public:
//	teacher(int a, int b) {
//		m_a = a;
//		m_b = b;
//	}
//private:
//	int m_a;
//	int m_b;
//};
//
//ostream& operator <<(ostream &cout, const teacher& a) {
//	cout << "m_a=" << a.m_a << "m_b=" << a.m_b;
//	return cout;
//}
//
//int main() {
//	teacher a(10, 20);
//	cout << a<<"hahahhaha"<<endl;
//	return 0;
//}


//重载递增运算符
//class jiajia {
//	friend ostream& operator <<(ostream& cout, jiajia& b);
//public:
//	jiajia() {
//		m_a = 0;
//	}
//	//++的前重置
//	int& operator++() {
//		m_a++;
//		return this->m_a;
//	}
//
//
//	//++的后重置
//	int operator++(int) {
//		int temp = this->m_a;
//		m_a++;
//		return temp;
//	}
//private:
//	int m_a;
//};
//
//
//
//
//ostream& operator <<(ostream& cout, jiajia& b) {
//	cout << b.m_a ;
//	return cout;
//}
//
//void test() {
//	jiajia a;
//	cout << a++<< endl;
//	cout << a << endl;
//}
//
//void test1() {
//	jiajia a;
//	cout << ++(++a )<< endl;
//	cout << a << endl;
//}
//
//int main() {
//	test();
//	test1();
//	return 0;
//}

//重载递减运算符
//class jianjian {
//	friend ostream& operator<<(ostream& cout, jianjian& a);
//public:
//	jianjian(int a) {
//		m_a = a;
//	}
//
//	//前置--
//	int& operator --() {
//		--m_a;
//		return this->m_a;
//	}
//
//
//	//后置--
//	int operator--(int) {
//		int ret = this->m_a;
//		m_a--;
//		return ret;
//	}
//private:
//	int m_a;
//};
//
//ostream& operator<<(ostream &cout,jianjian &a) {
//	cout << a.m_a << endl;
//	return cout;
//}
//
//
//void test() {
//	jianjian a(20);
//	cout << --a << endl;
//	cout << a << endl;
//	cout << a-- << endl;
//	cout << a << endl;
//
//}
//int main() {
//	test();
//	return 0;
//}


//赋值运算符的重载

//class hao {
//public:
//	int *a;
//	hao(int b) {
//		a = new int (b);
//	}
//
//	hao& operator=(hao &c) {
//		if (a != NULL) {
//			delete a;
//			a = NULL;
//		}
//		a = new int(*c.a);
//		return *this;
//	}
//
//	~hao() {
//		if (a != NULL) {
//			delete a;
//			a = NULL;	
//		}
//	}
//	
//};

//void test() {
//	hao a(20);
//	hao b(30);
//	b = a;
//	cout << a.a << endl<< b.a;
//}
//
//int main() {
//	test();
//	return 0;
//}


//比较运算符重载
//class bijiao {
//public:
//	int age;
//	bijiao(int a) {
//		age = a;
//	}
//	
//};
//
//void operator==(bijiao& a,bijiao &b) {
//	if (b.age == a.age) {
//		cout<<"相等";
//		return;
//	}
//	cout << "不相等";
//}
//
//void operator<(bijiao& a, bijiao& b) {
//	if (a.age < b.age) {
//		cout << "b大";
//		return;
//	}
//	cout << "a大";
//}
//
//void test() {
//	bijiao a(100);
//	bijiao b(200);
//	a == b;
//	a < b;
//}
//
//int main() {
//	test();
//	return 0;
//}
// 
// 
// 
//继承
//class base {
//public:
//	int a;
//	void haha() {
//		cout << "baseya" << endl;
//	}
//protected:
//	int b;
//private:
//	int c;
//};
//
//class xiao :public base {
//public:
//	xiao() {
//		b = 20;
//	}
//	void haha() {
//		cout << "xiaoya" << endl;
//	}
//};
//
//void test() {
//	xiao ca;
//	ca.a = 10;
//	
//}
//
//void test1() {
//	xiao a;
//	a.haha();
//
//}



//多态
//class animo {
//public:
//	 virtual void speak() {
//		cout << "动物在说话"<<endl;
//	}
//};
//
//
//class cat :public animo {
//public:
//	void speak() {
//		cout << "小猫在说话"<<endl;
//	}
//};
//
//class dog:public animo {
//public:
//	void speak() {
//		cout << "小狗在说话"<<endl;
//	}
//};
//
//void nihao(animo &a) {
//	a.speak();
//}
//
//void test() {
//	cat a;
//	dog b;
//	nihao(a);
//	nihao(b);
//}
//
//int main() {
//	test();
//	return 0;
//}


//计算器
//class jisuanji {
//public:
//	int num1, num2;
//	virtual int jisuan() {
//		return 0;
//	}
//};
//
////加法计算
//class jiafa :public jisuanji {
//public:
//	int jisuan() {
//		return num1 + num2;
//	}
//};
//
//
////减法计算
//class jianfa :public jisuanji {
//public:
//	int jisuan() {
//		return num1 - num2;
//	}
//};
//
//
////乘法计算
//class chengfa :public jisuanji {
//public:
//	int jisuan() {
//		return num1 * num2;
//	}
//};
//
//void test() {
//	jisuanji* b = new jiafa;
//	b->num1 = 10;
//	b->num2 = 20;
//	cout << b->jisuan();
//}
//
////void test1(jisuanji& a) {
////	a.num1 = 10;
////	a.num2 = 20;
////	cout << a.jisuan();
////}
////
////void test2() {
////	jiafa a;
////	test1(a);
////
////}
//
//
//int main() {
//	test();
//	test2();
//	return 0;
//}



//纯虚函数和抽象类
//class base {
//public:
//	virtual void dongwu() = 0;
//};
//
//class gou :public base {
//public:
//	void dongwu() {
//		cout << "这是一条狗" << endl;
//	}
//};
//
//class cat :public base {
//public:
//	void dongwu() {
//		cout << "这是一只猫" << endl;
//	}
//};
//
//void test() {
//	base* a = new gou;
//	a->dongwu();
//	delete a;
//	base* b = new cat;
//	b->dongwu();
//	delete b;
//}
//
//int main() {
//	test();
//	return 0;
//}


class cpu {
public:
	virtual void calculate() = 0;
};

class xianka {
public:
	virtual void display();
};

class memory {
public:
	virtual void cunchu() = 0;
};


class computer {
public:
	cpu* c;
	xianka* x;
	memory* m;

};
