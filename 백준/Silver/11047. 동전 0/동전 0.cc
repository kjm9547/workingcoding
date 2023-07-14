#include <iostream>

using namespace std;
 
int main() {
    int n,k;
	cin >> n >> k;
	int* arr = new int[n];
	int stack =0;
	for( int i=0; i<n; i++){
		cin >> arr[i];
	}
	for(int i = n-1; i>-1; i--){
		if(k%arr[i] == 0){
			stack+= k/arr[i];
			break;
		}
		else{
			if(0<k/arr[i]){
				stack += (k/arr[i]);
				k= k%arr[i];
			}
		}
	}
	cout << stack;
	return 0;
	
}
