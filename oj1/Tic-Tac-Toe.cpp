#include "stdafx.h"
#include<iostream>
using namespace std;

/**
  *cf 454 div.2 B
  */
class solution
{
public:
	int main()
	{
		char a[9][9];
		int x, y;
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
				cin >> a[i][j];
		}
		cin >> x >> y;
		int m = x % 3;
		int n = y % 3;
		int p;
		int q;
		int x1, y1;
		switch (m)
		{
		case 0:
			p = 2;
			break;
		case 1:
			p = 0;
			break;
		case 2:
			p = 1;
			break;
		}
		switch (n)
		{
		case 0:
			q = 2;
			break;
		case 1:
			q = 0;
			break;
		case 2:
			q = 1;
			break;
		}
		x1 = 3 * p;
		y1 = 3 * q;
		int modified = 0;
		for (; x1 <= 3 * p + 2; x1++)
		{
			for (y1 = 3 * q; y1 <= 3 * q + 2; y1++)
			{
				if (a[x1][y1] == '.')
				{
					a[x1][y1] = '!';
					modified = 1;
				}
			}
		}
		if (!modified)
		{
			for (int i = 0; i < 9; i++)
			{
				for (int j = 0; j < 9; j++)
				{
					if (a[i][j] == '.')
						a[i][j] = '!';
				}
			}
		}
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
			{
				cout << a[i][j];
				if (j % 3 == 2)
					cout << " ";
			}
			cout << endl;
			if (i % 3 == 2)
				cout << endl;
		}
		return 0;
	}
};
