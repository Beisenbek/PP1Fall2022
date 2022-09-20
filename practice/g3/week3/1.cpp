//lab-2 prob j
//g from lab02
#include <iostream>

using namespace std;

int main(){
    
    int x;
    int ans = 0;
    int n;

    cin >> n;
    
    for(int i = 1; i <= n; ++i){
        cin >> x;
        do{
            if(x % 10 == 0){
                ans++;
            }
            x = x / 10;
        }while(x > 0);
    }

    cout << ans;

    return 0;
}