#include<stdio.h>
#include<math.h>

int flag(int n){
    if(n==0 || n==1){
        return 0;
    }else{
        int flag=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if(flag){
        return 0;
    }else{
        return 1;
    }
    }
}

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

    // int n;
    // scanf("%d",&n);
    // int x=n;
    // int ans=0;
    // if(n<0){
    //     printf("false");
    // }else{
    //     while(n!=0){
    //         int r=n%10;
    //         ans*=10;
    //         ans+=r;
    //         n=n/10;
    //     }
    //     if(x==ans){
    //         printf("true");
    //     }else{
    //         printf("false");
    //     }
    // }

    // int n1,n2;
    // scanf("%d%d",&n1,&n2);
    // for(int i=n1;i<=n2;i++){
    //     int ans = flag(i);
    //     if(ans){
    //         printf("%d\n",i);
    //     }
    // }

    // int n1,n2;
    // scanf("%d%d",&n1,&n2);
    // for(int i=n1;i<=n2;i++){
    //     int x=i,y=x,d=0,sum=0;
    //     int p;
    //     while(x!=0){
    //         d++;
    //         x=x/10;
    //     }
    //     while(y!=0){
    //         p=1;
    //         int r=y%10;
    //         for(int j=1;j<=d;j++)
    //         {
    //             p=p*r;
    //         }
    //         y=y/10;
    //         sum+=(p);
    //     }
    //     if(sum==i){
    //         printf("%d\n",i);
    //     }
    // }
    

    int n;
    scanf("%d",&n);
    int ma=0,mi=9;
    while(n!=0){
        int r=n%10;
        if(r>ma){
            ma=r;
        }
        if(r<mi){
            mi=r;
        }
        n=n/10;
    }
    printf("%d\n%d",ma,mi);
    
}