#include<bits/stdc++.h>
#define ip pair<int , int >

using namespace std ;

bool safe(int i , int j , int r  ) {
    if ( i < 0 || i >= r || j < 0 || j >= r) return 0 ;
    return 1 ;
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int r ; cin >> r ;
    int a[r][r] ;
    for (int i = 0 ; i < r ; ++i ) {
        for (int j = 0 ; j < r; ++j ) cin >> a[i][j] ;
    }
    int i , j ; cin >> i >> j ; int oldc = a[i][j] ;
    int newc ; cin >> newc ;

    bool visited[r][r] ; memset(visited , 0 , sizeof(visited)) ;
    queue<ip>q ; q.push({i , j }) ; visited[i][j] = 1 ;
    ip temp ;
    while ( !q.empty()) {
        i = q.front().first ; j = q.front().second ;
        q.pop() ;
        a[i][j] = newc ;

        if ( safe(i + 1 , j , r) && visited[i + 1][j] == 0  && a[i + 1][j] == oldc) {
            q.push({ i + 1 , j }) ;
            visited[i + 1][j] = 1 ;
        }
        if ( safe(i - 1 , j , r) && visited[i - 1][j] == 0  && a[i - 1][j] == oldc) {
            q.push({ i - 1 , j }) ;
            visited[i - 1][j] = 1 ;
        }
        if ( safe(i , j - 1  , r) && visited[i][j - 1 ] == 0  && a[i][j - 1 ] == oldc) {
            q.push({ i , j - 1  }) ;
            visited[i][j - 1 ] = 1 ;
        }
        if ( safe(i , j  + 1, r) && visited[i][j + 1] == 0  && a[i][j + 1] == oldc) {
            q.push({ i , j + 1 }) ;
            visited[i][j + 1] = 1 ;
        }
    }
    for (int  i = 0 ; i < r ; ++i ) {
        for (int j = 0 ; j < r; ++j  ) cout << a[i][j] << " " ;
        cout << endl;
    }




    return 0;
}
