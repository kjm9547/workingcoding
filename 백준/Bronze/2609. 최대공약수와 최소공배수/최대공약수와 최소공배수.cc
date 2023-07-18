#include <iostream>
using namespace std;

int gcp(int a, int b){
	int tmp;
	if( a<b){
		tmp = a;
		a= b;
		b= tmp;
	}
	if(a%b ==0) return b;
	else {
		int n = a%b;
		a = b;
		return gcp(a,n);
	}
	
}
int main(){
	int a,b;
	cin >> a >> b;
	int result =0;
	result =gcp(a,b);
	cout << result << endl << a*b/result ;
	return 0;
	
}