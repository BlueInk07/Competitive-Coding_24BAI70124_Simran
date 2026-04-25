
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        int i = 0;
        while(i < n && a[i] == 1) i++;
        if(i == n) {
            if(n % 2 == 1)
                cout << "First\n";
            else
                cout << "Second\n";
        }
        else {
            if(i % 2 == 0)
                cout << "First\n";
            else
                cout << "Second\n";
        }
    }

    return 0;
}
