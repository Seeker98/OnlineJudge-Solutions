#include "stdafx.h"
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef pair<int, int> pii;
/**
  *Atcoder 2691
  */
bool comp(const pii& p1, const pii& p2)
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
		int a[4];
		cin >> a[0] >> a[1] >> a[2] >> a[3];
		vector<pii> vp;
		vp.emplace_back(pii(a[0], a[1]));
		vp.emplace_back(pii(a[2], a[3]));
		sort(vp.begin(), vp.end(), comp);
		int start = 0;
		int end = 0;
		if (vp[1].first < vp[0].second)
		{
			start = max(vp[0].first, vp[1].first);
			end = min(vp[0].second, vp[1].second);
		}
		cout << end - start << endl;
		return 0;
	}
};
