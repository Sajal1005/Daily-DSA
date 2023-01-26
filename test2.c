#include<stdio.h>
#include<math.h>

int main(){
    // int n;
    // scanf("%d",&n);
    // if(n%400==0){
    //     printf("leap year");
    // }else if(n%100==0){
    //     printf("not leap");
    // }else if(n%4==0){
    //     printf("leap year");
    // }else{
    //     printf("not leap");
    // }

    // int m,p,c;
    // scanf("%d%d%d",&m,&p,&c);
    // if(m>=65 && p>=55 && c>=50 && ((m+p)>=140 || (m+p+c)>=190)){
    //     printf("eligible");
    // }else{
    //     printf("not eligible");
    // }

    // int n;
    // scanf("%d",&n);
    // float ans;
    // if(n<=199){
    //     ans = n*1.20;
    // }else if(n>=200 && n<400){
    //     ans= 1.50*n;
    // }else if(n>=400 && n<600){
    //     ans=1.80*n;
    // }else if(n>600){
    //     ans = n* 2.00;
    // }
    // if(ans<=100){
    //     ans=100;
    // }else if(ans>400){
    //     ans+=(0.15*ans);
    // }
    // printf("%.2f",ans);

    // int n500=0,n100=0,n50=0,n20=0,n10=0,n5=0,n2=0,n1=0;
    // int n;
    // scanf("%d",&n);
    // if(n>=500){
    //     n500= n/500;
    //     n = n%500;
    // }
    // if(n>=100){
    //     n100= n/100;
    //     n = n%100;
    // }if(n>=50){
    //     n50= n/50;
    //     n = n%50;
    // }if(n>=20){
    //     n20= n/20;
    //     n = n%20;
    // }
    // if(n>=10){
    //     n10= n/10;
    //     n = n%10;
    // }if(n>=5){
    //     n5= n/5;
    //     n = n%5;
    // }if(n>=2){
    //     n2= n/2;
    //     n = n%2;
    // }if(n>=1){
    //     n1= n/1;
    //     n = n%1;
    // }
    // printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",n500,n100,n50,n20,n10,n5,n2,n1);

    // int n;
    // scanf("%d",&n);
    // float ans=0;
    // if(n<=100){
    //     ans=0;
    // }else if(n<=200){
    //     ans = (n-100)*(5.0);
    // }else{
    //     ans = 500 + (n-200)*10.0;
    // }
    // printf("%f",ans);

    // int n1,n2,n3;
    // scanf("%d%d%d",&n1,&n2,&n3);
    // int ans =fmax(n1,n2);
    // printf("%d",ans);
    // float ans=0;
    // if(n<=100){
    //     ans=0;
    // }else if(n<=300){
    //     ans = (n-100)*2.00;
    // }else{
    //     ans = 400 + (n-300)*5.00;
    // }
    // printf("%.2f",ans);

    // int n,ans=0;
    // scanf("%d",&n);
    // if(n<=50){
    //     ans = (.5*n);
    // }else if(n<=150){
    //     ans = 25+(n-50)*.75;
    // }else if(n<=250){
    //     ans = 100 +(n-150)*1.20;
    // }else if(n>250){
    //     ans = 220 + (n-250) * 1.5;
    // }
    // ans+=(.2*ans);
    // printf("%d",ans);
    // int a=2,b=1,c=0;
    // c=a+++b;
    // printf("%d%d%d",a,b,c);

    // char abc[100];
    // gets(abc);
    // printf("%s",abc);

    // char c;
    // scanf("%c",&c);
    // int a = c;
    // printf("%d",a);

    // int n;
    
    // scanf("%d",&n);
    // float ans;
    // char c;
    // scanf("%c",&c);
    // if(c=='c'){
    //     ans = n*(9.0/5.0)+32.0;
    //     printf("%.2f F",ans);
    // }else{
    //     ans = (n-32.0)*(5.0/9.0);
    //     printf("%.2f C",ans);
    // }

    // char c;
    // scanf("%c",&c);
    // if((c>='a' && c<='z') || (c>='A' && c<='Z')){
    //     printf("Alphabet");
    // }else if(c>='0' && c<='9'){
    //     printf("Digit");
    // }else{
    //     printf("Special Charcter");
    // }

    // int n;
    // scanf("%d",&n);
    // float ans;
    // if(n<=50){
    //     ans = n*.50;
    // }else if(n<=150){
    //     ans = 25 + (n-50)*.75;
    // }else if(n<=250){
    //     ans = 100 + (n-150)*1.20;
    // }else{
    //     ans = 220 + (n-250)*1.50;
    // }
    // // ans+=(.20*ans);
    // printf("%f",ans);\

    // int n1,n2,n3;
    // scanf("%d%d%d",&n1,&n2,&n3);
    // if(n1==n2 && n1==n3){
    //     printf("Equilateral");
    // }else if(n1==n2 || n2==n3 || n3==n1){
    //     printf("Isosceles");
    // }else{
    //     printf("Scalene");
    // }
        
    // float h,a;
    // scanf("%f%f",&h,&a);
    // int flag=0;
    // float ans = (float) (a/h) * 100.00;
    // char c;
    // scanf("%c",&c);
    // if(c=='Y' || c=='y'){
    //     flag=1;
    // }else if(ans>=75.00){
    //     flag=1;
    // }
    // if(flag){
    //     printf("You have attenadance %.2f%% classes.You are allowed to sit for the exam",ans);
    // }else{
    //     printf("You have attenadance %.2f%% classes.You are not allowed to sit for the exam",ans);
    // } 

    // printf(" root 1 : 5");

    // int n1,n2;
    // scanf("%d%d",&n1,&n2);
    // int sum = n1+n2;
    // int prod = n1*n2;
    // printf("sum = %d\n",sum+prod);
    // printf("product = %d\n",sum*prod);

    // float l,b,area;
    // scanf("%f%f",&l,&b);
    // area = (float)(l*b);
    // printf("%.0f",area);

    
	// int A0_a, A0_b, A1_a, A1_b, A2_a, A2_b, A3_a, A3_b, A4_a, A4_b, A5_a, A5_b, A6_a, A6_b, A7_a, A7_b, A8_a, A8_b;
	
	// A0_a = 1189;
	// A0_b = 841;
	// printf("\nA0 : %dmm x %dmm ", A0_a, A0_b);
	
	// A1_a = A0_b;
	// A1_b = A0_a/2;
	// printf("\nA1 : %dmm x %dmm ", A1_a, A1_b);
	
	// A2_a = A1_b;
	// A2_b = A1_a/2;
	// printf("\nA2 : %dmm x %dmm", A2_a, A2_b);
	
	// A3_a = A2_b;
	// A3_b = A2_a/2;
	// printf("\nA3 : %dmm x %dmm", A3_a, A3_b);
	
	// A4_a = A3_b;
	// A4_b = A3_a/2;
	// printf("\nA4 : %dmm x %dmm", A4_a, A4_b);
	
	// A5_a = A4_b;
	// A5_b = A4_a/2;
	// printf("\nA5 : %dmm x %dmm", A5_a, A5_b);
	
	// A6_a = A5_b;
	// A6_b = A5_a/2;
	// printf("\nA6 : %dmm x %dmm", A6_a, A6_b);
	
	// A7_a = A6_b;
	// A7_b = A6_a/2;
	// printf("\nA7 : %dmm x %dmm", A7_a, A7_b);
	
	// A8_a = A7_b;
	// A8_b = A7_a/2;
	// printf("\nA8 : %dmm x %dmm", A8_a, A8_b);
	
	// getch();
    // return 0;

    // int n=4;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=i;j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // char c;
    // scanf("%c",&c);
    // printf("%d\n",c);

    // float n1,n2,area;
    // scanf("%f%f",&n1,&n2);
    //  area  = n1*n2;
    // printf("%.0f",area);

    // int n1,n2;
    // printf("INPUT : ");
    // scanf("%d",&n1);
    // printf("\tOUTPUT :%d",n1*n1);
    
    // int n;
    // scanf("%d",&n);
    // int ans=0;
    // while(n!=0){
    //     int r= n%10;
    //     if(r==9){r=-1;}
    //     ans*=10;
    //     ans+=(r+2);
    //     n=n/10;
    // }
    // int ans2=0;
    // while(ans!=0){
    //     int r= ans%10;
    //     ans2*=10;
    //     ans2+=(r);
    //     ans=ans/10;
    // }
    // printf("%d",ans);

    // int n=21;
    // n = abs(9-n);
    // printf("%d",n);


    // float a,h;
    // scanf("%f%f",&a,&h);
    // char c;
    // scanf(" %c",&c);
    // float per = (float)(a*100)/h;
    // if(per>=75.00){
    //     printf("Your percentage is %.2f%c. You are allowed to sit in the exam.",per,'%');
    // }else{
    //     if(c=='Y' || c=='y'){
    //         printf("Your percentage is %.2f%c. You are allowed to sit in the exam.",per,'%');
    //     }else{
    //         printf("Your percentage is %.2f%c. You are not allowed to sit in the exam.",per,'%');
    //     }
    // }

    // float a,b,c;
    // scanf("%f%f%f",&a,&b,&c);
    // float d= ((b*b) - 4*a*c);
    // if(d>=0){
    //     float root1 = (-b + sqrt(d))/(2*a);
    //     float root2 = (-b - sqrt(d))/(2*a);
    //     printf("Root1 : %.2f\nRoot2 : %.2f",root1,root2);
    // }

    // printf("Input Marks of 5 Subjects");
    // int a,b,c,d,e;
    // scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    // float per = (a+b+c+d+e);
    // per/=5.0;
    // printf("%f",per);

    // printf("Basic salary of an Employee: ");
    // float n;
    // scanf("%f",&n);
    // if(n<=10000){
    //     float hra = (.20*n);
    //     float da = (.80*n);
    //     n+= hra+da;
    // }else if(n>10000 && n<=20000){
    //     float hra = (.25*n);
    //     float da = (.90*n);
    //     n+= hra+da;
    // }else{
    //     float hra = (float)(.30*n);
    //     float da = (float)(.95*n);
    //     n+= hra+da;
    // }
    // printf("Gross salary = %f",n);

    // int n;
    // scanf("%d",&n);
    // float ans =0;
    // if(n<=50){
    //     ans = n*0.5;
    // }else if(n<=150){
    //     ans = 25 + (n-50)*0.75;
    // }else if(n<=250){
    //     ans = 100 + (n-150)*1.20;
    // }else {
    //     ans = 220 + (n-250)*1.50;
    // }
    // ans+= (.20*ans);
    // printf("Electricity Bill is %.2f",ans);

    // float n1,n2;
    // char c;
    // scanf("%f %c%f",&n1,&c,&n2);
    // if(c=='+'){
    //     printf("%.2f",n1+n2);
    // }else if( c=='-'){
    //     printf("%.2f",n1-n2);
    // }else if(c=='/'){
    //     printf("%.2f",n1/n2);
    // }else if(c=='*'){
    //     printf("%.2f",n1*n2);
    // }

    // int n = 20;
    // // printf("%d",n%10);
    // int y= n/365;
    // n-=(365*y);
    // int w = n/7;
    // n-=(7*w);
    // int d = n/1;
    // printf("%d\n%d\n%d\n",y,w,d);

    // int n;
    // scanf("%d",&n);
    // float ans=0;
    // ans = n+ (.40*n) + (.20*n);
    // printf("%.2f",ans);

    // float l1,l2,g1,g2;
    // scanf("%f%f%f%f",&l1,&l2,&g1,&g2);
    // float D = sin(sin(l1)) * sin(sin(l2)) + cos(cos(g1)) * cos(cos(g2));
    // printf("%f",D);
    // int n1,n2;
    // scanf("%d%d",&n1,&n2);
    // int h =fmax(n1,n2);
    // int l = fmin(n1,n2);
    
    // for(int i=0;i<10;i++){
    //     printf("A%d : %d x %d\n",i,l,h);
    //     int temp =l;
    //     l=h/2;
    //     h = temp;
    // }

    // char c;
    // scanf("%c",&c);
    // if((c>='a' && c<'z') || (c>='A' && c<'Z')){
    //     printf("Alphabet");
    // }else if(c>='0' && c<='9'){
    //     printf("Digit");
    // }else{
    //     printf("Special Char");
    // }

    // int n;
    // scanf("%d",&n);
    // int n500=0,n100=0,n50=0,n20=0,n10=0,n5=0,n2=0,n1=0;
    // if(n>=500){
    //     n500 = n/500;
    //     n-=(n500*500);
    // }
    // if(n>=100){
    //     n100 = n/100;
    //     n-=(n100*100);
    // }
    // if(n>=50){
    //     n50 = n/50;
    //     n-=(n50*50);
    // }
    // printf("%d\n%d\n%d",n500,n100,n50);

    // int p,c,m,b,cmp;
    // scanf("%d%d%d%d%d",&p,&c,&m,&b,&cmp);
    // float per = (p+c+m+b+cmp)/5.0;
    // printf("Percentage  = %.2f\n",per);
    // if(per>=90){
    //     printf("Grade A");
    // }else if(per>=80){
    //     printf("Grade B");
    // }else if(per>=70){
    //     printf("Grade C");
    // }else if(per>=60){
    //     printf("Grade D");
    // }else if(per>=40){
    //     printf("Grade E");
    // }else{
    //     printf("Grade F");
    // }

    
    // float ans =0;
    // if(n<=50){
    //     ans = (.50*n);
    // }else if(n<=150){
    //     ans = 25 + (n-50)*(.75);
    // }else if(n<=250){
    //     ans = 100 + (n-150)*1.20;
    // }else{
    //     ans = 220 + (n-250)*1.50;
    // }
    // ans+=(.20*ans);
    // printf("%.2f",ans);
    // if(n<=10000){
    //     n+= (.20*n) + (.80*n);
    // }else if(n>10000 && n<=20000){
    //     n+= (.25*n)+ (.90*n);
    // }else{
    //     n+=(n*.30) + (.95*n);
    // }
    // printf("Gross salary = %.0f",n);

    // int n;
    // scanf("%d",&n);
    // if(n%400 ==0 || (n%4==0 && n%100!=0)){
    //     printf("Leap Year");
    // }else{
    //     printf("Not Leap Year");
    // }

    // int a,b,c;
    // scanf("%d%d%d",&a,&b,&c);
    // if((a+b+c==180) && a>0 && b>0 && c>0){
    //     printf("Valid");
    // }else{
    //     printf("Not vald");
    // }

    // float a,b,c;
    // scanf("%f%f%f",&a,&b,&c);
    // float d = (b*b) - 4*(a*c);
    // if(d>=0){
    //     float root1 = (-b + (sqrt(d)))/(2*a);
    //     float root2 = (-b - (sqrt(d)))/(2*a);
    //     printf("Root1: %.2f\nRoot2: %.2f",root1,root2);
    // }

    // int cp,sp;
    // printf("Input cost price: ");
    // scanf("%d",&cp);
    // printf("Input selling price: ");
    // scanf("%d",&sp);
    // if(sp>cp){
    //     printf("Profit: %d",sp-cp);
    // }else{
    //     printf("Loss: %d",cp-sp);
    // }

    // float a,h;
    // scanf("%f%f",&h,&a);
    // float per = (a/h)*100.0;
    // char c;
    // scanf(" %c",&c);
    // if(per>=75){
    //     printf("Your percentage is %.2f%c. You are allowed to sit in exam.",per,'%');
    // }else{
    //     if(c=='Y' || c=='y'){
    //     printf("Your percentage is %.2f%c. You are allowed to sit in exam.",per,'%');
    //     }else{
    //                 printf("Your percentage is %.2f%c. You are not allowed to sit in exam.",per,'%');
    //     }
    // }

    // int n1,n2;
    // printf("Enter two integers: ");
    // scanf("%d%d",&n1,&n2);
    // if(n1==n2){
    //     printf("Numbers are equal");
    // }else{
    //     printf("Numbers are not equal");
    // }

    // int n;
    // printf("enter your number :");
    // scanf("%d",&n);
    // if(n%2==0){
    //     printf("Even");
    // }else{
    //     printf("Odd");
    // }

    // int n;
    // printf("Please enter you age :");
    // scanf("%d",&n);
    // if(n>=18){
    //     printf("Congratulation! You are eligble for casting your vote");
    // }else{
    //     printf("You are not eleigible to vote.");
    // }

    // int a,b,c;
    // scanf("%d%d%d",&a,&b,&c);
    // printf("1st Number = %d, 2nd Number = %d, 3rd Number = %d\n",a,b,c);
    // if(a>c && a>b){
    //     printf("The 1st number is the greatest among three" );
    // }else if(b>a && b>c){
    //     printf("The 2nd number is the greatest");
    // }else{
    //     printf("The 3rd number is the greatest");
    // }

    // int a,b;
    // scanf("%d%d",&a,&b);
    // if(a>0 && b>0){
    //     printf("The coordinate point (%d,%d) lies in First quadrant",a,b);
    // }else if(a>0 && b<0){
    //     printf("The coordinate point (%d,%d) lies in Fourth quadrant",a,b);
    // }else if(a<0 && b<0){
    //     printf("The coordinate point (%d,%d) lies in Third quadrant",a,b);
    // }else{
    //     printf("The coordinate point (%d,%d) lies in Second quadrant",a,b);
    // }
    

    // int p,c,m;
    // printf("Input the marks obtained in physics :");
    // scanf("%d",&p);
    // printf("Input the marks obtained in chemistry");
    // scanf("%d",&c);
    // printf("Input the marks obtained in Mathematics :");
    // scanf("%d",&m);
    // printf(" Total marks of Maths,Physics and Chemistry : %d",p+c+m);
    // printf(" Total marks of Mathsand Physics : %d",p+m);
    // if(m>=65 && p>=55 && c>=50 && ((p+c+m)>=190 || (m+p)>=140)){
    //     printf(" The candidate is eleigible.");
    // }else{
    //     printf(" The candidate is not eligible.");
    // }

    // float a,b,c;
    // scanf("%f%f%f",&a,&b,&c);
    // float d = (b*b) - 4*a*c;
    // if(d>0){
    //     printf("Both roots are real and diffrent-2/n");
    //     float root1 = (-b - sqrt(d))/(2*a);
    //     float root2 = (-b + sqrt(d))/(2*a);
    //     printf("First root Root1: %.2f\n",root1);
    //     printf("Second root Root2: %.2f\n",root2);
    // }else if(d==0){
    //     printf("Both roots are equal./n");
    //     float root1 = (-b - sqrt(d))/(2*a);
    //     float root2 = (-b + sqrt(d))/(2*a);
    //     printf("First root Root1: %.2f\n",root1);
    //     printf("Second root Root2: %.2f\n",root2);
    // }else{
    //     printf("Roots are imaginary;\nNo Solution");
    // }

    // int rno;
    // scanf("%d",&rno);
    // printf("Roll No : %d\n",rno);
    // char abc[50] ;
    // gets(abc);
    // printf("Name of Student :%s",abc);

    // int rno,m,c,p;
    // char name[50];
    // printf("Input the Roll Number of the stident :");
    // scanf("%d",&rno);
    // printf("Input the name of the student");
    // scanf("%s",&name);
    // printf("Input the marks of Physics,Chemistry and Computer Application :");
    // scanf("%d%d%d",&p,&c,&m);
    // printf("Roll No : %d",rno);
    // printf("Name of the Student : %s",name);
    // printf("Marks in Physics : %d\nMarks in Chemistry : %d\nMarks in Computer Application : %d\nTotal Marks = %d\n",p,c,m,m+c+p);
    // float per = (m+c+p)/3.0;
    // printf("Percentage = %.2f\n",per);

    // int cust,n;
    // scanf("%d",cust);
    // char name[50];
    // scanf("%s",name);
    // scanf("%d",n);
    // float cost =0;
    // printf("Customer IDNO : %d\nCustomer Name :%s\nunit Consumed :%d\n",cust,name,n);
    // if(n<=199){
    //     cost =1.20;

    // }

    // printf("Press c to convert temperature from Fahrenheit to Celcius\n");
    // printf("Press f to convert temperature from Celcuis to Fahrenheit\n");
    // printf("Enter your choice (c,f): ");
    // char c;
    // scanf(" %c",&c);
    // printf("\nEnter the temperature in Celsius: ");
    // if(c=='c' || c=='C'){

    // }

    // printf("Enter the number = ");
    // int n;
    // scanf("%d",&n);
    // if(n==0){
    //     printf("\n\nEnter number is zero");
    // }else if(n<0){
    //     printf("\n\nEnter number is a negative number");
    // }else{
    //     printf("\n\nEnter number is a positive number");
    // }

    // int n,l;
    // scanf("%d%d",&n,&l);
    // if(l>=n){
    //     printf("%d",n);
    // }else if(l<n){
    //     printf("%d",(n-l)+n);
    // }else{
    //     printf("%d",0);
    // }
    // int v,w;
    // scanf("%d%d",&v,&w);
    // float x = (w-v)/2;
    // printf("%0.f",x);

    // int n,time;
    // scanf("%d",&n);
    // if(n>=0 && n<=2000){
    //     time=25;
    //     printf("Time estimated: %d minutes",time);
    // }else if(n>=2001 && n<=4000){
    //     time=35;
    //     printf("Time estimated: %d minutes",time);
    // }else if(n>4000 && n<=7000){
    //     time=45;
    //     printf("Time estimated: %d minutes",time);
    // }else{
    //     printf("INVALID INPUT");
    // }

    // int n,k,j,m,p;
    // scanf("%d%d%d%d%d",&n,&k,&j,&m,&p);
    // if(m%k==0){
    //     n-=(m/k);
    // }else{
    //     n-=(m/k)+1;
    // }
    // if(p%j==0){
    //     n-=(p/j);
    // }else{
    //     n-=(p/j)+1;
    // }
    // if(k==0 || j==0 ){
    //     printf("INVALID INPUT");
    // }else{
    //     printf("Number of monkeys left on tree: %d",n);
    // }

    // char c;
    // scanf("%c",&c);
    // int n;
    // scanf("%d",&n);
    // // printf("Welcome to CCD\n");
    // // printf("Enjoy your ");
    // if(c=='c'){
    //     if(n==1){
    //         printf("Welcome to CCD\nEnjoy your Espresso Coffee");
    //     }else if(n==2){
    //         printf("Welcome to CCD\nEnjoy your Cappuccino Coffee");
    //     }else if(n==3){
    //         printf("Welcome to CCD\nEnjoy your Latte Coffee");
    //     }else{
    //         printf("INVALID OUTPUT!");
    //     }
    // }else if(c=='t'){

    // }else if(c=='s'){
        
    // }else if(c=='b'){

    // }

    // int k;
    // scanf("%d",&k);
    // if(k>=1 && k<=5){
    //     printf("Number of candies sold : %d",k);
    //     printf("\nNumber of candies available %d",10-k);
    // }else{
    //     printf("Invalid input number of candies left : 10");
    // }

    // int a,b;
    // scanf("%d%d",&a,&b);
    // int l = fmin(a,b);
    // int h = fmax(a,b);
    // for(int i=0;i<9;i++){
    //     printf("A%d : %d x %d\n",i,l,h);
    //     int temp =l;
    //     l=h/2;
    //     h=temp;
    // } 

    // printf("Input marks of five subjects: ");
    // int n1,n2,n3,n4,n5;
    // scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
    // float per = (n1+n2+n3+n4+n5)/5.0;
    // printf("Percentage = %.2f\nGrade ",per);
    // if(per>=90){
    //     printf("A");
    // }else if(per>=80){
    //     printf("B");
    // }else if(per>=70){
    //     printf("C");
    // }else if(per>=60){
    //     printf("D");
    // }else if(per>=40){
    //     printf("E");
    // }else{
    //     printf("F");
    // }

    // float n;
    // scanf("%f",&n);
    // float ans=0;
    // if(n<=50){
    //     ans = (n*0.50);
    // }else if(n<=150){
    //     ans = 25 + (n-50)*0.75;
    // }else if(n<=250){
    //     ans = 100 + (n-150)*1.20;
    // }else if(n>250){
    //     ans = 220 + (n-250)*1.50;
    // }
    // ans+= (.20*ans);
    // printf("%.2f",ans);

    // int w,a;
    // scanf("%d%d",&w,&a);
    // if(((w-a)/w) *100.0 => 75){
    //     printf("Ok");
    // }else{
    //     printf("NO");
    // }

    // unsigned char c=290;
    // printf("%d",c);
    // return 0;
    // char abc[50];
    // scanf("%s",&abc);
    // printf("%c",abc[3]);

    // a=5;
    // printf("%d",a);

    
	// int n;
	// scanf("%d",&n);
	// while(n--){
	//     int a,b,x,y;
	//     scanf("%d%d%d%d",&a,&b,&x,&y);
	//     int power = x*y;
	//     if(power>=(a*b)){
	//         printf("Yes");
	//     }else{
	//         printf("No");
	//     }
	

    // }

    // int m,e,p,c,b,cp;
    // scanf("%d%d%d%d%d%d",&m,&e,&p,&c,&b,&cp);
    // float avg1 = (m+c+cp)/3.0;
    // float avg2 = (p+c+b)/3.0;
    // if(m>80 && (avg1)>80 && avg2>80){
    //     printf("PCM with Computer\nPCM with Biology");

    // }else if(m>80 && avg1>80){
    //     printf("PCM with Computer");
    // }else if(m>80 && avg2>80){
    //     printf("PCM with Biology");
    // }else if(m>80 && avg1<=80 && avg2<=80){
    //     printf("Commerce");
    // }else if(m<=80){
    //     printf("Arts");
    // }

    // int a;
    // int max=-127000,min=127000;
    // for(int i=0;i<4;i++){
    //     scanf("%d",&a);
    //     if(a>max){
    //         max=a;
    //     }
    //     if(a<min){
    //         min=a;
    //     }
    // }
    // printf("Min:%d\nMax:%d",min,max);

    
    
    // if(a>b && a>c && a>d){
    //     max=a;
    // }else if(b>a && b>d && b>c){
    //     max=b;
    // }else if(c>a && c>b && c>d){
    //     max=c;
    // }else{max=d;}
    // if(a<b && a<c && a<d){
    //     min=a;
    // }else if(b<a && b<d && b<c){
    //     min=b;
    // }else if(c>a && c>b && c<d){
    //     min=c;
    // }else{min=d;};
    // printf("Min:%d\nMax:%d",min,max);
        

    // int n;
    // scanf("%d",&n);
    // if(n>=65 && n<91){
    //     printf("%c %c %c %c %c",n-5,n-4,n-3,n-2,n-1);
    // }else if(n>=97 && n<123){
    //     printf("%c %c %c %c %c",n+1,n+2,n+3,n+4,n+5);
    // }else if(n>=48 && n<=57){
    //     if(n%2==0){
    //         printf("even");
    //     }else{
    //         printf("odd");
    //     }
    // }else{
    //     printf("Symbol");
    // }

   


	// int y,w,d;
    // int n;
    // scanf("%d",&n);
    // if(n>=365){
    //     y = n/365;
    //     n-=(365*y);
    // }
    // if(n>=7){
    //     w=n/7;
    //     n-=(w*7);
    // }
    // if(n>=0){
    //     d=n;
    // }
    // printf("%d\n%d\n%d\n",y,w,d);
// int a;
//     if(scanf("%d",&a)){
//         printf("h1");
//     }else{
//         printf("h2");
//     }

    // int p,c,m;
    // scanf("%d%d%d",&p,&c,&m);
    // if(p>=65 && c>=55 && m>=50 && ((p+c+m)>=190 || (m+p)>=140)){
    //     printf("Eligible");
    // }else{
    //     printf("Not Eligible");
    // }

    // int x,y;
    // scanf("%d%d",&x,&y);
    // if(x>0 && y>0){
    //     printf("1st quad");
    // }else if(x<0 && y<0){
    //     printf("3rd quad");
    // }else if(x<0 && y>0){
    //     printf("2nd quad");
    // }else{
    //     printf("4th quad");
    // }

    // int x,y,z;
    // scanf("%d%d%d",&x,&y,&z);
    // if(z==1){
    //     printf("%d",x+y);
    // }else if(z==2){
    //     printf("%d",x-y);
    // }else if(z==3){
    //     printf("%d",x*y);
    // }else {
    //     printf("%d",x/y);
    // }

    // int m,y;
    // scanf("%d%d",&m,&y);
    // if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
    //     printf("Number of days are 31");
    // }else if(m==2){
    //     if(y%400==0 || y%4==0 && y%100!=0){
    //         printf("Number of days are 29");
    //     }else{
    //         printf("Number of days are 28");
    //     }
    // }else{
    //     printf("Number of days are 30");
    // }

    // int n;
    // scanf("%d",&n);
    // float ans=0;
    // if(n<=199){
    //     ans = n*1.20;
    // }else if(n>=200 && n<=400){
    //     ans = n*1.50;
    // }else if(n>=401 && n<=600){
    //     ans = n*1.80;
    // }else{
    //     ans = n*2.00;
    // }
    // if(ans>400){
    //     ans+=(.20*ans);
    // }
    // printf("%.2f",ans);

    // char c;
    // scanf("%c",&c);
    // if((c>='a' && c<='z') || (c>='A' && c<'Z') ){
    //     printf("Alphabet");
    // }else if(c>='0' && c<='9'){
    //     printf("Digit");
    // }else{
    //     printf("Special Character");
    // }

    // int n,y,w,d;
    // scanf("%d",&n);
    // if(n>=365){
    //     y = n/365;
    //     n-=(y*365);
    // }
    // if(n>=7){
    //     w = n/7;
    //     n-=(w*7);
    // }
    // if(n>=1){
    //     d=n/1;
    //     // n-=(d*1);
    // }
    // printf("%d\n%d\n%d",y,w,d);

    // int n,n500=0,n100=0,n50=0,n20=0,n10=0,n5=0,n2=0,n1=0;
    // scanf("%d",&n);
    // if(n>=500){
    //     n500=n/500;
    //     n-=(n500*500);
    // }
    // if(n>=100){
    //     n100=n/100;
    //     n-=(n100*100);
    // }if(n>=50){
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
    // }
    // if(n>=2){
    //     n2=n/2;
    //     n-=(n2*2);
    // }
    // if(n>=1){
    //     n1=n/1;
    //     n-=(n1*1);
    // }
    // printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d",n500,n100,n50,n20,n10,n5,n2,n1);

    // float n;
    // scanf("%f",&n);
    // float hra,da,pf;
    // if(n<=100000){
    //     hra = (0.20*n);
    //     da = (.90*n);
    //     pf= (0.15*n);
    // }else if(n>100000 && n<=500000){
    //     hra = (0.25*n);
    //     da = (.90*n);
    //     pf= (0.20*n);
    // }else{
    //     hra = (0.30*n);
    //     da = (0.90*n);
    //     pf = (0.25*n);
    // // }
    // printf("%.2f\n%.2f\n%.2f\n%.2f\n%.2f\n%.2f",n,hra,da,pf,n+hra+da+pf,n+hra+da);


    // int v,w;
    // scanf("%d%d",&v,&w);
    // int fw = (w-2*v)/2;
    // int tw = v-fw;
    // if(w<2 || w%2!=0 || v>=w){
    //     printf("Invalid Input");
    // }else{
    //     printf("TW=%d FW=%d",tw,fw);
    // }

    // int n,b;
    // scanf("%d%d",&n,&b);
    // if(b>=n){
    //     printf("%d",n);
    // }else{
    //     printf("%d",(n-b)+n);
    // }

    // int a,b;
    // scanf("%d%d",&a,&b);
    // if(a>10*b){
    //     printf("Spam");
    // }else{
    //     printf("Clean");
    // }

    // int n;
    // scanf("%d",&n);
    // if(n>=65 && n<=90){
    //     printf("%c %c %c %c %c",n-5,n-4,n-3,n-2,n-1);
    // }else if(n>=97 && n<=122){
    //     printf("%c %c %c %c %c",n+5,n+4,n+3,n+2,n+1);
    // }else if(n>=48 && n<=57){
    //     if(n%2==0){
    //         printf("Even");
    //     }else{
    //         printf("Odd");
    //     }
    // }else{
    //     printf("Symbol");
    // }

    // int h,a;
    // char c;
    // scanf("%d%d %c",&h,&a,&c);
    // float per = (float)(a/h)*100.0;
    // if(per>=75){
    //     printf("You have attended %.2f%% classes. You are allowed to sit for the exam.",per);
    // }else{
    //     if(c=='Y' || c=='y'){
    //         printf("You have attended %.2f%% classes. You are allowed to sit for the exam.",per);
    //     }else{
    //         printf("You have attended %.2f%% classes. You are not allowed to sit for the exam.",per);
    //     }
    // }

    // int l,b;
    // scanf("%d%d",&l,&b);
    // int p = 2*(l+b);
    // printf("%d",p);

    // int c;
    // scanf("%d",&c);
    // int km=0,m=0;
    // if(c>=100000){
    //     km = c/100000;
    //     c-=(km*100000);
    // }
    // m=c;
    // printf("%d\n%d\n",km,m);

    // int a;
    // scanf("%d",&a);
    // float area = sqrt(3)/4 * a*a;
    // printf("%.2f",area);

    // char c;
    // scanf("%c",&c);
    // if(c=='a' || c=='A' || c=='e' || c=='E' || c=='i' || c=='I' || c=='o' || c=='O' || c=='u' || c=='U'){
    //     printf("Vowel");
    // }else{
    //     printf("Consonant");
    // }

    // int n;
    // scanf("%d",&n);
    // float  ans=0;
    // if(n<=50){
    //     ans = 0.50*n;
    // }else if(n<=150){
    //     ans = 25 + (n-50)*0.75;
    // }else if(n<=250){
    //     ans = 100 + (n-150)*1.20;
    // }else{
    //     ans = 220 +(n-250)*1.50;
    // }
    // ans+=(.20*ans);
    // printf("%.2f",ans);

    // int a,d;
    // char c;
    // scanf("%d %c%d",&a,&c,&d);
    // int ans=0;
    // if(a>=18 && a<30){
    //     if(c=='M'){
    //         ans = 700*d;
    //     }else{
    //         ans = 750*d;
    //     }
    // }else if(a>=30 && a<=40){
    //     if(c=='M'){
    //         ans = 800*d;
    //     }else{
    //         ans = 850*d;
    //     }
    // // }
    // printf("%d",ans);
    // int n;
    // scanf("%d",&n);
    // int ans=0;
    // if(n<=5){
    //     ans = n*2;
    // }else if(n<=)

    int n;
    scanf("%d",&n);
    char c = n;
    if(c>='a' && c<'z'){
        printf("%c %c %c %c %c",n-5,n-4,n-3,n-2,n-1);
    }else if(c>'A' && c<='Z'){
        printf("%c %c %c %c %c",n+1,n+2,n+3,n+4,n+5);
    }else if(c>='0' && c<='9'){
        if(n%2==0){
            printf("Even");
        }else{
            printf("Odd");
        }
    }else{
        printf("Symbol");
    }
}