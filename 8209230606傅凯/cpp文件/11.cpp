#include<iostream>
using namespace std;
int max(int a, int b) {
	return (a > b) ? a : b;
}
int min(int a, int b) {
	return (a > b) ? b : a;
}
int main() {
	cout << "����������������" << endl;
	int a, b;

	cin >> a >> b;
	int c = a, d = b;
	for (int i;1;) {
		i = b;
		b = a % b;
		a = i;
		if (b == 0) {
			cout << "�������Ϊ" << i << endl;
			cout << "��С������Ϊ" << c * d / i << endl;
			break;
		}

	}
	




}