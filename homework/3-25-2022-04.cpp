#include <bits/stdc++.h>

using namespace std;

int main(){

    int sal;
    cin >> sal;

    if(sal>15000){
        cout << "1000";
    }else if(sal>10000){
        float bonus=min(sal*0.05,650.0);
        cout << bonus;
    }else{
        float bonus=min(sal*0.03,250.0);
        cout << bonus;
    }

    return 0;
}