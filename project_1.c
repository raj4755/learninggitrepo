// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>

// int main(){

//     int number;
//     srand(time(0));
//     number = rand()%100 + 1;
//     printf("Generated number is %d\n", number);

//     int user_input, count = 1;
    
//     do
//     {
//         printf("Enter Your Number : \n");
//         scanf("%d", &user_input);
//         if (user_input>number)
//         {
//             printf("Lower Number Please\n");
//         }

//         else if (user_input<number)
//         {
//             printf("Higher Number Please \n");
//         }
//         else
//         {
//             printf("You Guessed the Correct Number\n");
//             printf("You Took  %d Chances", count);
//             break;
//         }
//         count++;
        
        
//     } while (1);
//     getchar();
//     return 0;
// }