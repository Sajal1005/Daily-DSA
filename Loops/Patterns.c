#include<stdio.h>

// 1. For the Outer loop count the no. of lines
// 2. For the Inner loop count the no. of columns
// 3. Print whatever needed in nested

int main(){
    
    int n;
    scanf("%d",&n);
    
    // SQUARE PATTERN

    // ****
    // ****
    // ****
    // ****
    
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }



    // TRIANGLE PATTERN

    // *
    // **
    // ***
    // ****
    // *****
    
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }



    // TRIANGLE WITH NUMBERS

    // 1
    // 12
    // 123
    // 1234
    // 12345

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         printf("%d",j+1);
    //     }
    //     printf("\n");
    // }


    // TRIANGLE WITH NUMBERS

    // 1
    // 22
    // 333
    // 4444
    // 55555

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         printf("%d",i+1);
    //     }
    //     printf("\n");
    // }


    // UPSIDE DOWN TRIANGLE

    // *****
    // ****
    // ***
    // **
    // *

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i;j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }


    // UPSIDE DOWN WITH NUMBERS

    // 12345
    // 1234
    // 123
    // 12
    // 1

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i;j++){
    //         printf("%d",j+1);
    //     }
    //     printf("\n");
    // }


    // PYRAMID 

    //      *
    //     ***
    //    *****
    //   *******
    //  *********

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i;j++){
    //         printf(" ");
    //     }
    //     for(int j=0;j<2*i+1;j++){
    //         printf("*");
    //     }
    //     for(int j=0;j<n-i;j++){
    //         printf(" ");
    //     }
    //     printf("\n");
    // }


    // INVERTED PYRAMID

    // *********
    //  *******
    //   *****
    //    ***
    //     *

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i;j++){
    //         printf(" ");
    //     }
    //     for(int j=0;j<2*n-2*i-1;j++){
    //         printf("*");
    //     }
    //     for(int j=0;j<n;j++){
    //         printf(" ");
    //     }
    //     printf("\n");
    // }


    // DIAMOND
    
    //     *
    //    ***
    //   *****
    //  *******
    // *********
    // *********
    //  *******
    //   *****
    //    ***
    //     *

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i-1;j++){
    //         printf(" ");
    //     }
    //     for(int j=0;j<2*i+1;j++){
    //         printf("*");
    //     }   
    //     for(int j=0;j<n-i-1;j++){
    //         printf(" ");
    //     }
    //     printf("\n");
    // }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i;j++){
    //         printf(" ");
    //     }
    //     for(int j=0;j<2*n-2*i-1;j++){
    //         printf("*");
    //     }
    //     for(int j=0;j<i;j++){
    //         printf(" ");
    //     }
    //     printf("\n");
    // }

    // ARROW

    // *
    // **
    // ***
    // ****
    // *****
    // ****
    // ***
    // **
    // *

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         printf("*");
    //     }
    //     for(int j=0;j<n-i-1;j++){
    //         printf(" ");
    //     }
    //     printf("\n");
    // }
    // for(int i=0;i<n-1;i++){
    //     for(int j=0;j<n-i-1;j++){
    //         printf("*");
    //     }
    //     for(int j=0;j<i+1;j++){
    //         printf(" ");
    //     }
    //     printf("\n");
    // }


    // BINARY 

    // 1
    // 01
    // 101
    // 0101
    // 10101

    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            if((i+j)%2==0){
                printf("%d",1);
            }else{
                printf("%d",0);
            }
        }
            for(int j=0;j<n-i-1;j++){
                printf(" ");
            }
        printf("\n");
    }
}