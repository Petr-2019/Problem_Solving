// acm.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include <fstream>
#include <cstring>
#include <vector>
#include <sstream>
#include <map>
#include <unordered_map>
#include <string>
#include <math.h>
#include <set>
#include <queue>
#include <algorithm>
#include <stack>
#include <list>
#include <iomanip>
#include <unordered_set>

#define sf scanf
#define pf printf
#define rep(i,n) for(int i = 0;i<n;++i)
#define rep1(i,n) for(int i = 1;i<n;++i)
#define r_rep(i,n) for(int i = n-1;i>=0;--i)
#define FOR(i,s,e) for(int i = s;i<=e;++i)
#define LL long long
#define ULL unsigned long long

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	int T;
	cin >> T;
	ULL x, y, z, b, w;
	while (T--)
	{
		cin >> b >> w;
		cin >> x >> y >> z;
		ULL spend = 0;
		if (x > y)
			spend = y*w + min(x, y + z)*b;
		else if (x < y)
			spend = x*b + min(y, x + z)*w;
		else
			spend = x*b + y*w;
		cout << spend << endl;
	}
	return 0;
}

/**
5 9
2 3 4
(37)



*/
