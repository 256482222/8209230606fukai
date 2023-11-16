#include<iostream>
using namespace std;
int main() {
	double x,y;
	cout << "请输入x值" << endl;
	cin >> x;
	if (0 < x && x < 1) {
		y = 3 - 2 * x;
		cout << "y的值为" << y << endl;
	}
	else if (1 <= x && x < 5) {
		y = 2 / 4.0 * x + 1;
		cout << "y的值为" << y << endl;

	}
	else if (5 <= x && x < 10) {
		y = x * x;
		cout << "y的值为" <<y<< endl;
	}
	return 0;
}
