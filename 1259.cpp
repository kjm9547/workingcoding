#include<iostream>
#include<string>
using namespace std;
int main(){
	string t;
	while(true){
		bool ck = true;
		cin>>t;
			if(t == "0") break;
		for(int i=0;i<t.size()/2;i++){
			if(t[i] != t[t.size()-i-1]){
				ck=false;
				break;
			} 
		}
		if(ck) cout << "yes" <<endl;
		else cout << "no" <<endl;
		
		
	}
}
