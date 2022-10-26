#include <bits/stdc++.h>
using namespace std;

int f(int i, int j, string s, string t)
{
	if (j >= t.size()) {
		return 1;
	}

	if (i >= s.size()) {
		return 0;
	}

	if (s[i] == t[j]) {
		return f(i + 1, j + 1, s, t) + f(i + 1, j, s, t);
	}

	return f(i + 1, j, s, t);
}

int findSubsequenceCount(string s, string t)
{
	return f(0, 0, s, t);
}


int main()
{
	string T = "ban";
	string S = "banana";
	cout << findSubsequenceCount(S, T) << endl;
	return 0;
}
