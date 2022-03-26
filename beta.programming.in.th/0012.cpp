#include <bits/stdc++.h>

using namespace std;

string s;

void l1(){
    cout << ".";
    for(int i=1 ; i<=s.length() ; i++){
        i%3 ? cout << ".#.." : cout << ".*..";
    }
    cout << "\n";
}

void l2(){
    cout << ".";
    for(int i=1 ; i<=s.length() ; i++){
        i%3 ? cout << "#.#." : cout << "*.*.";
    }
    cout << "\n";
}

int main(){
    ios_base::sync_with_stdio(0) , cin.tie(0);

    cin >> s;

    l1();
    l2();

    cout << "#";
    for(int i=1 ; i<=s.length() ; i++){
        if(i%3==1){
            cout << "." << s[i-1] << ".#";
        }else if(i%3==2){
            cout << "." << s[i-1] << ".";
        }else{
            cout << "*." << s[i-1] << ".*";
        }
    }
    if(s.length()%3==2)cout << "#";
    cout << "\n";

    l2();
    l1();

    return 0;
}