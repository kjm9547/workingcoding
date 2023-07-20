#include<iostream>
using namespace std;
int main(){
	 int arr[] ={25,10,5,1};
	 int t,c;
	 cin >> t;
	 for(int i=0; i<t; i++){
		 int y=0;
		cin >> c;
		 while(true){
			if(y==4) break;
			if(c%arr[y]==0){
			 cout << c/arr[y] << ' ';
			 c-=arr[y]*(c/arr[y]);
		 	}
			 else{
				 cout << c/arr[y] << ' ';
				 c -= arr[y]*(c/arr[y]);
			 }
			 y++;
			 
		 }
		 
	 }
	
}