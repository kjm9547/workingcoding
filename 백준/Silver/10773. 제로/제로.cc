#include<iostream>
#include <stack>

using namespace std;
int main(){
	stack<int> s;
	int n, t;
	cin >> n;
	int sum =0;
	for(int i =0; i<n; i++){
		cin >> t; 
		if(t == 0){
			s.pop();
		}
		else{
			s.push(t);	
		}
	
	}
	while(!s.empty()){
		sum+=s.top();
		s.pop();
	}
	cout << sum;	
}