#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n; cin >> n ;
    int a[n] ; for (int i = 0 ; i < n ; ++i ) cin >> a[i] ;
    int cursum = a[0] ; int maxsum = a[0] ;
    for (int i = 1; i < n ; ++i ) {
        cursum = max(cursum + a[i] , a[i]) ;
        maxsum = max(cursum , maxsum ) ;
    }
    cout << maxsum << endl;



    return 0;
}
