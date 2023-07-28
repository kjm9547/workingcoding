#include<iostream>

using namespace std;

int selfFibo(int n){
	if(n==1||n==0){
		return n;
	}
	else{
		return selfFibo(n-1)+selfFibo(n-2);
	}
	
}

int main(){
	int n;
	int dp[100];
	cin >> n;
	dp[0]=1;
	dp[1] = 1;
	for(int i=2;i<n;i++){
		dp[i] = dp[i-1]+dp[i-2];
	}
	cout <<selfFibo(n)<< ' ' <<n-2;
}