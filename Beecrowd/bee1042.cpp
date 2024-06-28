#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int tem;
    for(int j=0; j<n; j++){
        for(int i=0; i<n; i++){
            if(a[i] > a[j]){
                tem = a[i];
                a[i] = a[j];
                a[j] = tem;
            }
        }
    }
    for(int j=0; j<n; j++){
        cout<<a[j]<<endl;
    }
    cout<<endl;

    cout<<a[0]<<endl<<a[1]<<endl<<a[2]<<endl;

    return 0;
}

