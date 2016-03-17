//============================================================================
// Name        : ayman.cpp
// Author      : Ayman Mostafa
// Email       : ayman93live@hotmail.com
// Version     : v5.0
//============================================================================

#include <cstring>
#include <map>
#include <deque>
#include <queue>
#include <stack>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <vector>
#include <set>
#include <complex>
#include <list>
#include <climits>
#include <cctype>
#include <bitset>

using namespace std;

#define all(x) x.begin(),x.end()
#define allr(x) x.rbegin(),x.rend()

void fastInOut();

bool palind(string s) {
	for (unsigned int i = 0, f = s.size() - 1; i < s.size() / 2; i++, f--)
		if (s[i] != s[f])
			return false;
	return true;
}

//##########################################################################################
//###################################MAIN FUNCTION##########################################
//##########################################################################################
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "rt", stdin);
//freopen("output.txt", "wt", stdout);
#endif
	fastInOut();
//----------------------------------------------------------------------------------
//----------------------------------------------------------------------------------
// 11057 - Exact Sum
	int n, x, m, y;
	vector<int> v;
	vector<int>::iterator it;
	while (cin >> n) {
		v.clear();
		while (n--) {
			cin >> x;
			v.push_back(x);
		}
		cin >> m;
		sort(all(v));
		x = -1e9, y = 1e9;
		for (auto i : v) {
			it = lower_bound(all(v), m - i);
			if (it != v.end() && (*it) == m - i)
				if (abs(i - (*it)) < abs(x - y))
					x = i, y = (*it);
		}
		cout << "Peter should buy books whose prices are " << x << " and " << y
				<< ".\n\n";
	}
}
void fastInOut() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
}
