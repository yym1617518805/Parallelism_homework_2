#include<iostream>
#include<vector>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int> a(n, 1);
	int sum = 0;
	for (int i = 0; i <n; i++) {
		sum += a[i];
	}
	return 0;
}