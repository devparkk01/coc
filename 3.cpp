#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t ; cin >> t;
    while (t-- ) {
        int n ; cin >> n ; int a[n] ; for (int i = 0 ; i < n ; ++i) cin >> a[i] ;

        int ans = 0 ; int prefixsum = 0 ;
        for (int i = 0 ; i < n ; ++i ) {
            prefixsum += a[i] ;
            ans = min(ans , prefixsum )  ;
        }
        cout << abs(ans ) + 1 << endl;

    }
    return 0;
}
