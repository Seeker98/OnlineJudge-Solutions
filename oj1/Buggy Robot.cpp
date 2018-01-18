#include "stdafx.h"
#include<iostream>
using namespace std;
/**
  *CF 888B
  */
class solution 
{
public:
	int main()
	{
		int n;
		cin >> n;
		int tmp = n;
		char t;
		int dim1 = 0;
		int dim2 = 0;
		while (n--)
		{
			cin >> t;
			switch (t)
			{
			case 'U':
				dim2++;
				break;
			case 'D':
				dim2--;
				break;
			case 'L':
				dim1++;
				break;
			case 'R':
				dim1--;
				break;
			}
		}
		cout << tmp - abs(dim1) - abs(dim2) << endl;
	}
};