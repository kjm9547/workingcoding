#include <iostream>
using namespace std;


int main(){
	long long n;
	cin >> n;
	long long dp[100];
	dp[0] = 0;
	dp[1] =1;
	for(int i =2; i<=n;i++){
		dp[i] = dp[i-1]+ dp[i-2];
	}
	cout << dp[n];
}