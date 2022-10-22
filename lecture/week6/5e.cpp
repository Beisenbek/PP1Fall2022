#include <bits/stdc++.h>

using namespace std; 

int main ()
{
    int n;  
    int sumodd = 0, sumeven = 0;
    cin >> n;
    string k(n);
    int len = k.size();

    for ( int i = 0; i < len ; i = i + 2){
        sumodd = sumodd + k[i];
    }
    for ( int i = 1; i < len ; i = i + 2){
        sumeven = sumeven + k[i];
    } 

    cout << sumodd << " " << sumeven;
    
    }
