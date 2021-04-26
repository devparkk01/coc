#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int solve(int a[] , int n ) {
    if ( a[0] == 0 ) return  -1 ;
    else {
        int  maxreach = a[0] , steps = maxreach  , jumps = 1 ;
        // i++;
        for (int i = 1 ; i < n ; ++i ) {
            if ( i == n - 1 ) return jumps ;
            steps-- ;

            maxreach = max(maxreach , a[i] + i) ;
            if ( steps == 0 ) {
                if (i == maxreach ) {
                    return -1 ;
                }
                else {
                    jumps++ ; steps = maxreach - i ;
                }
            }
        }
        return  jumps  ;
    }

}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n ; cin >> n ;
    int a[n] ; for (int i = 0 ; i < n ; ++i) cin >> a[i]  ;
    cout << solve(a , n )  ;
    return 0;
}
