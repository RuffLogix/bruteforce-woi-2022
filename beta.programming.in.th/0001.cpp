#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0) , cin.tie(0);

    int a,b,c;
    cin >> a >> b >> c;
    int totalScore=a+b+c;

    if(totalScore>=80){
        cout << "A";
    }else if(totalScore>=75){
        cout << "B+";
    }else if(totalScore>=70){
        cout << "B";
    }else if(totalScore>=65){
        cout << "C+";
    }else if(totalScore>=60){
        cout << "C";
    }else if(totalScore>=55){
        cout << "D+";
    }else if(totalScore>=50){
        cout << "D";
    }else{
        cout << "F";
    }

    return 0;
}