#include <iostream>
#include <string>
using namespace std;
int main(){
	int n;
	
	while(true){
		string result ="";
		cin >> n;
		if (n == -1) break;

		else{
				int sum =0;
				int cnt =0;
				for(int y=1;y<n; y++){
					if(n%y == 0){
						sum+=y;
						result += to_string(y)+ " + ";
					}
				}
			if(n == sum) cout<< n << " = " << result.substr(0,result.length()-3)<< '\n' ;
			else cout << n << " is NOT perfect." << '\n';
					
			
		}
	}
}