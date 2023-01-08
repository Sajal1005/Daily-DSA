#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=2;
    for(int i=0;i<n;i++){
            for(int j=0;j<=2*i-2;j+=2){
                cout<<"-";
            }
            // =(i+1)*i;j<=(2*i)+3;j+=1
            for(int j=0;j<n-i;j++){
                if(i==0){
                    cout<<i+j<<"*";
                }else{
                    cout<<(2*i)+2+j<<"*";
                }
            }
            for(int j=n-i;j>0;j--){
                cout<<"*";
            }
            cout<<endl;
        }
    return 0;
}