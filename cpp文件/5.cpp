
#include<iostream>
#include<iomanip> 
using namespace std; 
int main() {
	cout << "�����뻪���¶�" << endl;
	double a, b; cin >> a;
	b = (a - 32) / 1.8;
	cout << "�����¶�Ϊ" << fixed << setprecision(2) << b << endl;
	return 0;
}
