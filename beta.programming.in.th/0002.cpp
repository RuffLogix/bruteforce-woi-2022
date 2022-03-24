#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0) , cin.tie(0);

    int n;
    cin >> n;

    int mn=2e9,mx=-2e9;

    for(int i=0 ; i<n ; i++){
        int x;
        cin >> x;
        mn = min(mn , x);
        mx = max(mx , x);
    }

    cout << mn << "\n" << mx;

    return 0;
}