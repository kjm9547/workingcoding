#include<iostream>
#include<algorithm>
using namespace std;

int check(int a[],int s,int e,int t){
	if(s > e)	return false;
	int mid = (s+e)/2;
	if(a[mid]== t){
		return 1;
	}
	if(a[mid] < t){
		return check(a,mid+1,e,t);
	}
	else if(a[mid] > t){
		return check(a,s,mid-1,t);
	}
return false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int n,m;
	cin >> n;
	int* arr = new int[n];
	for(int i =0; i<n; i++){
		cin >> arr[i];
	}
	cin >> m;
	sort(arr,arr+n);
	int t;
	for(int i =0; i<m; i++){
		cin >> t;
		cout << check(arr,0,n-1,t) << ' ';
	}
}