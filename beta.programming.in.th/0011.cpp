#include <bits/stdc++.h>

using namespace std;

bool arr[42];

int main(){
    ios_base::sync_with_stdio(0) , cin.tie(0);

    int t=10;

    int ans=0;
    while(t--){
        int x; cin >> x;
        if(!arr[x%42]){
            ans++;
        }
        arr[x%42]=true;
    }

    cout << ans;

    return 0;
}