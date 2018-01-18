#include "stdafx.h"
#include<iostream>
#include<vector>
using namespace std;
/**
  *CF hello 2018
  */
class solution
{
public:
	int main()
	{
		cin.tie(NULL);
		ios::sync_with_stdio(false);
		int n;
		cin >> n;
		vector<pair<int, bool>> tree(n + 1);
		tree[1] = pair<int, bool>(0, false);
		for (int i = 2; i < tree.size(); i++)
		{
			int num;
			cin >> num;
			tree[i] = pair<int, bool>(num, true);
			tree[num].second = false;
		}
		bool flag = true;
		for (int i = 1; i < tree.size(); i++)
		{
			if (tree[i].second == false)
			{
				int count = 0;
				for (int j = i + 1; j < tree.size(); j++)
				{
					if ((tree[j].first == i) && (tree[j].second == true))
						count++;
				}
				if (count >= 3)
					flag = true;
				else
				{
					flag = false;
					goto label;
				}
			}
		}
	label: cout << (flag ? "Yes" : "No") << endl;
		return 0;
	}
};
