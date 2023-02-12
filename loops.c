#include<stdio.h>
#include<math.h>

int swap(int a,int b){
    int temp=b;
    b=a;
    a=temp;
}

int main(){
    
    // NUMBERS FROM 1 to N
    // int n;
    // scanf("%d",&n);
    // for(int i=0;i<=n;i++){
    //     printf("%d\n",i);
    // }

    // NUMBERS FROM N to 1
    // int n;
    // scanf("%d",&n);
    // for(int i=n;i>0;i--){
    //     printf("%d\n",i);
    // }

    // ALPHABETS FROM A to Z
    // for(int i=97;i<=122;i++){
    //     printf("%c\n",i);
    // }

    // SUM OF ALL ODD
    // int n;
    // scanf("%d",&n);
    // int ans=0;
    // for(int i=0;i<=n;i++){
    //     if(i%2!=0){
    //         ans+=i;
    //     }
    // }
    // printf("%d\n",ans);


    // MULTIPLICATION TABLE
    // int n;
    // scanf("%d",&n);
    // for(int i=0;i<=10;i++){
    //     printf("%d * %d = %d\n",n,i,n*i);
    // }

    // count no. of digits of number
    // int n;
    // scanf("%d",&n);
    // int ans=n;
    // int count=0;
    // while(n!=0){
    //     count++;
    //     n=n/10;
    // }
    

    // SUM OF FIRST AND LAST DIGIT
    // int n;
    // scanf("%d",&n);
    // int l = n%10;
    // int r;
    // while(n!=0){
    //     r=n%10;
    //     n=n/10;
    // }
    // printf("%d",l+r);


    // SWAP FIRST AND LAST DIGIT
    int n;
    scanf("%d",&n);
    int arr[100];
    int c = n;
    for(int i = 4 ; i >= 0 ; i--){
        arr[i] = c%10;
        c = c/10;

    }

    int temp = arr[4];
    arr[4] = arr[0];
    arr[0] = temp;
    for(int i = 0 ; i < 5 ; i++){
        printf("%d",arr[i]);
    }
}