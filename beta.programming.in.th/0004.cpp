#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0) , cin.tie(0);

    string s; cin >> s;

    bool upper=false,lower=false;
    for(auto c : s){
        if('A'<=c && c<='Z'){
            upper=true;
        }else{
            lower=true;
        }
    }

    if(upper && lower){
        cout << "Mix";
    }else if(upper){
        cout << "All Capital Letter";
    }else{
        cout << "All Small Letter";
    }

    return 0;
}