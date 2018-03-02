#include <iostream>
#include <string>
#include "SJstack.h"

using namespace std;

int main()
{
	SJstack<int> mystack;
	string tmp = "";
	while (true)
	{
		cin >> tmp;
		if (tmp == "add")
		{
			int n;
			cin >> n;
			mystack.sPush(n);
		}
		if (tmp == "pop")
		{
			cout << mystack.sPop() << '\n';
		}
	}
	system("pause");
	return 0;
}