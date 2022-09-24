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
	
	for(int i = 0; i < n; ++i){
		c[i] = a[i];
	}


	for(int i = 0; i < m; ++i){
		c[n + i] = b[i];
	}	
	
	for(int i = 0; i < k; ++i){
		cout << c[i] << " ";
	}
	
	cout << endl;
	
	sort(c, c + k);
	
	for(int i = 0; i < k; ++i){
		cout << c[i] << " ";
	}

	cout << endl;
	
	for(int i = 0; i < k; ++i){
		cout << *(c + i) << " ";
	}	

	
	return 0;
}
