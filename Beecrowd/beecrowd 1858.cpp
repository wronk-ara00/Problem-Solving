#include<bits/stdc++.h>
using namespace std;

//__builtin_popcount(); // count all set bits
//__builtin_popcountll(); 

int main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	int n;
	cin>>n;
	int a[n];
	for(int i = 0; i<n; i++){
		cin>>a[i];
	}

	int min = 1e9;
	int index = 0;
	for(int i = 0; i<n; i++){
		if(a[i]<min){
			min = a[i];
			index = i;
		}
	}
	index++;
	
	cout<<index<<endl;

	return 0;
}