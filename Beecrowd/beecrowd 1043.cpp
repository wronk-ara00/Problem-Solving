#include<bits/stdc++.h>
using namespace std;

//__builtin_popcount(); // count all set bits
//__builtin_popcountll(); 

int main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	float a,b,c;
	cin>>a>>b>>c;
	if(a<b+c && b<a+c && c<a+b){
		cout<<"Perimetro = "<<fixed<<setprecision(1)<<a+b+c<<endl;
	}
	else{
		cout<<"Area = "<<fixed<<setprecision(1)<<0.5 * (a+b)*c<<endl;
	}
	return 0;
}