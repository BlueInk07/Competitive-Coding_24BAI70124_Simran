
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    int totalOnes = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] == 1) totalOnes++;
    }

    int maxSum = INT_MIN, curr = 0;

    for(int i = 0; i < n; i++) {
        int val = (a[i] == 0) ? 1 : -1;

        curr = max(val, curr + val);
        maxSum = max(maxSum, curr);
    }

    // If all are 1
    if(maxSum <= 0) {
        cout << totalOnes - 1 << endl;
    } else {
        cout << totalOnes + maxSum << endl;
    }

    return 0;
}
