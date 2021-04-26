#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string solve(string s) {
    string ans ;
    int l = s.length() ; string temp ;
    int i = 0 ; int f = 0 ;
    while (i  < l ) {
        char c = s[i] ; f = 0 ;
        while (i < l && s[i] == c ) {f++ ; i++ ;  }
        temp = to_string(f) ;
        temp.push_back(c) ;
        ans = ans + temp ;
    }
    return ans ;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n ; cin >> n;
    string ans = "1" ;
    int i = 1 ;
    while (i < n ) {
        ans = solve(ans ) ;
        i++ ;
    }
    cout << ans ;
    return 0;
}
