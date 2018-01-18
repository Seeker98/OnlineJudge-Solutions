#include "stdafx.h"
#include<iostream>
#include<vector>
using namespace std;

/**
  *Atcoder 2687
  */
class solution
{
public:
	int main()
	{
		int h, w;
		cin >> h >> w;
		int** grid = new int*[h];
		for (int i = 0; i < h; i++)
			grid[i] = new int[w];
		int n;
		cin >> n;
		vector<int> colors;
		int num = 0;
		while (n--)
		{
			num++;
			int k;
			cin >> k;
			for (int i = 1; i <= k; i++)
				colors.emplace_back(num);
		}
		int x = 0, y = 0;
		for (int i = 0; i < colors.size(); i++)
		{
			grid[x][y] = colors[i];
			if (y % 2 == 0)
			{
				if (x < h - 1)
				{
					x++;
					continue;
				}
				if (x == h - 1)
				{
					y++;
					continue;
				}
			}
			if (y % 2 == 1)
			{
				if (x > 0)
				{
					x--;
					continue;
				}
				if (x == 0)
				{
					y++;
					continue;
				}
			}
		}
		for (int i = 0; i < h; i++)
		{
			for (int j = 0; j < w; j++)
				cout << grid[i][j] << " ";
			cout << endl;
		}
		return 0;
	}
};
