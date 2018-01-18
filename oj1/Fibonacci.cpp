#include "stdafx.h"
#include<iostream>
#include<Eigen/eigen>
#include<Eigen/dense>
using namespace std;
using namespace Eigen;
typedef long long ll;
/**
  *This calculates fibonacci in O(n), can down to O(logn)
  */
class solution
{
public:
	int main()
	{
		cout << "Fibonacci calculator (non-recursive)" << endl;
		cout << "Enter n:" << endl;
		ll n;
		cin >> n;
		Matrix<ll, 2, 1> F;
		Matrix<ll, 2, 1> a;
		a << 1, 0;
		Matrix<ll, 2, 2> t;
		t << 1, 1, 1, 0;
		Matrix<ll, 2, 2> R;
		R << 1, 0, 0, 1;
		for (ll i = 1; i < n; i++)
			R = R * t;
		F = R * a;
		cout << F[0] << endl;
		return 0;
	}
};
