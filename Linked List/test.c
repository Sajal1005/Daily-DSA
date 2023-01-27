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
    

    // int n;
    // scanf("%d",&n);
    // int ma=0,mi=9;
    // while(n!=0){
    //     int r=n%10;
    //     if(r>ma){
    //         ma=r;
    //     }
    //     if(r<mi){
    //         mi=r;
    //     }
    //     n=n/10;
    // }
    // printf("%d\n%d",ma,mi);

    // for(int i=0;i<n;i++){
    //     for(int j=n-i-1;j>0;j--){
    //         printf(" ");
    //     }
    //     for(int j=0;j<i+1;j++){
    //         printf("*");
    //     }
    //     for(int j=0;j<i;j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         printf("%d",i+1);
    //     }
    //     printf("\n");
    // }
    // int n1,n2;
    // char c;
    // scanf("%d%d",&n1,&n2);
    // scanf("%c",&c);
    // switch (c)
    // {
    // case '+':
    //     printf("%d",n1+n2);
    //     break;
    // case '-':
    //     printf("%d",n1-n2);
    //     break;
    // case '*':
    //     printf("%d",n1*n2);
    //     break;
    // case '/':
    //     printf("%d",n1/n2);
    //     break;
    // }

    // int n;
    // scanf("%d",&n);
    // int n500=0, n100=0, n50=0, n20=0,n10=0,n5=0,n2=0,n1=0,x=n;
    // if(n>=500){
    //     n500 = n/500;
    //     n=n%500;
    // }
    // if(n>=100){
    //     n100 = n/100;
    //     n=n%100;
    // }
    // if(n>=50){
    //     n50 = n/50;
    //     n=n%50;
    // }
    // if(n>=20){
    //     n20 = n/20;
    //     n=n%20;
    // }
    // if(n>=10){
    //     n10 = n/10;
    //     n=n%10;
    // }
    // if(n>=5){
    //     n5 = n/5;
    //     n=n%5;
    // }
    // if(n>=2){
    //     n2 = n/2;
    //     n=n%2;
    // }
    // if(n>=1){
    //     n1 = n/1;
    //     n=n%1;
    // }
    // printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",n500,n100,n50,n20,n10,n5,n2,n1);
    // float ans=0;
    // if(n<=199){
    //     ans+=(n*1.20);
    // }else if(n>=200 && n<=400){
    //     ans+=(n*1.50);
    // }else if(n>=401 && n<=600){
    //     ans+=(n*1.80);
    // }else if(n>=601){
    //     ans+=(n*2.00);
    // }
    // if(ans>500){
    //     ans+=(.20*ans);
    // }
    // printf("%.2f",ans);

    // int x,y;
    // scanf("%d%d",&x,&y);
    // if(x>0 && y>0){
    //     printf("1st quad");
    // }else if(x<0 && y>0){
    //     printf("2nd quad");
    // }else if(x>0 && y<0){
    //     printf("4th quad");
    // }else if(x<0 && y<0){
    //     printf("3rd quad");
    // }

    // char c;
    // scanf("%c",&c);
    // if((c>='a' && c<='z') || (c>='A' && c<='Z')){
    //     printf("Alphabet");
    // }else if(c>='0' && c<='9'){
    //     printf("Digit");
    // }else{
    //     printf("Special");
    // }

    // int n;
    // scanf("%d",&n);
    // int n500=0,n100=0,n50=0,n20=0,n10=0,n5=0,n2=0,n1=0;
    // if(n>=500){
    //     n500=n/500;
    //     n-=(n500*500);
    // }
    // if(n>=100){
    //     n100=n/100;
    //     n-=(n100*100);
    // }
    // if(n>=50){
    //     n50=n/50;
    //     n-=(n50*50);
    // }if(n>=20){
    //     n20=n/20;
    //     n-=(n20*20);
    // }if(n>=10){
    //     n10=n/10;
    //     n-=(n10*10);
    // }if(n>=5){
    //     n5=n/5;
    //     n-=(n5*5);
    // }if(n>=2){
    //     n2=n/2;
    //     n-=(n2*2);
    // }if(n>=1){
    //     n1=n/1;
    //     n-=(n1*1);
    // }
    // printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",n500,n100,n50,n20,n10,n5,n2,n1);

    // float a,b,c;
    // scanf("%f%f%f",&a,&b,&c);
    // float d ;
    // d= sqrt((b*b) - (4*a*c));
    // float r1 ;
    // r1= (-b + d) / 2*a;
    // float r2;
    // r2 = (-b - d) / 2*a;
    // printf("%f\n%f",r1,r2);

    // int m,y;
    // scanf("%d%d",&m,&y);
    // if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
    //     printf("days are 31");
    // }else if(m==2){
    //     if(y%400==0 || (y%4==0 && y%100!=0)){
    //         printf("days are 29");
    //     }else{
    //         printf("days are 28");
    //     }
    // }else{
    //     printf("days are 30");

    // }

    // int n,y=0,w=0,d=0;
    // scanf("%d",&n);
    // if(n>=365){
    //     y=n/365;
    //     n-=(365*y);
    // }
    // if(n>=7){
    //     w=n/7;
    //     n-=(7*w);
    // }
    // if(n>=1){
    //     d=n/1;
    //     n-=(1*d);
    // }
    // printf("%d\n%d\n%d",y,w,d);

    // printf("%d", 15>10);
    // int a,b,c;
    // scanf("%d%d%d",&a,&b,&c);
    // switch(a>b){
    //     case 1:
    //     switch(a>c){
    //         case 1:
    //         printf("a is greatest");
    //         break;
    //         default:
    //         printf("c is greatest");
    //         break;
    //     }
    //     break;
    // default:
    // switch (b>c)
    // {
    // case 1:
    //     printf("b is greatest");
    //     break;
    
    // default:
    // printf("c is greatest");
    //     break;
    // }
    // }

    // int x,y;
    // scanf("%d%d",&x,&y);
    // switch (x>0)
    // {
    // case 1:
    //     switch (y>0)
    //     {
    //     case 1:
    //         printf("1st quad");
    //         break;
        
    //     default:
    //     printf("4th quad");
    //         break;
    //     }
    //     break;
    
    // default:
    // switch (y>0)
    // {
    // case 1:
    //     printf("2nd quad");
    //     break;
    
    // default:
    // printf("3rd quad");
    //     break;
    // }
    //     break;
    // }

    

}

