#include<iostream>
#include<string>
using namespace std;
int main(){
	string n,m;
	cin >> n>>m;
	
	long long sum =0;
	for(int i =0; i<n.length();i++){
		for(int y=0;y<m.length();y++){
			sum+= (n[i]-48)*(m[y]-48);
			
		}
	}	
	cout << sum;
}