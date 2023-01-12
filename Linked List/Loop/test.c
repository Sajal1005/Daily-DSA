#include<stdio.h>
int main()
{
    // char c;
    // scanf("%c",&c);
    // if((c>='a' && c<='z') || (c>='A' && c<='Z')){
    //     printf("it is character");
    // }else if(c>='0' && c<='9'){
    //     printf("%c it is number",c);
    // }else{
    //     printf("%c is a special character",c);
    // }


    // for(int i=1;i<=10;i++){
    //     for(int j=3;j<=5;j++){
    //         // int ans=i*j;
    //         printf("%d*%d=%d ",j,i,i*j);
    //     }
    //     printf("\n");
    // }

    // int c;
    // scanf("%d",&c);
    // int sum=0;
    // int i=1;
    // while(i<=c){
    //     sum+=i;
    //     i++;
    // }
    // printf("%d",sum);

    // int c,ans=1;
    // scanf("%d",&c);
    // for(int i=1;i<=c;i++){
    //     ans*=i;
    // }
    // printf("%d",ans);

    // int a=0,b=1;
    // int n;
    // scanf("%d",&n);
    // if(n==1){
    //     printf(0);
    // }else if(n==2){
    //     printf(1);
    // }
    // for(int i=3;i<=n;i++){
    //     int temp=b;
    //     b+=a;
    //     a=temp;
    // }
    // printf("%d",b);

    //power
    // int b,c,ans=1;
    // scanf("%d%d",&b,&c);
    // for(int i=1;i<=c;i++){
    //     ans*=b;
    // }
    // if(c==0){
    //     ans=1;
    // }
    // printf("%d",ans);

    int n;
    scanf("%d",&n);
    int x=n;
    int ans=0;
    if(n<0){
        printf("false");
    }else{
        while(n!=0){
            int r=n%10;
            ans*=10;
            ans+=r;
            n=n/10;
        }
        if(x==ans){
            printf("true");
        }else{
            printf("false");
        }
    }
    
}