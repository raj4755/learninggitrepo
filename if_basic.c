// #include<stdio.h>

// int main(){

//     int length;
//     int breath;

//     printf("Enter the value of Length\n");
//     scanf("%d", &length);

//     printf("Enter the value of Breath\n");
//     scanf("%d", &breath);

//     printf("Area of Rectangle is %d", length * breath);
//     return 0;
// }


// #include<stdio.h>

// int main() {

//     int radius, height;
//     float pi = 3.14;


//     printf("Enter the value of Radius\n");
//     scanf("%d", &radius);

//     printf("Area of Circle is %f\n", pi * radius * radius);

//     printf("Enter the value of Height\n");
//     sca9nf("%d", &height);

//     printf("Volume of Cylinder is %f", pi * radius * radius * height);


//     return 0;
// }


// #include<stdio.h>

// int main(){

//     float celsius = 37;
//    float far = (celsius * 9/5) + 32;
//     printf("Temperature in Fahrenheit is %f\n", far);
//     return 0;
// }

// #include<stdio.h>

// int main(){

//     int principal = 1000, rate = 5, time = 2;
//     float simple_interest;
//     simple_interest = (principal * rate * time )/100;
//     printf("Simple Interest is %f", simple_interest);
//     return 0;
// }


// #include<stdio.h>

// int main()
// {
//     int a,b;
//     printf("Enter the value of a\n");
//     scanf("%d", &a);


//     printf("Enter the value of b\n");
//     scanf("%d", &b);

//     printf("Sum of %d and %d is %d",a,b,a+b);
//     return 0;
// }


// #include<stdio.h>

// int main(){

//     int a,b;
//     printf("Enter a Number\n");
//     scanf("%d",&a);

//     if (a%2 == 0){
//         printf("%d is Even",a);
//     }

//     else
//     {
//         printf("%d is Odd",a);
//     }

//     return 0;
// }

// #include<stdio.h>

// int main(){

//     int age;

//     printf("Enter your age\n");
//     scanf("%d",&age);

//     if (age >= 90){
//         printf("You are above 90, you cannot drive\n");
//     }

//     else
//     {
//         printf("You can drive\n");
//     }

//     if (age=50)
//     {
//         printf("this is for testing the assignment\n");
//     }
//     printf("age is %d",age);

//     return 0;
// }

// #include<stdio.h>

// int main(){

//     int rating;
//     printf("Enter rating\n");
//     scanf("%d",&rating);

//     switch (rating) {
//         case 1:
//         printf("your rating is 1");
//         break;

//         case 2:
//         printf("your rating is 2\n");
//         break;

//         case 3:
//         printf("your rating is 3\n");
//         break;

//         case 4:
//         printf("your rating is 4\n");
//         break;

//         case 5:
//         printf("your rating is 5\n");
//         break;

//         default :
//         printf("invalid Rating\n");
//         break;
//     }
//     return 0;
// }

// #include<stdio.h>

// int main(){

//     int a = 11;
//     if (a=11)
//     {
//         printf("i am 11\n");
//     }
//     else
//     {
//         printf("I am Not 11\n");
//     }

//     return 0;
// }

// #include<stdio.h>

// int main(){

//     int math, phy, chem;
//     float total;
//     printf("Enter Maths Marks\n");
//     scanf("%d",&math);

//     printf("Enter Physics Marks\n");
//     scanf("%d",&phy);

//     printf("Enter Chemistry Marks\n");
//     scanf("%d",&chem);

//     total = (math + phy + chem)/3;

//     if ((total<=40) || math<33 || phy<33 || chem<33)
//     {
//         printf("Your Total Percentage is %f and you are Failed\n",total);
//     }

//     else
//     {
//         printf("Your Total Percentage is %f and you are Passed\n",total);

//     }

//     return 0;
// }

// #include<stdio.h>

// int main(){

//     int income;
//     float tax = 0;

//     printf("Enter Income\n");
//     scanf("%d",&income);

//     if (income>0 && income<250000)
//     {
//         printf("You Did not have to pay any Tax\n");
//     }

//      if (income>=250000 && income<=500000)
//     {
//         tax = tax + 0.05 * (income - 250000);
//     }

//      if (income>=500000 && income<=1000000)
//     {
//         tax = tax + 0.2 * (income - 500000);
//     }

//      if (income>=1000000)
//     {
//         tax = tax + 0.3 * (income - 1000000);
//     }

//     printf("Your net Income Tax is %f\n", tax);

//     return 0;
// }

// #include<stdio.h>

// int main(){

//     int year;

//     printf("Enter Year\n");
//     scanf("%d",&year);

//     if (year % 4 == 0)
//     {
//         if (year % 100 == 0)
//         {
//             if (year % 400 == 0)
//             {
//                 printf("%d is a Leap Year\n", year);
//             }
//             else
//             {
//                 printf("%d is Not a Leap Year\n", year);
//             }

//         }
//         else
//         {
//             printf("%d is Leap Year\n", year);
//         }

//     }

//     else
//     {
//         printf("%d is Not a Leap Year\n",year);
//     }

// return 0;
// }




// #include<stdio.h>

// int main(){
//     // ASCII values 97-122
//     char ch;
//     printf("Enter a Character\n");
//     scanf("%c",&ch);

//     if (ch<=122 && ch>=97){
//         printf("%c is in Lower Case\n", ch);
//     }
//     else
//     {
//         printf("%c is Not in Lower Case\n", ch);
//     }
    
//     return 0;
// }


// #include <stdio.h>

// int main()
// {

//     int num1, num2, num3, num4;

//     printf("Enter Num 1 \n");
//     scanf("%d", &num1);

//     printf("Enter Num 2 \n");
//     scanf("%d", &num2);

//     printf("Enter Num 3 \n");
//     scanf("%d", &num3);

//     printf("Enter Num 4 \n");
//     scanf("%d", &num4); 

//     if (num1>num2 && num1>num3 && num1>num4)
//     printf("%d is Greater",num1);

//     if (num2>num1 && num2>num3 && num2>num4)
//     printf("%d is Greater",num2);

//     if (num3>num1 && num3>num2 && num3>num4)
//     printf("%d is Greater",num3);

//     if (num4>num1 && num4>num2 && num4>num3)
//     printf("%d is Greater",num4);

//     return 0;

// }

// #include<stdio.h>

// int main(){

//     int percentage;

//     printf("Enter your Percentage\n");
//     scanf("%d",&percentage);

//     if (percentage>90 && percentage<100)
//     printf("You got A grade\n");

//     else if (percentage>80 && percentage<=90)
//     printf("You got B grade\n");

//     else if (percentage>60 && percentage<=80)
//     printf("You got C grade\n");

//     else if (percentage>45 && percentage<=60)
//     printf("You got D grade\n");

//     else if (percentage>=33 && percentage<=45)
//     printf("You got E grade\n");

//     else if (percentage>0 && percentage<33)
//     printf("You Failed\n");

//     else
//     printf("Invalid Input\n");
    

//     return 0;
// }


