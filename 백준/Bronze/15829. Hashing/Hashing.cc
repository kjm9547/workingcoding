#include<iostream>
using namespace std;

int hashT(string s){
	char alpha[26];
	for(int i='a';i<='z'; i++){
		alpha[i-97] = i;
		
	}
	int sum=0;
	for(int i =0; i<s.length(); i++){
		for(int y=1;y<=26;y++){
			if(s[i] == alpha[y-1]){
				int d =31;
				for(int z=0; z<=i;z++){
					if(z==0){
						d=1;
					}
					else{
						d*=31;	
					}
				}
				sum += y*d;
			}
		}
	}
	return sum;
};
int main(){
	int n;
	string s;
	cin >> n;
	cin >> s;
	if(s.length()<=n){
		
		cout << hashT(s);
		}
	return 0;
}