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
    for(int i=1;i<=10;i++){
        for(int j=3;j<=5;j++){
            // int ans=i*j;
            printf("%d*%d=%d ",j,i,i*j);
        }
        printf("\n");
    }

}