#include<bits/stdc++.h>
using namespace std;

int dp[5001][5001] ;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s1 , s2 ; cin >> s1 >> s2 ;
    int m = s1.length() , n = s2.length() ;
    // int dp[m+1][n + 1 ] ;

    for (int i = 0 ; i <= m ; ++i ) {
        for (int j = 0 ; j <= n ; ++j ) {
            if ( i == 0 || j == 0 ) dp[i][j] = 0 ;
            else if ( s1[i - 1] == s2[j - 1 ]) dp[i][j] = 1 +  dp[i - 1 ][j - 1 ] ;
            else dp[i][j] = max(dp[i - 1 ][j] , dp[i][j - 1 ]) ;
        }
    }
    cout << dp[m][n] ;


    return 0;
}
