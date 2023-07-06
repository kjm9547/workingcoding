#include <iostream>
#include <stack>
#include<string>
using namespace std;


int main(){
	stack <char> st;
	string t;
	int n;
	cin>>n;
	string anw = "YES";
	for(int i=0; i<n; i++){
		cin >> t;
		for(int y=0;y<t.length();y++){
			if(t[y] == '(' ){
				st.push(t[y]);
			}
			else if(!st.empty() && t[y] == ')' && st.top() == '('){
				st.pop();
			}
			else{anw = "NO"; break;}
			
			
		}
		if(!st.empty()) anw ="NO";
		cout <<anw <<endl;
		
	}
	return 0;
	
}
