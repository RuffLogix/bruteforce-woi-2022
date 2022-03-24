#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0) , cin.tie(0);

    double r; 
    cin >> r;

    double normal=r*r*M_PI;
    double taxi=r*r*2;

    cout << fixed << setprecision(6) << normal << "\n" << taxi;

    return 0;
}