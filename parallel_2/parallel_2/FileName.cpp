#include<iostream>
#include<chrono>
#include<vector>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<vector<float>> matrix(n, vector<float>(n, 0));
	vector<float> sum(n, 0);
	vector<int> a(n, 0);
	for (int i = 0; i < n; i++) {
		sum[i] = 0.0;
	}
	for (int j = 0; j < n; j++) {
		for (int i = 0; i < n; i++) {
			sum[i] += matrix[j][i] * a[j];
		}
	}
	return 0;
}