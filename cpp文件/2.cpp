#include<iostream>
using namespace std;
int main()
{
	const double PI = 3.14;
		double a, b;
		cout << "请分别输入半径和高" << endl;
	cin>> a >> b;
	cout << "圆锥的体积为" << 1.0 / 3 * PI * a * a * b << endl;
	return 0;

}