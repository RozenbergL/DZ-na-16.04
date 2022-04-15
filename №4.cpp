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
	vector <int> num = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 25, 50};
	vector <string> var;
	for (int i = 0; i < 21; i++) {
		if (num[i] * 2 == n) {
			string y = to_string(num[i]);
			y = 'D' + y;
			var.push_back(y);
		}
	}

	for (int i = 0; i < 22; i++) {
		for (int j = 0; j < 21; j++) {
			if (num[i] + 2 * num[j] == n) {
				string y = to_string(num[i]) + " " + 'D' + to_string(num[j]);
				var.push_back(y);
			}
			if (2 * num[i] + 2 * num[j] == n) {
				string y = 'D' + to_string(num[i]) + " " + 'D' + to_string(num[j]);
				var.push_back(y);
			}
			if (3 * num[i] + 2 * num[j] == n) {
				string y = 'T' + to_string(num[i]) + " " + 'D' + to_string(num[j]);
				var.push_back(y);
			}
		}
	}
	for (int i = 0; i < 22; i++) {
		for (int j = 0; j < 22; j++) {
			for (int g = 0; g < 21; g++) {
				if (num[i] + num[j] + 2 * num[g] == n) {
					string y = to_string(num[i]) + " " + to_string(num[j]) + 'D' + to_string(num[g]);
					var.push_back(y);
				}
				if (num[i] + 2 * num[j] + 2 * num[g] == n) {
					string y = to_string(num[i]) + " " + 'D' + to_string(num[j]) + 'D' + to_string(num[g]);
					var.push_back(y);
				}
				if (2 * num[i] + num[j] + 2 * num[g] == n) {
					string y = 'D' + to_string(num[i]) + " " + to_string(num[j]) + 'D' + to_string(num[g]);
					var.push_back(y);
				}
				if (2 * num[i] + 2 * num[j] + 2 * num[g] == n) {
					string y = 'D' + to_string(num[i]) + " " + 'D' + to_string(num[j]) + 'D' + to_string(num[g]);
					var.push_back(y);
				}
				if (2 * num[i] + 3 * num[j] + 2 * num[g] == n) {
					string y = 'D' + to_string(num[i]) + " " + 'T' + to_string(num[j]) + 'D' + to_string(num[g]);
					var.push_back(y);
				}
				if (3 * num[i] + 2 * num[j] + 2 * num[g] == n) {
					string y = 'T' + to_string(num[i]) + " " + 'D' + to_string(num[j]) + 'D' + to_string(num[g]);
					var.push_back(y);
				}
				if (3 * num[i] + 3 * num[j] + 2 * num[g] == n) {
					string y = 'T' + to_string(num[i]) + " " + 'T' + to_string(num[j]) + 'D' + to_string(num[g]);
					var.push_back(y);
				}
				if (3 * num[i] + num[j] + 2 * num[g] == n) {
					string y = 'T' + to_string(num[i]) + " " + to_string(num[j]) + 'D' + to_string(num[g]);
					var.push_back(y);
				}
				if (num[i] + 3 * num[j] + 2 * num[g] == n) {
					string y = to_string(num[i]) + " " + 'T' + to_string(num[j]) + 'D' + to_string(num[g]);
					var.push_back(y);
				}
			}
		}
	}
	cout << var.size() << endl;
	for (auto now : var) {
		cout << now << endl;
	}
}
