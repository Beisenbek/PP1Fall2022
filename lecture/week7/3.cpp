#include <iostream>

using namespace std;

int min2(int a, int b){
    //12, 130
    a = 12;
    b = 130;
    int res = a;
    if(b < a) 
        res = b;
    return res;
}

int main(){
    
    int a, b;
    cin >> a >> b;
    
    cout << min2(b, a) << endl;
    cout << a  << " " << b; 

    return 0;
}
