#include<iostream>
using namespace std;
#include<string>
#include<cmath>
#include <ctime>
//��ӡhello word
//int main() {
//	int a = 1200;
//	cout << "hello word" << endl;
//	cout << "a=" << a << endl;
//	system("pause");
//	return 0;
//}


//�곣��  const���εı���Ϊ�����൱�ڳ�����
//#define day 7
//int main() {
//	const int mou = 10;
//	cout << "һ�����ڶ�����" << day << endl;
//	cout << mou << endl;
//	system("pause");
//	return 0;
//}


////fload :������  double��˫����  ��Ч���ֶ���6λ
//int main() {
//	float f1 = 100.5446546;
//	double d1 = 5646.5656565;
//	//e2�൱��10�Ķ��η� ��Ϊe-2��Ϊ0.1�Ķ��η�
//	float f2 = 2e2;
//	cout << f2 << endl;
//	cout << f1 << endl;
//	cout << d1 << endl;
//	system("pause");
//	return 0;
//}


//�鿴ascll��ֵ
//int main() {
//	char x = 'a';
//	cout << (int)x << endl;
//	system("pause");
//	return 0;
//}

//�����ַ���
//int main() {
//	string qwer = "hahahha";
//	cout << "qwer=" << qwer <<endl;
//	system("pause");
//	return 0;
//}

//�곣��define��const���εĳ�����
//#define money 100
//int main() {
//	const int haha = 100;
//	cout << "money=" << money<< endl;
//	haha = 200;
//	cout << "money=" << haha << endl;
//	system("pause");
//	return 0;
//}


//������short��2�ֽ� int��4 long��windowsΪ4 linux x64 Ϊ8 longlong��8
//float��4�ֽ� 7λ��Ч����  double��8�ֽ� 15-16��Ч����

//cpp������bool c����û  bool����ֻռһ�ֽڴ�С
//int main() {
//	bool haha = true;
//	bool ha = false;
//	cout << haha << sizeof(haha) << endl;
//	cout << ha << sizeof(ha) << endl;
//	system("pause");
//	return 0;
//}


//���ݵ�����
//�ȳ�ʼ������
//int main() {
//	int a ;
//	cin >> a;
//	cout << "a=" << a << endl;
//	system("pause");
//	return 0;
//}


//������е� == �ͣ�=  ����ֵΪbool����
//int main() {
//	int a = 100;
//	int b = 200;
//	cout << (a == b) << endl;
//	cout << (a != b) << endl;
//	system("pause");
//	return 0;
//}


//��Ŀ�����  
//int main() {
//	int a, b;
//	cin >> a;
//	cin >> b;
//	int c = (a > b ? a : b);
//	cout << c << endl;
//	system("pause");
//	return 0;
//}


//ˮ�ɻ���
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
//			cout << "������" << endl;
//		}
//		else {
//			cout << x << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}


//�žų˷���
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


//goto��� �൱�����������ǻػ�
//int main() {
//	cout << "1" << endl;
//
//	goto FLAG;
//
//	cout << "1" << endl;
//	cout << "1" << endl;
//	cout << "1" << endl;
////ע��˴��ǣ�
//FLAG:
//
//	system("pause");
//	return 0;
//}


//�Ƚ�С����������
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


//Ԫ�ص�����-
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


//ð������
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


//��������
//int main() {
//	int arr[3][3] = {
//		{1,2,3},
//		{4,5,6},
//		{7,8,9}
//	};
//	//��������������
//	int hang = sizeof(arr) / sizeof(arr[0]);
//	cout << hang << endl;
//	//����
//	int lie = sizeof(arr[0]) / sizeof(arr[0][0]);
//	cout << lie << endl;
//	system("pause");
//	return 0;
//}


//��ɼ���
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


//�������������Ǵ���һ���������ǲ�д������
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


//���ļ���д����
//#include "host.h"
//int main() {
//	cout<<max(19, 5674)<<endl;
//	system("pause");
//	return 0;
//}


//ָ��
//ָ�벻һ����int Ҳ������float char double������
//int * a=&b  a=b�ĵ�ַ  *a=b:�н��ַ
//��ָ��  int * a=NULL;
//Ұָ�룺int *p=(int *)0x1100;   �൱��ֱ�ӽ��ڴ��ַ�ռ�����p


//const����ָ��������
//int main() {
////һ��const����ָ��
//	int a = 45;
//	int b = 20;
//	const int* y = &a;
//	//*y = 100; //����const���ε���ָ�벻���޸�*y
//	cout << &a << endl;
//	cout << &b << endl;
//	cout << *y << endl;
//	y = &b;
//	cout << *y << endl;
////����const���ε���ָָ�����	
//	int* const x = &a;
//	//x=&b  �������޸�
//	*x = 100;
//	cout << *x << endl;
//
////����const������ָ��Ҳ����ָ��ָ�����
//	const int* const z = &a;
//	*z = 100;  //���ᱨ��
//	z = &b;
//}


//����ָ���������
//int main() {
//	int arr[10] = { 1,2,3,45,5,6,8,9,5,100 };
//	//ע��arr������ǵ�ַ����&arr
//	int* x = arr;
//	cout << *x << endl;
//	for (int y=0; y < 10; y++) {
//		cout << *x << endl;
//		x++;
//	}
//	system("pause");
//	return 0;
//}


//ָ��ͺ���
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


//ð��
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


//�ṹ�� �൱����
//struct student {
//	string name;
//	int age;
//	int score;
//};
//int main() {
//	student s1 = { "����",20,100 };
//	student s2 = { "����",21,122 };
//	cout << s1.name << s1.age << s1.score<<endl;
//
//	//�ṹ������
//	student arr[2] = {
//		{ "����",20,100 },
//		{ "����",21,122 },
//	};
//
//	cout << arr[1].name << endl;
//
//	//�ṹ��ָ��
//	student* p = arr;
//	//����ָ�����������ʵ�ַ��ʳ�Ա
//	p->name = "baga";
//	cout << p->name << endl;
//	system("pause");
//	return 0;
//}


//�ṹ����Ƕ�ṹ��
//struct student {
//	string name;
//	int age;
//	int score;
//};
//
//struct teacher {
//	string name;
//	int age;
//	student s1; //�����ӽṹ��s1ѧ��
//};
//
//int main() {
//	teacher t1 = { "wnagba",45 };
//	t1.s1 = { "����",20,100 };
//	cout << t1.s1.name << t1.s1.age << t1.s1.score << endl;
//	system("pause");
//	return 0;
//}


//�ṹ������������
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

//const ͬ���������ڽṹ���еĵ�ַ����������ֹ�����

//����
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
//	string tname = "��ʦ";
//	string sname = "ѧ��";
//	string nameseed = "ABCDE";
//	for (int i = 0; i < len; i++) {
//		tarr[i].name = tname + nameseed[i];
//		cout << tarr[i].name << endl;
//		for (int j = 0; j < 5; j++) {
//			tarr[i].sarr[j].name= sname + nameseed[j];
//			tarr[i].sarr[j].score = rand() % 61 + 40;
//			cout << "\tѧ��:" << tarr[i].sarr[j].name << "����Ϊ" << tarr[i].sarr[j].score << endl;
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


//���һ��Ӣ�۵Ľṹ�壬������Ա���������䣬�Ա�; �����ṹ�����飬�����д��5��Ӣ�ۡ�ͨ��ð��������㷨���������е�Ӣ�۰���������������������մ�ӡ�����Ľ����
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
//		cout << "����:" << arr[i].name << "���䣺" << arr[i].age << "�Ա�" << arr[i].sex << endl;
//	}
//}
//
//int main() {
//	hero arr[5] = {
//		{"����",23,"��"},
//		{"����",22,"��"},
//		{"�ŷ�",20,"��"},
//		{"����",21,"��"},
//		{"����",19,"Ů"},
//	};
//	int len = sizeof(arr) / sizeof(arr[0]);
//	change(arr, len);
//	print(arr, len);
//	system("pause");
//	return 0;
//}


//ͨѶ¼����ϵͳ
//void menu() {
//	cout << "***************************"<< endl;
//	cout << "*******1:�����ϵ��********"<< endl;
//	cout << "*******2:��ʾ��ϵ��********" << endl;
//	cout << "*****  3:ɾ����ϵ��  *****" << endl;
//	cout << "*****  4:������ϵ��  *****" << endl;
//	cout << "*****  5:�޸���ϵ��  *****" << endl;
//	cout << "*****  6:�����ϵ��  *****" << endl;
//	cout << "*****  0:�˳�ͨѶ¼  *****" << endl;
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
//	//����
//	if (abs->p_size == MAX) {
//		cout << "�����޷����" << endl;
//	}
//	else {
//		string name;
//		cout << "��������" << endl;
//		cin >> name;
//		abs->padd[abs->p_size].pname = name;
//	}
//
//
//	//�Ա�
//	int sex;
//	cout << "�����Ա�" << endl;
//	cout << "1���� �� 2��Ů" << endl;
//	while (1) {
//		cin >> sex;
//		if (sex == 1 || sex == 2) {
//			abs->padd[abs->p_size].psex = sex;
//			break;
//		}
//		cout << "�����������������" << endl;
//	}
//
//
//	//����
//	int age = 0;
//	cout << "���������䣺" << endl;
//	cin >> age;
//	abs->padd[abs->p_size].page = age;
//
//	//�绰
//	string phone="";
//	cout << "������绰" << endl;
//	cin >> phone;
//	abs->padd[abs->p_size].pphone = phone;
//
//
//	//��ͥסַ
//	string add = "";
//	cout << "�����ͥסַ" << endl;
//	cin >> add;
//	abs->padd[abs->p_size].paddr =add;
//
//	//����ͨѶ¼������
//	abs->p_size++;
//	cout << "��ӳɹ�" << endl;
//	system("pause");
//	system("cls");
//}
//
//void showperson(addrbook * abs) {
//	if (abs->p_size == 0) {
//		cout << "δ����κεļ�¼" << endl;
//	}
//	else {
//		for (int i = 0; i < abs->p_size; i++) {
//			cout << "������" << abs->padd[i].pname << "\t";
//			cout << "�Ա�" << abs->padd[i].psex << "\t";
//			cout << "���䣺" << abs->padd[i].page  << "\t";
//			cout << "�绰��" << abs->padd[i].pphone << "\t";
//			cout << "סַ��" << abs->padd[i].paddr << endl;
//		}
//	}
//	system("pause");
//	system("cls");
//}
//
////ɾ��
////��װ�ж��Ƿ������ϵ��
//int exitperson(addrbook * abs,string name) {
//	for (int x = 0; x < abs->p_size; x++) {
//		if (abs->padd[x].pname == name) {
//			return x;
//		}
//	}
//	return -1;
//}
//
////��װɾ��ָ������ϵ��
//void delperson(addrbook* abs) {
//	cout << "��������Ҫɾ���˵�����" << endl;
//	string name;
//	cin >> name;
//	int x = exitperson(abs, name);
//	if (x != -1) {
//		for (int i = x; i < abs->p_size; i++) {
//			abs->padd[i] = abs->padd[i + 1];
//		}
//		abs->p_size--;
//		cout << "ɾ���ɹ�����Ϊ" << name << endl;
//	}
//	else {
//		cout << "δ�ҵ������" << endl;
//	}
//	system("pause");
//	system("cls");
//}
//
//
////������ϵ��
//void showsperson(addrbook *abs){
//	string name;
//	cout << "������Ҫ�����˵�����" << endl;
//	cin >> name;
//	int x =exitperson(abs, name);
//	if (x != -1) {
//		cout << "������" << abs->padd[x].pname << "\t";
//		cout << "�Ա�" << abs->padd[x].psex << "\t";
//		cout << "���䣺" << abs->padd[x].page << "\t";
//		cout << "�绰��" << abs->padd[x].pphone << "\t";
//		cout << "סַ��" << abs->padd[x].paddr << endl;
//	}
//	else {
//		cout << "���޴���" << endl;
//	}
//	system("pause");
//	system("cls");
//}
//
////�޸���ϵ��
//void xiuperson(addrbook* abs) {
//	cout << "������Ҫ�޸ĵ���ϵ�˵�����" << endl;
//	string name;
//	cin >> name;
//	int x = exitperson(abs, name);
//	if (x != -1) {
//		int input;
//		while (1) {
//			cout << "������Ҫ�޸ĵ����ԣ�1-5��\n";
//			cout << "1:����\n" << "2:�Ա�\n" << "3:����\n" << "4:�绰\n" << "5:סַ\n" << "6:�޸����" << endl;
//			cin >> input;
//			if (input == 1) {
//				string name;
//				cout << "��������"<<endl;
//				cin >> name;
//				abs->padd[x].pname = name;
//			}
//			else if (input == 2) {
//				int sex;
//				cout << "�������Ա�" << endl;
//				cout << "1 -- ��" << endl;
//				cout << "2 -- Ů" << endl;
//				while (1)
//				{
//					cin >> sex;
//					if (sex == 1 || sex == 2)
//					{
//						abs->padd[x].psex = sex;
//						break;
//					}
//					cout << "������������������";
//				}
//			}
//			else if (input == 3) {
//				cout << "�����޸ĵ�����" << endl;
//				int age = 0;
//				cin >> age;
//				abs->padd[x].page = age;
//			}
//			else if (input == 4) {
//				cout << "�����޸ĵĵ绰" << endl;
//				string phone;
//				cin >> phone;
//				abs->padd[x].pphone = phone;
//			}
//			else if (input == 5) {
//				cout << "�����޸ĵļ�ͥסַ" << endl;
//				string addr;
//				cin >> addr;
//				abs->padd[x].paddr = addr;
//			}
//			else if (input == 6) {
//				cout << "�޸����" << endl;
//				break;
//			}
//			else {
//				cout << "�����������������" << endl;
//			}
//		}
//
//	}
//	else {
//		cout << "δ�ҵ�����Ϊ" << name << "����" << endl;
//	}
//	system("pause");
//	system("cls");
//}
//
////���������ϵ��
//void qinperson(addrbook* abs) {
//	abs->p_size = 0;
//	cout << "ͨѶ¼�Ѿ����" << endl;
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
//		cout << "������Ҫ���еĲ���" << endl;
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
//			cout << "��ӭ�´�ʹ��" << endl;
//			system("pause");
//			return 0;
//		default:
//			cout << "����������������룺" << endl;
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}


//��������ǰΪ����������ȫ����   �������к�Ϊջ���Ͷ���
// ջ��
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


//����
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


//������������
//int main() {
//	int* arr = new int[10];
//	for (int i = 0; i < 10; i++) {
//		arr[i] = 100 + i;
//	}
//	for (int j = 0; j < 10; j++) {
//		cout << arr[j]<< endl;
//	}
//	//�ͷŶ���
//	delete[] arr;
//	system("pause");
//	return 0;
//}


//����
//int main() {
//	int a = 100;
//	//�൱�ڸ�a��һ������b b��a�Ĵ����ַ����ͬ�����Ըı�b��ֵ��ʱ��Ҳ��ı�a��ֵ
//	int& b = a;
//	cout << a << b << endl;
//	b = 200;
//	cout << a << b << endl;
//	system("pause");
//	return 0;
//}


//������Ĭ�ϲ���
//�����������ó�ʼ����
//int func(int a, int b = 10, int c = 20) {
//	return a + b * c;
//}
//int main() {
//	cout << func(10, 20);
//	return 0;
//}


//���� ������
//������1����һ����������
//		2����������ͬ
//		3�������Ĳ������Ͳ�ͬ���߸�����ͬ����˳��ͬ
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


//��װ
//���һ����������Բ���ܳ�
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


//���һ��ѧ���࣬������������ѧ�ţ����Ը�ֵ��������ѧ�ţ����ҿ�����ʾ����
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

//class��public������Ȩ�� �������Է��� protected������Ȩ�ޣ�����Է��ʣ����ⲻ���Է���  private��˽��Ȩ�ޣ��������Է���
//struct��Ĭ�Ϸ���Ȩ���ǹ�����class��Ĭ�Ϸ���Ȩ����˽���ǵ�Ψһ����


//�����жϳ�����
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
////ȫ�ֺ����ж�
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
////��Ա�����жϣ�
//	if (c2.panduan(c1) == true) {
//		cout << "xiangtong" << endl;
//	}
//	else {
//		cout << "buxiangtong" << endl;
//	}
//	return 0;
//}



//�������������ʹ��
////��Ƶ�
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
////���Բ
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
//			cout << "��Բ��" << endl;
//		}
//		else if((x - c.showx()) * (x - c.showx()) + (y - c.showy()) * (y - c.showy()) > r * r) {
//			cout << "��Բ��" << endl;
//		}
//		else {
//			cout << "��Բ��" << endl;
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
//	cout << "�뾶Ϊ" << y1.showr() << endl;
//	cout << "x����Ϊ" << y1.showx() << endl;
//	cout << "y����Ϊ" << y1.showy() << endl;
//	dian d;
//	d.setxy(10, 10);
//	y1.panduan(d);
//	return 0;
//}


//�����ĳ�ʼ������
//class student {
//public:
//	student(int x) {
//		cout << "���" << x<<endl;
//	}
//	~student() {
//		cout << "�㲻��" << endl;
//	}
//};
//
//int main() {
//	student a(2);
//	return 0;
//}


//���캯��
//class person {
//public:
//	person() {
//		cout << "�޲ι��캯��" << endl;
//	}
//
//	person(const person& p) {
//		cout << "���ǿ�������" << endl;
//	}
//
//	~person() {
//		cout << "�������ۺ���" << endl;
//	}
//};
//
//int main() {
//	person p;
//	person p1=person(p);
//	return 0;
//}


//�����ǳ����
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
//		cout << "���" << endl;
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


//��ʼ���б�
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


//���е���
//class student {
//public:
//	string name;
//	student(string a) {
//		name = a;
//		cout << "student���캯��" << endl;
//	}
//
//	~student(){
//		cout << "studnetϴ������" << endl;
//	}
//};
//
//class teacher {
//public:
//	int age;
//	student sname;
//	teacher(int a, string b) :age(a),sname(b) {
//		cout << "techer�Ĺ��캯��"<<endl;
//	}
//	~teacher() {
//		cout << "teacher����������" << endl;
//	}
//	void print() {
//
//		cout << age << "����ʦ����ѧ����������" << sname.name << endl;;
//	}
//};
//void test() {
////�����г�Ա�����������ʱ�����ǳƸó�ԱΪ �����Ա
////�����˳���� ���ȵ��ö����Ա�Ĺ��죬�ٵ��ñ��๹��
////����˳���빹���෴
//	teacher a(20, "nima");
//	a.print();
//}
//
//int main() {
//	
//	test();
//	return 0;
//}

//��̬��Ա
//class student {
//public:
//	//��̬��Ա���ڶ��壬�����ʼ��
//	static int age;
//	int ha = 1;
//	//��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
//	static void haha() {
//		cout << age << endl;
//		//�޷��ɹ���ֵ����Ϊ�ú����޷�ȷ���ñ���ha���Ǹ������
//		ha = 10;
//	}
//
//};
//
////�����ʼ��    ����Ҫ�в�Ȼ����
//int student::age = 1;
////static����һ������  ֻ��һ��ֵ ���ж�����
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



//��Ա�����ͳ�Ա�����ֿ�����
//class student {
//public:
//	int a;
//	char b;
//	//�Ǿ�̬��Ա����ռ����ռ�
//	int mA;
//	//��̬��Ա������ռ����ռ�
//	static int mB;
//	//����Ҳ��ռ����ռ䣬���к�������һ������ʵ��
//	void func() {
//		cout << "mA:" << this->mA << endl;
//	}
//	//��̬��Ա����Ҳ��ռ����ռ�
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
//	//��student���ǿ���Ļ��������Ĵ�С1�ֽڣ��൱��ռλ��
//	cout << sizeof(a);
//
//}
//
//int main() {
//	test();
//	return 0;
//}


//this ָ��
//class person {
//public:
//	int age;
//	person(int age) {
//		//���β����Ա���������ǿ�����thisָ��������
//		this->age = age;
//	}
//
//	person& jia( person a ) {
//		this->age += a.age;
//		return *this;
//	}
//};
////������Ƴ�ͻ
//void test(int x) {
//	person a(x);
//	cout << a.age << endl;
//
//
//}
//
//
////���ض�������*this
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


//��ָ����ʳ�Ա����
//class person {
//public:
//	int a;
//	void a1() {
//		cout << "����һ����֪����" << endl;
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


//const���γ�Ա����
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


//��Ԫ
//class student {
//	//��Ԫ����������
//friend void nihao(student* a);
//public:
//
//	student() {
//		this->sit = "����";
//		this->woshi = "����";
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


//������Ԫ
//class teacher{};
//class student {
//public:
//	student();
//	void visit();
//private:
//	teacher* teacher;
//};

//�����ǳ����
//class haha {
//public:
//	int m_age;
//	int* m_tall;
//	haha() {
//		cout << "���ǹ��캯��" << endl;
//	}
//	haha(int a,int b) {
//		cout << "�����вι���" << endl;
//		m_age = a;
//		m_tall = new int(b);
//	}
//	~haha() {
//		if (m_tall!=NULL) {
//			delete m_tall;
//			m_age = NULL;
//		}
//		cout << "������������" << endl;
//	}
//	haha(haha& a) {
//		cout << "���ǿ�������" << endl;
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



//�������ú�����һ�������ڴ��������Ķ���ѽѽѽѽ
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
// ��������aa
//	student aa;
//	int age;
//	teacher(int tage, int sage) :age(tage), aa(sage) {
//		cout << "��ʦ����Ϊ" << tage << "ѧ������Ϊ" << aa.age << endl;
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
//		cout << "��ʦ������Ϊ" << age << "ѧ��������Ϊ" << ca->age << endl;
//	}
//
//};
//int main(){
//	teacher a(30);
//	
//	return 0;
//}


//���������+�͡�
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



//���������<<
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


//���ص��������
//class jiajia {
//	friend ostream& operator <<(ostream& cout, jiajia& b);
//public:
//	jiajia() {
//		m_a = 0;
//	}
//	//++��ǰ����
//	int& operator++() {
//		m_a++;
//		return this->m_a;
//	}
//
//
//	//++�ĺ�����
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

//���صݼ������
//class jianjian {
//	friend ostream& operator<<(ostream& cout, jianjian& a);
//public:
//	jianjian(int a) {
//		m_a = a;
//	}
//
//	//ǰ��--
//	int& operator --() {
//		--m_a;
//		return this->m_a;
//	}
//
//
//	//����--
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


//��ֵ�����������

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


//�Ƚ����������
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
//		cout<<"���";
//		return;
//	}
//	cout << "�����";
//}
//
//void operator<(bijiao& a, bijiao& b) {
//	if (a.age < b.age) {
//		cout << "b��";
//		return;
//	}
//	cout << "a��";
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
//�̳�
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



//��̬
//class animo {
//public:
//	 virtual void speak() {
//		cout << "������˵��"<<endl;
//	}
//};
//
//
//class cat :public animo {
//public:
//	void speak() {
//		cout << "Сè��˵��"<<endl;
//	}
//};
//
//class dog:public animo {
//public:
//	void speak() {
//		cout << "С����˵��"<<endl;
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


//������
//class jisuanji {
//public:
//	int num1, num2;
//	virtual int jisuan() {
//		return 0;
//	}
//};
//
////�ӷ�����
//class jiafa :public jisuanji {
//public:
//	int jisuan() {
//		return num1 + num2;
//	}
//};
//
//
////��������
//class jianfa :public jisuanji {
//public:
//	int jisuan() {
//		return num1 - num2;
//	}
//};
//
//
////�˷�����
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



//���麯���ͳ�����
//class base {
//public:
//	virtual void dongwu() = 0;
//};
//
//class gou :public base {
//public:
//	void dongwu() {
//		cout << "����һ����" << endl;
//	}
//};
//
//class cat :public base {
//public:
//	void dongwu() {
//		cout << "����һֻè" << endl;
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
