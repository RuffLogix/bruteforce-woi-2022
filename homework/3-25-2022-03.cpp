#include <bits/stdc++.h>

using namespace std;

int main(){

    float price,ans;
    cin >> price;

    if(price<50){
        ans = price*1.00;
    }else{
        if(price<200){
            ans = price*0.95;
        }else{
            ans = price*0.90;
        }
    }

    cout << ans;

    return 0;
}