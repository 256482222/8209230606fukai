#include<iostream>
#include<cmath>

using namespace std;
int main() {
	double a, c;

	cout << "������a��ֵ" << endl;
	cin >> a;
	c = a;
	if (a > 0) {
		for (double b;1;) {
			b = a;
			a = 1 / 2.0 * (b + c/ b);
			if (fabs(a - b) < 1e-5) {
				cout << "a��ƽ����Ϊ" << a << endl;
				break;
			}
		}
	}
	else if (a == 0)cout << "a��ƽ����Ϊ0" << endl;
	else cout << "aΪ������������ƽ����" << endl;
}