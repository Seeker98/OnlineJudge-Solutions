#include "stdafx.h"
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef pair<int, int> pii;
/**
  *Codeforces Round #453 (Div. 2) : AC
  */
bool c(const pii& p1, const pii& p2)
{
	if (p1.first != p2.first)
		return p1.first < p2.first;
	else
		return p1.second < p2.second;
}
class solution
{
public:

	int main()
	{
		int n, loc;
		cin >> n >> loc;
		vector<pii> vp;
		while (n--)
		{
			int m, n;
			cin >> m >> n;
			vp.emplace_back(pii(m, 0));
			vp.emplace_back(pii(n, 1));
		}
		sort(vp.begin(), vp.end(), c);
		int count = 0;
		int presentloc = 0;
		bool flag = false;
		if (vp[0].first != 0)
			goto label;
		for (int i = 0; i<vp.size(); ++i)
		{
			presentloc = vp[i].first;
			if (vp[i].second == 0)
				count++;
			else
				count--;
			if (count == 0)
			{
				if (presentloc >= loc)
				{
					flag = true;
					break;
				}
				else
				{
					flag = false;
					break;
				}
			}
		}
	label: cout << (flag ? "YES" : "NO") << endl;
		return 0;
	}
};
