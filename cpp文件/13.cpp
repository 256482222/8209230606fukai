#include<iostream>
#include<cmath>

using namespace std;
int main() {
	double a, c;

	cout << "请输入a的值" << endl;
	cin >> a;
	c = a;
	if (a > 0) {
		for (double b;1;) {
			b = a;
			a = 1 / 2.0 * (b + c/ b);
			if (fabs(a - b) < 1e-5) {
				cout << "a的平方根为" << a << endl;
				break;
			}
		}
	}
	else if (a == 0)cout << "a的平方根为0" << endl;
	else cout << "a为负数，不存在平方根" << endl;
}