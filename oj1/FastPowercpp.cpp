#include "stdafx.h"
#include<iostream>
using namespace std;
typedef long long ll;

long long fp(long long base, long long expr, long long mod = 1e9 + 7)
{
	long long ans = 1LL;
	base %= mod;
	while (expr)
	{
		if (expr & 1LL)
			ans = (ans * base) % mod;
		base = (base * base) % mod;
		expr >>= 1LL;
	}
	return ans % mod;
}