#include<iostream>
using namespace std;
int main() {
	cout << "��ѡ����Ҫʵ�ֵ����㹦��" << endl << "�ӷ���1" << endl << "������2" << endl << "�˷����㣺3" << endl << "�������㣺4" << endl << "ȡ������:5" << endl;
	int a;
	cin >> a;
	cout << "��ֱ�����������" << endl;
	double b, c;
	cin >> b >> c;
		switch (a) {
		case 1:cout << "������ӵĽ��Ϊ" << b + c << endl;break;
		case 2:cout << "��������Ľ��Ϊ" << b - c << endl;break;
		case 3:cout << "������˵Ľ��Ϊ" << b * c << endl;break;
		case 4:if (c == 0) { cout << "��������Ϊ0" << endl;break; }
			  else { cout << "��������Ľ��Ϊ" << a / b << endl;break; }
		case 5:if ((int)b == b && (int)c == c) { cout << "��������ȡ������Ľ��Ϊ" << (int)b % (int)c << endl; break; }
			  else { cout << "�������������С�����޷�����ȡ������" << endl;break; }
		}

}