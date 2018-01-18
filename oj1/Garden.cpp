#include "stdafx.h"
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/**
  *CF 915A
  */
class solution
{
public:

};
class TaskA
{
public:
	int n, k;
	vector<int>buckets;
	vector<int>factors;
	void solve(istream& is, ostream& os)
	{
		is >> n >> k;
		buckets.resize(n);
		for (auto &i : buckets)
			is >> i;
		for (auto i : buckets)
		{
			if (k%i == 0)
				factors.emplace_back(i);
		}
		sort(factors.begin(), factors.end());
		os << k / (*(factors.end() - 1)) << endl;
	}
};
int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	istream& is(std::cin);
	ostream& os(std::cout);
	TaskA t;
	t.solve(is, os);
	return 0;
}
