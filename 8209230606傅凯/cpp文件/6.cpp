#include<iostream>
using namespace std;
int main() {
	cout << "ÇëÊäÈë×Ö·û" << endl;
	char a;
	cin >> a;
	if(97<=((int)a)&& ((int)a) <=122)
		{
			cout << ((char)(a - 32)) << endl;
		}
	else
	{
		cout << ((int)(a + 1));
	}
}