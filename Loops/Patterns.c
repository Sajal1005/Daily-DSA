#include<stdio.h>
#include<math.h>

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

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         if((i+j)%2==0){
    //             printf("%d",1);
    //         }else{
    //             printf("%d",0);
    //         }
    //     }
    //         for(int j=0;j<n-i-1;j++){
    //             printf(" ");
    //         }
    //     printf("\n");
    // }


    // NUMBER + 2 TRIANGLES

    // 1       1
    // 12     21
    // 123   321
    // 1234 4321
    // 1234554321

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         printf("%d",j+1);
    //     }
    //     for(int j=0;j<n+2-2*i;j++){
    //         printf(" ");
    //     }
    //     for(int j=0;j<i+1;j++){
    //         printf("%d",i+1-j);
    //     }
    //     printf("\n");
    // }


    // NUMBER PATTERN

    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10
    // 11 12 13 14 15

    // int k=1;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         printf("%d ",k);
    //         k++;
    //     }
    //     printf("\n");
    // }



    // ALPABETICAL TRIANGLE

    // A
    // AB
    // ABC
    // ABCD
    // ABCDE

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         printf("%c",j+65);
    //     }
    //     printf("\n");
    // }



    // ALPHABET DOWN TRIANGLE
    
    // ABCDE
    // ABCD
    // ABC
    // AB
    // A
    
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i;j++){
    //         printf("%c",65+j);
    //     }
    //     printf("\n");
    // }

    // ALPHA TRIANGLE 

    // A
    // BB
    // CCC
    // DDDD
    // EEEEE
    
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         printf("%c",i+65);
    //     }
    //     printf("\n");
    // }


    // ALPHA PYRAMID

    //    A
    //   ABA
    //  ABCBA
    // ABCDCBA

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i-1;j++){
    //         printf(" ");
    //     }
    //     for(int j=0;j<i+1;j++){
    //         printf("%c",65+j);
    //     }
    //     for(int j=0;j<i;j++){
    //         printf("%c",64+i-j);
    //     }
    //     printf("\n");
    // }


    // ALPHA REVERSE TRIANGLE

    // E
    // D E
    // C D E
    // B C D E
    // A B C D E

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         printf("%c ",64+n-i+j);
    //     }
    //     printf("\n");
    // }


    //HOLLOW DIAMOND

    // **********
    // ****  ****
    // ***    ***
    // **      **
    // *        *
    // *        *
    // **      **
    // ***    ***
    // ****  ****
    // **********

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i;j++){
    //         printf("*");
    //     }
    //     for(int j=0;j<2*i;j++){
    //         printf(" ");
    //     }
    //     for(int j=0;j<n-i;j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         printf("*");
    //     }
    //     for(int j=0;j<2*n-2*i-2;j++){
    //         printf(" ");
    //     }
    //     for(int j=0;j<i+1;j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }



    // BUTTERFLY

    // *        *
    // **      **
    // ***    ***
    // ****  ****
    // **********
    // ****  ****
    // ***    ***
    // **      **
    // *        *
    int z=2*n-2;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            printf("*");
        }
        for(int j=0;j<z;j++){
            printf(" ");
        }
        z-=2;
        for(int j=0;j<i+1;j++){
            printf("*");
        }
        printf("\n");
    }
    z=2;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            printf("*");
        }
        for(int j=0;j<z;j++){
            printf(" ");
        }
        z+=2;
        for(int j=0;j<n-i-1;j++){
            printf("*");
        }
        printf("\n");
    }



    // HOLLOW SQUARE

    // *****
    // *   *
    // *   *
    // *   *
    // *****

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         if(i==0 || i==n-1 || j==0 || j==n-1){
    //             printf("*");
    //         }else{
    //             printf(" ");
    //         }
    //     }
    //     printf("\n");
    // }



    // MATRIX QUESTION
    // for(int i=0;i<2*n-1;i++){
    //     for(int j=0;j<2*n-1;j++){
    //         int top=i;
    //         int left=j;
    //         int right = (2*n)-2-j;
    //         int bottom = (2*n)-2-i;
    //         printf("%d",(n-(fmin(fmin(top,bottom),fmin(right,left)))));
    //     }
    //     printf("\n");
    // }
}