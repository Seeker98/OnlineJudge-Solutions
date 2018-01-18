#include "stdafx.h"
#include<iostream>
#include<deque>
using namespace std;
/**
  *Atcoder 2648
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
		int *a = new int[n];
		int tmp = 0;
		deque<int> dq;
		while (n--)
			cin >> a[tmp++];
		for (int i = 0; i < tmp; i++)
		{
			if ((i + 1) % 2 == 1)
				dq.push_front(a[i]);
			if ((i + 1) % 2 == 0)
				dq.push_back(a[i]);
		}
		if (tmp % 2 != 0)
		{
			for (int i = 0; i < dq.size(); i++)
			{
				cout << dq[i] << " ";
			}
		}
		else
		{
			for (int i = dq.size() - 1; i >= 0; i--)
			{
				cout << dq[i] << " ";
			}
		}
		return 0;
	}
};
