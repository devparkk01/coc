#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n ; cin >> n ;
    int likes = 0 , person = 5 ;
    int i = 0 ;
    while ( i < n ) {
        likes += (person / 2) ;
        person = (person / 2 ) * 3 ;
        i++;
    }

    cout << likes ;
    return 0;
}
