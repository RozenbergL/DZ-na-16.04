#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	if (n == 1) {
		cout << "YES";
	}
	else {
		vector <int> prog;
		for (int i = 0; i < n; i++) {
			int a;
			cin >> a;
			prog.push_back(a);
		}
		sort(prog.begin(), prog.end());
		int d = prog[1] - prog[0];
		int flag = 0;
		for (int i = 1; i < n; i++) {
			if (prog[i] - prog[i - 1] != d) {
				flag = 1;
			}
		}
		if (flag == 0) {
			cout << "YES";
		}
		else {
			cout << "NO";
		}
	}
}
