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
	cout << "英文字母的个数" << a << endl;
	cout << "空格的格数" << b << endl;
	cout << "数字字符的个数" << c << endl;
	cout << "其他字符的个数" << d << endl;

}