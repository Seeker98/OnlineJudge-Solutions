#include "stdafx.h"
#include<iostream>
using namespace std;

/**
  *Atcoder 2686
  */
class solution 
{
public:
	int main()
	{
		int n;
		cin >> n;
		int *a = new int[n];
		int tmp = 0;
		int r2 = 0, r4 = 0;
		while (n--)
			cin >> a[tmp++];
		for (int i = 0; i < tmp; i++)
		{
			if (a[i] % 4 == 0)
				r4++;
			else
			{
				if (a[i] % 2 == 0)
					r2++;
			}
		}
		if (tmp % 2 == 1)
			cout << ((2 * r4 + r2 >= tmp - 1) ? "Yes" : "No") << endl;
		else
			cout << ((2 * r4 + r2 >= tmp) ? "Yes" : "No") << endl;
		return 0;
	}
};
