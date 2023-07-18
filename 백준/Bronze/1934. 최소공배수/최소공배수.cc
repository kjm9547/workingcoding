#include<iostream>
using namespace std;

int gcd(int a,int b){
	int tmp;
	if(a<b){
		tmp = a;
		a = b;
		b= tmp;
	}
	if(b == 0) return a;
	else{
		return gcd(b,a%b);
	}
}
int main(){
	int l;
	int n,m;
	cin >> l;
	for(int i=0;i<l; i++){
	
		cin >> n >> m;
		cout << n*m/gcd(n,m) << '\n';
	}
}