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
	vector <int> prog;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		prog.push_back(a);
	}
	int mini = 100000000;
	int ind1 = -1;
	int ind2 = -1;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (abs(prog[i] - prog[j]) < mini) {
				mini = abs(prog[i] - prog[j]);
				ind1 = i;
				ind2 = j;
			}
		}
	}
	cout << mini << endl;
	if (prog[ind1] < prog[ind2]) {
		cout << ind1 + 1 << " " << ind2 + 1;
	}
	else {
		cout << ind2 + 1 << " " << ind1 + 1;
	}
}
