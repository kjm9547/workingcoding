#include<iostream>
using namespace std;
int main(){
	int t;
	int a,b;
	
	cin >> t;
	for(int i =0; i<t; i++){
		cin >> a >> b;
		b=b-b/4*4;
		if(b==0) b=4;
		int sum = a;
		for(int y=0;y<b-1;y++){
			sum*=a;
		}
		if(a%10 == 0){
			cout << 10 << '\n';
		}
		else{
			cout << sum%10 << '\n';	
		}
		
		
	}
}
