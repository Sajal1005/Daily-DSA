#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cin>>n;
    int data;
    for(int i=0;i<n;i++){
        cin>>data;
        v.push_back(data);
    }
    int m = v[0];
    int i;
    for(i=1;i<n;i++){
        if(v[i]>m){
            m=v[i];
        }else{
            break;
        }
    }
    int mini = v[i];
    i++;
    while(i<n){
        if(v[i]>=mini){
            cout<<"false";
            exit(0);
        }else{
            mini=v[i];
            i++;
        }
    }
    cout<<"true";
    return 0;
}