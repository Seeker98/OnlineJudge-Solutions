#include "stdafx.h"
#include<iostream>
using namespace std;
/**
  *CF 900A
  */
class solution
{
public:
	int main()
	{
		cin.tie(0);
		cout.tie(0);
		ios::sync_with_stdio(false);
		int n;
		cin >> n;
		int l = 0;
		int r = 0;
		while (n--)
		{
			int a, b;
			cin >> a >> b;
			if (a < 0)
				++l;
			else
				++r;
		}
		cout << ((r <= 1 || l <= 1) ? "Yes" : "No") << endl;
		return 0;
	}
};
