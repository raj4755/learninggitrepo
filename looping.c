// #include<stdio.h>

// int main(){

//     //loops are used to repeat similar part 
//     //of code snippet efficiently

//     int a=0;
//     // printf("Enter a\n");
//     // scanf("%d"n, &a);

//     while(a<=20){

//         if (a>=10){
//             printf("Value of a is %d\n", a);
//         }
//         a++;
//     }


//     return 0;
// }

// #include<stdio.h>

// int main(){

//     int i=5;
//     printf("Value of i++ is %d\n",i++);
//     printf("Value of i is %d\n",i);
//     return 0;
// }

// #include<stdio.h>

// int main(){

//     int i=1,n;


//     printf("Enter n\n");
//     scanf("%d", &n);

//     do {
//         printf("Value of i is %d\n",i);
//         i++;
//     }while (i<=n);
    
//     return 0;
// }

// #include<stdio.h>

// int main(){
    
//     int n;
//     printf("Enter value of n\n");
//     scanf("%d", &n);

//     for(int a=1; a<=n; a++){
//         printf("Value of a is %d\n", a);
//     }
//     return 0;
// }


// #include<stdio.h>

// int main(){
    
//     int n;
//     printf("Enter n\n");
//     scanf("%d", &n);
    

//     for(int i=n; n>0; n--){
//         printf("Value of n is %d\n", n);
//     }
//     return 0;
// }


// #include<stdio.h>

// int main(){

//     int i=0;
//     do
//     {
//         printf("Value of i is %d\n",i);
        
//         if (i==5){
//             break;
//         }
//         i++;
//     } while (i<10);
    
//     return 0;
// }


// #include<stdio.h>

// int main(){

//     int i=0, n=5;
  
        
//     while (i<10){
//         i++;
//         if (i!= n){
//             continue;
//         }
//         else
//         {
//             printf("%d\n",i);
//         }
        
//     }
    
//     return 0;
// }


// #include<stdio.h>

// int main(){

//     int num, table;
//     printf("Enter Number\n");
//     scanf("%d", &num);

//     for (int i = 1; i <= 10; i++)
//     {
//         table = num * i;
//         printf("%d * %d is %d\n",num,i,table);
//     }
    
//     return 0;
// }


// #include<stdio.h>

// int main(){

//     int num = 10, table;
    

//     for (int i = 10; i > 0; i--)
//     {
//         table = num * i;
//         printf("%d * %d is %d\n",num,i,table);
//     }
    
//     return 0;
// }


// #include<stdio.h>

// int main(){

//     int i = 1,sum = 0;

//     while (i <=10)
//     {
//         sum = sum + i;
//         i++;
//     }
//     printf("Sum of First 10 natural number is %d\n", sum);
    
//     return 0;
// }

// #include<stdio.h>

// int main(){

//     int sum = 0;

//     for (int i = 1; i <= 10; i++)
//     {
//         sum = sum + i;
//     }
//     printf("Sum is %d\n", sum);
    
//     return 0;
// }


// #include<stdio.h>

// int main(){

//     int sum = 0, i = 1;

//     do
//     {
//         sum = sum + i;
//         i++;
//     } while (i<=10);

//     printf("Sum is %d\n", sum);
    
//     return 0;
// }


// #include<stdio.h>

// int main(){

//     int fact = 1, num;
//     printf("Enter Number\n");
//     scanf("%d", &num);

//     for (int i = 1; i <= num; i++)
//     {
//         fact = fact * i;
//     }

//     printf("Factorial of %d is %d", num, fact);
    
//     return 0;
// }


// #include<stdio.h>

// int main(){

//     int fact = 1, num, i=1;
//     printf("Enter Number\n");
//     scanf("%d", &num);

//     while (i<=num)
//     {
//         fact = fact * i;
//         i++;
//     }

//     printf("Factorial of %d is %d", num, fact);
    
//     return 0;
// }

// #include<stdio.h>

// int main(){

//     int n, prime = 1;
//     printf("Enter Number\n");
//     scanf("%d", &n);

//     for (int i = 2; i < n; i++)
//     {
//         if (n%i==0)
//         {
//             prime = 0;
//             break;
//         }
        
//     }

//     if (prime == 0 && n!= 2)
//     {
//         printf("%d is Not a Prime Number", n);
//     }
//     else
//     {
//         printf("%d is a Prime Number", n);
//     }
    
    
    
//     return 0;
// }


#

