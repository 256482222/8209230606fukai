#include<iostream>
using namespace std;
int main() {
	double a, b, c;
	cout << "请分别输入三角形的三条边" << endl;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b) {

		cout << "三角形的周长为" << a + b + c << endl;
		if (a == b || b == c || a == c)cout << "该三角形是等腰三角形"; else cout << "该三角形不是等腰三角形" << endl;
	}
	else cout << "这三边无法组成三角形" << endl;

}