#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    ios::sync_with_stdio(0);
	int x1;
	int v1;
	int x2;
	int v2;
	cin >> x1 >> v1 >> x2 >> v2;

	if (x1 < x2 && v1 < v2)
	{
		cout << "NO" << endl;
	}
	else if (x1 > x2 && v1 > v2)
	{
		cout << "NO" << endl;
	}
	else
	{
		if (v1 == v2)
		{
			if (x1 == x2)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
		else
		{
			int dis = abs(x1 - x2);
			if (dis%abs(v1 - v2) == 0)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
	}

	return 0;
}
