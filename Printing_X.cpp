    #include<bits/stdc++.h>
    using namespace std;
    int main(){

        int n;
        cin>>n;
        for(int i=0; i<n; i++){
            for(int j=0,k=n-1; j<n,k>=0; j++,k--){

                if( i==j && i==k) cout<<"X";
                else  if(i==j)cout<<"\\";
                
                else  if(i==k) cout<<"/";
                else cout<<" ";
            }   
            
            cout<<endl;
        }
        return 0;
    }