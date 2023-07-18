#include<iostream>
using namespace std;
int main(){
	int n,m;
	
	
	while(true){
		string result ="";
		cin >> n >> m;
		if(n == 0 && m == 0) break;
		else if (n==0 || m== 0) result= "neither";
	else if (n> m){
		if(n%m == 0){
			result ="multiple";
		}
	}
	else if(n<m){
		if(m%n ==0 ) result ="factor";
	}	
		if(result == "") result = "neither";
		cout << result << '\n';
	}
	
	
}