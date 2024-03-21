#include<iostream>
#include<vector>
using namespace std;
#define ss(a) sum_odd_even(a)
template<typename T>
T sum_odd_even(const vector<T>& vec) {
    T sum1 = 0;
    T sum2 = 0;
    for (size_t i = 0; i < vec.size(); i += 2) {
        sum1 += vec[i];
        if (i + 1 < vec.size())
            sum2 += vec[i + 1];
    }
    return sum1 + sum2;
}
int main() {
    int n;
    cin >> n;
    vector<int> a(n, 1);
    int sum = ss(a);
    cout << "Sum: " << sum << endl;
    return 0;
}