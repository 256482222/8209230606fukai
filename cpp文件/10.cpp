#include<iostream>
using namespace std;
int main() {
	int a =0, b = 0, c = 0, d = 0;
	for (char i;1;)
	{
		cin.get(i);
		if (isalpha(i))a++;
		else if ((int)i == 32)b++;

		else if (isdigit(i))c++;
		else d++;
		if ((int)i == 10)break;
		

	}
	cout << "Ӣ����ĸ�ĸ���" << a << endl;
	cout << "�ո�ĸ���" << b << endl;
	cout << "�����ַ��ĸ���" << c << endl;
	cout << "�����ַ��ĸ���" << d << endl;

}