#include<iostream>
using namespace std;
int main() {
	double a, b, c;
	cout << "��ֱ����������ε�������" << endl;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b) {

		cout << "�����ε��ܳ�Ϊ" << a + b + c << endl;
		if (a == b || b == c || a == c)cout << "���������ǵ���������"; else cout << "�������β��ǵ���������" << endl;
	}
	else cout << "�������޷����������" << endl;

}