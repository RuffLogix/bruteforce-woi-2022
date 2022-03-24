#include <bits/stdc++.h>

using namespace std;

int arr[3];

int main(){
    ios_base::sync_with_stdio(0) , cin.tie(0);

    arr[0] = 1;
    string s; cin >> s;

    for(auto c : s){
        if(c=='A'){
            swap(arr[0],arr[1]);
        }else if(c=='B'){
            swap(arr[1],arr[2]);
        }else{
            swap(arr[0],arr[2]);
        }
    }

    int ans;
    for(int i=0 ; i<3 ; i++){
        if(arr[i]){
            ans=i+1;
        }
    }
    cout << ans;

    return 0;
}