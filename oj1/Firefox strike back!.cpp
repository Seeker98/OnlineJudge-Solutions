#include "stdafx.h"
#include<iostream>
#include"UF.cpp"
using namespace std;
/**
  *HITwh OJ problem 9
  */
class solution
{
public:
	int n, m;
	UF u;
	void solve(istream&is, ostream&os)
	{
		is >> n >> m;
		u.init(n + 1);
		int a, b;
		while (m--)
		{
			is >> a >> b;
			if (!u.connected(a, b))
			{
				u.Union(a, b);
			}
		}
		os << u.getCount() - 1 << endl;
	}
};