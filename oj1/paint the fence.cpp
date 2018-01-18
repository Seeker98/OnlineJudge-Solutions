#include "stdafx.h"
#include<iostream>
#include<vector>
using namespace std;
typedef pair<int, int> pii;
/**
  *CS Academy #61 paint the fence : last test TLE
  */
class solution
{
public:
	int paintignore(vector<pii> &p, vector<int> &v, int i)
	{
		int cnt = v.size();
		for (int j = 0; j<p.size(); ++j)
		{
			if (j != i)
			{
				for (int k = p[j].first - 1; k <= p[j].second - 1; ++k)
				{
					if (v[k] == 0)
					{
						v[k] = 1;
						--cnt;
					}
				}
			}
		}
		return cnt;
	}
	int main()
	{
		cin.tie(0);
		cout.tie(0);
		ios::sync_with_stdio(false);
		int length, pnum;
		cin >> length >> pnum;
		vector<pii> painters;
		while (pnum--)
		{
			int a, b;
			cin >> a >> b;
			painters.emplace_back(pii(a, b));
		}
		for (int i = 0; i<painters.size(); ++i)
		{
			vector<int> b(length, 0);
			cout << paintignore(painters, b, i) << endl;
		}
		return 0;
	}
};
