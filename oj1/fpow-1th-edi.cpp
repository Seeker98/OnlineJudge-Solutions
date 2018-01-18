#include "stdafx.h"
#include<iostream>
typedef long long ll;
ll fpow(ll a, ll b)  //fast power
{
ll sum = 1;
int weight = 1;
while (b != 0)
{
	if ((b & 1) == 1)
	{
		sum *= (ll)(pow(a, weight));
	}
	b >>= 1;
	weight *= 2;
}
	return sum;
}
