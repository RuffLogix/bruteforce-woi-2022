#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0) , cin.tie(0);

    int arr[3];

    for(int i=0 ; i<3 ; i++){
        cin >> arr[i];
    }
    sort(arr,arr+3);

    string s;
    cin >> s;

    for(auto c : s){
        cout << arr[c-'A'] << " ";
    }

    return 0;
}