#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0) , cin.tie(0);

    int arr[9];
    int sum=0;
    for(int i=0 ; i<9 ; i++){
        cin >> arr[i];
        sum+=arr[i];
    }

    int n1=-1,n2=-1;
    for(int i=0 ; i<9 && n1==-1 ; i++){
        for(int j=i+1 ; j<9 && n1==-1 ; j++){
            if(arr[i]+arr[j]==sum-100){
                n1=i;
                n2=j;
            }
        }
    }

    for(int i=0 ; i<9 ; i++){
        if(i!=n1 && i!=n2){
            cout << arr[i] << "\n";
        }
    }

    return 0;
}