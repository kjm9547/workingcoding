#include<iostream>
using namespace std;

#define MAX  1000000
int arr[MAX+1];
int main(){
	
	int m,n;
	cin >> m >> n;
	
	
	
	for(int i=2;i*i<=n; i++){
		if(arr[i] == 1) continue;
		
		for(int y =i*i;y<=n;y+=i){
			arr[y] =1;
		}
	}
	arr[1]=1;
	for(int i =m;i<=n; i++){
		if(arr[i] !=1) cout << i << '\n';
	}
	return 0;
}