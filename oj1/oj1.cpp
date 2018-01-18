// oj1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<queue>
#include<deque>
#include<iomanip>
#include<map>
#include<set>
#include<bitset>
#include<fstream>
#include<cmath>
#include<Eigen/eigen>
#include<Windows.h>
#define Pi 3.141592653589793
#define min(a,b)            (((a) < (b)) ? (a) : (b))
#define max(a,b)            (((a) > (b)) ? (a) : (b))

using namespace std;
using namespace Eigen;
typedef vector<char> vc;
typedef pair<int, int> pii;
typedef long long ll;
const ll mod = 1000000007;
vector<string> p;

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
		os << k/(*(factors.end()-1)) << endl;
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

/*hello 2018 B
int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	vector<pair<int,bool>> tree(n + 1);
	tree[1] = pair<int,bool>(0, false);
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
*/
/*
//This calculates fibonacci in O(n), can down to O(logn)
int main()
{
	cout << "Fibonacci calculator (non-recursive)" << endl;
	cout << "Enter n:" << endl;
	ll n;
	cin >> n;
	Matrix<ll, 2, 1> F;
	Matrix<ll, 2, 1> a;
	a << 1, 0;
	Matrix<ll,2,2> t;
	t << 1, 1, 1, 0;
	Matrix<ll, 2, 2> R;
	R << 1, 0, 0, 1;
	for (ll i = 1; i < n; i++)
		R = R * t;
	F = R * a;
	cout << F[0] << endl;
	return 0;
}
*/
/*csu acm 2018 D
int main()
{
	int h, w;
	cin >> h >> w;
	int** grid = new int*[h];
	for (int i = 0; i < h; i++)
		grid[i] = new int[w];
	int n;
	cin >> n;
	vector<int> colors;
	int num = 0;
	while (n--)
	{
		num++;
		int k;
		cin >> k;
		for (int i = 1; i <= k; i++)
			colors.emplace_back(num);
	}
	int x = 0, y = 0;
	for (int i = 0; i < colors.size(); i++)
	{
		grid[x][y] = colors[i];
		if (y % 2 == 0)
		{
			if (x < h - 1)
			{
				x++;
				continue;
			}
			if (x == h - 1)
			{
				y++;
				continue;
			}
		}
		if (y % 2 == 1)
		{
			if (x > 0)
			{
				x--;
				continue;
			}
			if (x == 0)
			{
				y++;
				continue;
			}
		}
	}
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
			cout << grid[i][j] << " ";
		cout << endl;
	}
	return 0;
}
*/
/*csu 2018acm 
int main()
{
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i=0;i<n;i++)
		cin >> v[i];
	map<int, int> m;
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		m[v[i]]++;
	}
	for (auto it = m.begin(); it != m.end(); it++)
		max = max > (*it).second ? max : (*it).second;
	cout << max << endl;
	return 0;
}
*/
/*
int main()
{
	int n;
	cin >> n;
	int tmp = n;
	char t;
	int dim1 = 0;
	int dim2 = 0;
	while (n--)
	{
		cin >> t;
		switch (t)
		{
		case 'U':
			dim2++;
			break;
		case 'D':
			dim2--;
			break;
		case 'L':
			dim1++;
			break;
		case 'R':
			dim1--;
			break;
		}
	}
	cout << tmp - abs(dim1) - abs(dim2) << endl;
}
*/
/*csu2018 N
int main()
{
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	int l = 0;
	int r = 0;
	while (n--)
	{
		int a, b;
		cin >> a >> b;
		if (a < 0)
			++l;
		else
			++r;
	}
	cout << ((r <= 1 || l <= 1) ? "Yes" : "No") << endl;
	return 0;
}
*/
/*csu 2018 Q
int main()
{
	int a[6];
	cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4] >> a[5];
	bool flag = 0;
	int sum = a[0] + a[1] + a[2] + a[3] + a[4] + a[5];
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			for (int k = 0; k < 6; k++)
			{
				if ((i != j) && (j != k) && (i != k) && ((a[i] + a[j] + a[k]) == (sum - a[i] - a[j] - a[k])))
				{
					flag = 1;
					break;
				}
			}
		}
	}
	cout << (flag ? "YES" : "NO") << endl;
	return 0;
}
*/
/*csu acm 2018 newbee E
bool comp(const pii& p1, const pii& p2)
{
	if (p1.first != p2.first)
		return p1.first < p2.first;
	else
		return p1.second < p2.second;
}
int main()
{
	int a[4];
	cin >> a[0] >> a[1] >> a[2] >> a[3];
	vector<pii> vp;
	vp.emplace_back(pii(a[0], a[1]));
	vp.emplace_back(pii(a[2], a[3]));
	sort(vp.begin(), vp.end(),comp);
	int start = 0;
	int end=0;
	if (vp[1].first < vp[0].second)
	{
		start = max(vp[0].first, vp[1].first);
		end = min(vp[0].second, vp[1].second);
	}
	cout << end - start << endl;
	return 0;
}
/*csu 2018acm newbee B
int main()
{
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	ll *a = new ll[n];
	ll* b = new ll[n];
	int tmp = 0;
	while (n--)
		cin >> a[tmp++];
	b[0] = a[0];
	for (int i = 1; i < tmp; i++)
		b[i] =b[i-1]+ a[i];
	ll min = abs(b[tmp-1] - 2 * b[0]);
	for (int i = 1; i < tmp - 1; i++)
		min =((min > abs(b[tmp-1] - 2 * b[i])) ? (abs(b[tmp-1] - 2 * b[i])) : min);
	cout << min << endl;
	return 0;
}
*/
/*csu acm 2018 newbee C
int main()
{
	int n;
	cin >> n;
	int *a = new int[n];
	int tmp = 0;
	int r2 = 0, r4 = 0;
	while (n--)
		cin >> a[tmp++];
	for (int i = 0; i < tmp; i++)
	{
		if (a[i] % 4 == 0)
			r4++;
		else
		{
			if (a[i] % 2 == 0)
				r2++;
		}
	}
	if(tmp%2==1)//jishu
		cout << ((2 * r4 + r2 >= tmp - 1) ? "Yes" : "No") << endl;
	else
		cout << ((2 * r4 + r2 >= tmp) ? "Yes" : "No") << endl;
	return 0;
}
*/

/*csu 2018 acm newbee A AC
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
		for (int i = dq.size()-1; i >=0; i--)
		{
			cout << dq[i] << " ";
		}
	}
	return 0;
}


/*cf 454 div.2 B
int main()
{
	char a[9][9];
	int x, y;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
			cin >> a[i][j];
	}
	cin >> x >> y;
	int m = x % 3;
	int n = y % 3;
	int p ;
	int q;
	int x1, y1;
	switch (m)
	{
	case 0:
		p = 2;
		break;
	case 1:
		p = 0;
		break;
	case 2:
		p = 1;
		break;
	}
	switch (n)
	{
	case 0:
		q = 2;
		break;
	case 1:
		q = 0;
		break;
	case 2:
		q = 1;
		break;
	}
	x1 = 3 * p;
	y1 = 3 * q;
	int modified = 0;
	for (; x1 <= 3 * p + 2; x1++)
	{
		for (y1=3*q; y1 <= 3 * q + 2; y1++)
		{
			if (a[x1][y1] == '.')
			{
				a[x1][y1] = '!';
				modified = 1;
			}
		}
	}
	if (!modified)
	{
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
			{
				if (a[i][j] == '.')
					a[i][j] = '!';
			}
		}
	}
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cout << a[i][j];
			if (j % 3 == 2)
				cout << " ";
		}
		cout << endl;
		if (i % 3 == 2)
			cout << endl;
	}
	return 0;
}
*/
/*
Codeforces Round #453 (Div. 2):AC
bool comp(const pii& p1, const pii& p2)
{
	if (p1.first != p2.first)
		return p1.first < p2.first;
	else
		return p1.second < p2.second;
}
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
	sort(vp.begin(), vp.end(),comp);
	int count = 0;
	int presentloc = 0;
	bool flag = false;
	if (vp[0].first != 0)
		goto label;
	for (int i=0;i<vp.size();++i)
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
	label: cout <<( flag ? "YES" : "NO" )<< endl;
	return 0;
}
*/

/*
CS Academy #61 paint the fence: last test TLE
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

/*
class UF
{
public:
	void init(int n)
	{
		id.clear();
		sz.clear();
		count = length = n;
		id.resize(n);
		for (int i = 0; i < length; i++)
			id[i] = i;
		sz.resize(n);
		for (int i = 0; i < length; i++)
			sz[i] = 1;
	}

	int getCount()
	{
		return count;
	}

	bool connected(int p, int q)
	{
		return find(p) == find(q);
	}

	int find(int p)
	{
		int k = p, j;
		while (p != id[p])
			p = id[p];
		while (k != p)
		{
			j = id[k];
			id[k] = p;
			k = j;
		}
		return p;
	}

	void Union(int p, int q)
	{
		int pRoot = find(p);
		int qRoot = find(q);

		if (pRoot == qRoot)
			return;

		if (sz[pRoot] < sz[qRoot])
		{
			id[pRoot] = qRoot;
			sz[qRoot] += sz[pRoot];
		}
		else
		{
			id[qRoot] = pRoot;
			sz[pRoot] += sz[qRoot];
		}
		count--;
	}

private:
	int count;
	vector<int> id;
	vector<int> sz;
	int length;
};

int main()
{
	int n, m;
	cin >> n >> m;
	UF u;
	u.init(n+1);
	int a, b;
	while (m--)
	{
		cin >> a >> b;
		if (!u.connected(a, b))
		{
			u.Union(a, b);
		}
	}
	cout << u.getCount() - 1 << endl;
}
*/





/*
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

int main()
{
	int a, b;
	cin >> a >> b;
	cout << fpow(a, b) << endl;
	return 0;
}
*/

