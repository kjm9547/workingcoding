#include<iostream>
#include<string>
using namespace std;

int main(){
	int n;
	int amount = 0;
	cin >> n;
	while(true){
		if(n%5 == 0){
			amount += n/5;
			break;
		}
		else{
			if(n-3 <0){amount = -1; break;}
		
	n-=3;
			amount++;

			
		}
	}
		cout << amount;

	
}
