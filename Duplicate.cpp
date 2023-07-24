 #include<bits/stdc++.h>
 using namespace std;
 int main(){
 
      int n;
    cin>>n;
     int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int frq[n+1]={0};
    for(int i=0; i<n; i++){
        frq[a[i]]++;
    }
     bool flag=false;
    for(int i=1; i<=n; i++){
        if(frq[i]>1) flag=true;
        break;
    } 
    if(flag==true) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
     return 0;
 }