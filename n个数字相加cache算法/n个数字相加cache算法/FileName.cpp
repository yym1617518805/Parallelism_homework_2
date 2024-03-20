#include<iostream>
#include<vector>
#include <chrono>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int> a(n, 1);
	int sum = 0;
	int sum1 = 0;
	int sum2 = 0;
	for (int i = 0; i < n; i+=2) {
		sum1 += a[i];
		sum2 += a[i + 1];
	}
	sum = sum1 + sum2;

	return 0;
}