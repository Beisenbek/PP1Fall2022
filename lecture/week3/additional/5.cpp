#include <iostream>

using namespace std;

int main(){
    
    int i = 1;
    cout << ++i + i++;//5???
    i = 1;
    cout << ++i + ++i;//6????
  
    return 0;
}
