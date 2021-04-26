#include<bits/stdc++.h>
using namespace std;

bool freq[10] = {0} ;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n ; cin >> n ; string temp ;
    string a[n] ; for (int i = 0 ; i <  n ; ++i )cin >> a[i] ;
    int c = 0 ; bool flag = 0 ;
    for (int i = 0 ; i < n ; ++i) {
        for (int j = i + 1 ; j < n ; ++j) {
            flag = 1 ;
            memset(freq , 0 , sizeof(freq)) ;
            temp = a[i] + a[j] ;
            for (char &c : temp ) {
                freq[c - '0'] = 1 ;
            }
            for (int i = 0 ; i < 10 ; ++i ) {
                if ( freq[i] == 0 ) { flag = 0 ; break ; }
            }
            if (flag )c++ ;
        }
    }
    cout << c;


    return 0;
}