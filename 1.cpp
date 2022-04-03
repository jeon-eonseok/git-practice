#include <iostream>
using namespace std;

int main()
{
	string a;
	cin >> a;
	if (a == "exit")
		EXIT(100);
	else
		cout << a;

	return 0;
}