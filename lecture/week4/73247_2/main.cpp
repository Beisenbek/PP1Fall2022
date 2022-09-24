#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char** argv) {
	
	int n;
	cin >> n;
	int a[n];
	
	for(int i = 0; i < n; ++i){
		cin >> a[i];
	}
	
	int m;
	cin >> m;
	int b[m];
	
	for(int i = 0; i < m; ++i){
		cin >> b[i];
	}
	
	int k = n + m;
	int c[k];
	
	int i_a = 0;
	int i_b = 0;
	int i_c = 0;
	
	
	while(i_a < n && i_b < m){
		if(a[i_a] <= b[i_b]){
			c[i_c] = a[i_a];
			i_a++;
		}else{
			c[i_c] = b[i_b];
			i_b++;
		}
		i_c++;
	}
	
	if(i_a == n){
		for(int i = i_b; i < m; ++i){
			c[i_c] = b[i];
			i_c++;
		}
	}
	else if(i_b == m){
		for(int i = i_a; i < n; ++i){
			c[i_c] = a[i];
			i_c++;
		}
	}
	

	for(int i = 0; i < k; ++i){
		cout << c[i] << " ";
	}


	return 0;
}

