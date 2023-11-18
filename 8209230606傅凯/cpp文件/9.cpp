#include<iostream>
using namespace std;
int main() {
	cout << "请选择你要实现的运算功能" << endl << "加法：1" << endl << "减法：2" << endl << "乘法运算：3" << endl << "除法运算：4" << endl << "取余运算:5" << endl;
	int a;
	cin >> a;
	cout << "请分别输入两个数" << endl;
	double b, c;
	cin >> b >> c;
		switch (a) {
		case 1:cout << "两数相加的结果为" << b + c << endl;break;
		case 2:cout << "两数相减的结果为" << b - c << endl;break;
		case 3:cout << "两数相乘的结果为" << b * c << endl;break;
		case 4:if (c == 0) { cout << "除数不能为0" << endl;break; }
			  else { cout << "两数相除的结果为" << a / b << endl;break; }
		case 5:if ((int)b == b && (int)c == c) { cout << "两数进行取余运算的结果为" << (int)b % (int)c << endl; break; }
			  else { cout << "您输入的数字有小数，无法进行取余运算" << endl;break; }
		}

}