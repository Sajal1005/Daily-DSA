#include <stdio.h>
#include <math.h>
#include<string.h>


int main(){
    // int n;
    // scanf("%d",&n);
    // int arr[n];
    
    // for(int i=0;i<n;i++){
    //     scanf("%d",&arr[i]);
    // }
    // int num,ans=0;
    // scanf("%d",&num);
    // for(int i=0;i<n;i++){
    //     if(num==arr[i]){
    //         ans++;
    //     }
    // }
    // printf("%d",ans);
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(arr[i]==arr[j]){
    //             arr[j]=1000;
    //         }
    //     }
    // // }
    // for(int i=0;i<n;i++){
        
    //         printf("%d\n",arr[i]);
        
    // }
    // int n1,n2;
    // scanf("%d%d",&n1,&n2);
    // int arr[n1][n2];
    // for(int i=0;i<n1;i++){
    //     for(int j=0;j<n2;j++){
    //         scanf("%d",&arr[i][j]);
    //     }
    // }
    // int m1,m2;
    // scanf("%d%d",&m1,&m2);
    // int arr2[m1][m2];
    // for(int i=0;i<m1;i++){
    //     for(int j=0;j<m2;j++){
    //         scanf("%d",&arr2[i][j]);
    //     }
    // }
    // for(int i=0;i<n1;i++){
    //     int sum=0;
    //     for(int j=0;j<n2;j++){
    //         sum+=arr[i][j];
    //     }
    //     printf("%d\n",sum);
        
    // }


    // for(int i=0;i<n1;i++){
    //     for(int j=0;j<n2;j++){
    //         for(int k=j+1;k<n2;k++){
                
    //         }
    //     }
    // }
    // int n;
    // scanf("%d",&n);
    // int arr[n+2];
    // for(int i=0;i<n;i++){
    //     scanf("%d",&arr[i]);
    // }
    // int in,nu;
    // scanf("%d%d",&in,&nu);
    // for(int i=n-1;i>=in-1;i--){
    //     arr[i+1]=arr[i];
    // }
    // arr[in-1]=nu;
    // for(int i=0;i<n+1;i++){
    //     printf("%d\n",arr[i]);
    // }
    // int n;
    // scanf("%d",&n);
    // int arr[n];
    // int ans=-1;
    // for(int i=0;i<n;i++){
    //     scanf("%d",&arr[i]);
    // }
    // for(int i=0;i<n-1;i++){
    //     for(int j=0;j<n-i-1;j++){
    //         if(arr[j]>arr[j+1]){
    //             int temp=arr[j];
    //             arr[j]=arr[j+1];
    //             arr[j+1]=temp;
    //         }
    //     }
    // }
    // int count=1;
    // for(int i=0;i<n-1;i++){
    //     if(arr[i]==arr[i+1]){
    //         count++;
    //     }else{
    //         // printf("%d\n",count);
    //         if(count==arr[i]){
    //             ans=fmax(ans,arr[i]);
    //         }
    //         count=1;
    //     }
        
    // }
    // if(count==arr[n-1]){
    //             ans=fmax(ans,arr[n-1]);
    //         }
    // printf("%d\n",ans);

    // int n;
    // scanf("%d",&n);
    // int arr[n+1];
    // for(int i=0;i<n;i++){
    //     scanf("%d",&arr[i]);
    // }
    // int ele,pos;
    // scanf("%d%d",&ele,&pos);
    // for(int i=n-1;i>=pos;i--){
    //     arr[i]=arr[i-1];
    // }
    // arr[pos-1]=ele;
    // for(int i=0;i<n+1;i++){
    //     printf("%d",arr[i]);
    // }

    // int n;
    // scanf("%d",&n);
    // int arr[100];
    // int max =-1;
    // for(int i=0;i<n;i++){
    //     scanf("%d",&arr[i]);
    // }
    // for(int i=0;i<n;i++){
    //     int count=0;
    //     for(int j=0;j<n;j++){
    //         if(arr[i]==arr[j]){
    //             count++;
    //         }
    //     }
    //     if(count==arr[i]){
    //         max = fmax(max,arr[i]);
    //     }
    // }
    // printf("%d",max);

    // int n;
    // scanf("%d",&n);
    // int arr[n+1];
    // for(int i=0;i<n;i++){
    //     scanf("%d",&arr[i]);
    // }
    // int pos,ele;
    // scanf("%d%d",&pos,&ele);
    // for(int i=n;i>=pos;i--){
    //     arr[i]=arr[i-1];
    // }
    // arr[pos-1]=ele;
    // for(int i=0;i<n;i++){
    //     printf("%d\n",arr[i]);
    // }

    // for(int i=0;i<n;i++){
    //     int count=0;
    //     for(int j=0;j<n;j++){
    //         if(arr[i]==arr[j]){
    //             count++;
    //         }
    //     }
    //     if(count==1){
    //         printf("%d, ",arr[i]);
    //     }
    // }
    // int freq[1000];
    // for(int i=0;i<n;i++){
    //     freq[arr[i]]=-1;
    // }
    // for(int i=0;i<n;i++){
    //     int count=0;
    //     for(int j=0;j<n;j++){
    //         if(arr[i]==arr[j]){
    //             count++;
    //         }
    //     }
    //     freq[arr[i]]=count;
    // }
    // for(int i=0;i<n;i++){
    //     if(freq!=-1)
    // }

    // char str[1000],a;
    // scanf("%s %c",&str,&a);
    // int count=0;
    // for(int i=0;i<strlen(str);i++){
    //     if(str[i]==a){
    //         count++;
    //     }
    // }
    // printf("%d",count);

    // string s = "abcdef";
    // string t="";
    // while
    // for (int i=s.length();i>0;i++) {
    //     t += s[i];
    // }
    // printf("%s", t);

    // char str[1000];
    // scanf("%s",&str);
    // for(int i=strlen(str)-1;i>=0;i--){
    //     printf("%c",str[i]);
    // }

    // char str1[1000],str2[1000];
    // scanf("%s%s",&str1,&str2);
    // printf("%s %s",str1,str2);

    // char str[100];
    // scanf("%s",&str);
    // int count=0;
    // for(int i=0;i<strlen(str);i++){
    //     if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
    //         continue;
    //     }else{
    //         count++;
    //     }
    // }
    // printf("%d",count);
    

    char str[100];
    gets(str);
    int count=0;
    for(int i=0;i<strlen(str);i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]-=32;
            count++;
        }else if(str[i]>='A' && str[i]<='Z'){
            str[i]+=32;
            count++;
        }
    }
    if(count==0){
        printf("null");
    }else{
        printf("%s",str);
    }
}