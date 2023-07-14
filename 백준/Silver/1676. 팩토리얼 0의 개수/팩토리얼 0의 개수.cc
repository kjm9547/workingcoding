#include <iostream>

using namespace std;
 
int main() {
    int n;
	cin >> n;
	int stack =0;
		for(int i =5; i<=n; i*=5){
			stack+=n/i;
		}
		cout << stack;
	
	return 0;
	
}
