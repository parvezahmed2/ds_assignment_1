#include<bits/stdc++.h>
using namespace std;
 
    
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int flag=0;
    for(int i=0; i<n-1; i++){
        if(a[i+1]==a[i]) flag=1;
    }
    if(flag==1) cout<<"YES"<<endl; 
    else cout<<"NO"<<endl;
     

 
    return 0;
} 