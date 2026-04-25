
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<pair<int,int>> edges(n-1);
    vector<vector<int>> adj(n+1);
 
    for(int i = 0; i < n-1; i++) {
        int u, v;
        cin >> u >> v;
        edges[i] = {u, v};
        adj[u].push_back(i);
        adj[v].push_back(i);
    }
 
    vector<int> ans(n-1, -1);
 
    int special = -1;
 
    for(int i = 1; i <= n; i++) {
        if(adj[i].size() >= 3) {
            special = i;
            break;
        }
    }
 
    int label = 0;
 
    if(special != -1) {
        for(int idx : adj[special]) {
            if(label < 3) {
                ans[idx] = label++;
            }
        }
    }
 
    for(int i = 0; i < n-1; i++) {
        if(ans[i] == -1) {
            ans[i] = label++;
        }
    }
 
    for(int x : ans) cout << x << endl;
 
    return 0;
}
