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
	for (int j = 0; j < n; j+=8) {
		for (int i = 0; i < n; i++) {
			sum[i] += matrix[j][i] * a[j];
			sum[i] += matrix[j+1][i] * a[j+1];
			sum[i] += matrix[j+2][i] * a[j+2];
			sum[i] += matrix[j+3][i] * a[j+3];
			sum[i] += matrix[j+4][i] * a[j+4];
			sum[i] += matrix[j+5][i] * a[j+5];
			sum[i] += matrix[j+6][i] * a[j+6];
			sum[i] += matrix[j+7][i] * a[j+7];
		}
	}
	return 0;
}