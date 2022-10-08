#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    int a[n][n];

    int dr[] = {0, 1, 0, -1};
    int dc[] = {1, 0, -1, 0};

    int w[2 * n  - 1];

    int x = 0;
    w[x] = n;
    for(int i = n - 1; i >= 1; --i){
        w[x + 1] = i;
        w[x + 2] = i;
        x  = x + 2;
    }

    int cnt = 1;
    int r = 0;
    int c = -1;
    int k = 0;

    while(cnt <= n *n ){
        for(int i = 0; i < 2 * n - 1; ++i){
            for(int j = 1; j <= w[i]; ++j){
                r = r + dr[k];
                c = c + dc[k];
                a[r][c] = cnt;
                cnt++;
            }
            k = (k + 1) % 4;
        }
    }


    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}