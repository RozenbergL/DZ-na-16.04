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
	vector <int> num = { 1, 2 };
	int d = 3;
	int count = 0;
	for (int i = 0; i < pow(10, 6); i++) {
		num.push_back(num[num.size() - 1] + d);
		count++;
		if (count == 2) {
			count = 0;
			d += 2;
		}
	}
	int answer = num[n - 1];
	cout << answer + answer / 10;
}
