#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s ; cin >> s ;
    int n = stoi(s) ;
    int l = s.length() ;
    int ans = 0 ;
    for (char &c : s) {
        ans += pow(  c - '0', l );
    }
    if ( ans == n) cout << 1 ;
    else cout << 0 ;

    return 0;
}
