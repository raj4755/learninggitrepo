// #include<stdio.h>
// #include<stdlib.h>

// int main(){

//     int *ptr;
//     int num;
//     printf("Enter Size to Allocate\n");
//     scanf("%d", &num);

//     ptr = (int *) calloc(num , sizeof(int));

//     printf("Memory Allocated\n");

//     for (int i = 0; i < num; i++)
//     {
//         printf("Enter value of Element %d \n", i+1);
//         scanf("%d", &ptr[i]);
//     }

//     for (int i = 0; i < num; i++)
//     {
//         printf("Value of Element %d is %d\n", i+1, ptr[i]);
//     }
    
//     return 0;
// }


// #include<stdio.h>
// #include<stdlib.h>

// int main(){

//     int *ptr;
//     int num;
//     printf("Enter Size to Allocate\n");
//     scanf("%d", &num);

//     ptr = (int *) malloc(num * sizeof(int));
//     if (ptr != NULL){
//     printf("Memory Allocated\n");
//     }
//     for (int i = 0; i < num; i++)
//     {
//         printf("Enter value of Element %d \n", i+1);
//         scanf("%d", &ptr[i]);
//     }

//     for (int i = 0; i < num; i++)
//     {
//         printf("Value of Element %d is %d\n", i+1, ptr[i]);
//     }

//     free(ptr);
//     printf("Memory Freed");
    
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>


// int main(){

//     int *ptr;
//     ptr = (int *) malloc(6 * sizeof(int));
//     if (ptr!=NULL)
//     {
//         printf("Memory Allocated\n");
//     }
       
//     return 0;
// }


// #include<stdio.h>
// #include<stdlib.h>


// int main(){

//     int *ptr;
//     ptr = (int *) malloc(6 * sizeof(int));
//     if (ptr!=NULL)
//     {
//         printf("Memory Allocated\n");
//     }

//     for (int i = 0; i < 6; i++)
//     {
//         printf("Enter Value of Element %d\n", i+1);
//         scanf("%d", &ptr[i]);
//     }
//     for (int i = 0; i < 6; i++)
//     {
//         printf("Value of Element %d is %d\n", i+1, ptr[i]);

//     }
    
    
       
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>


// int main(){

//     int *ptr;
//     ptr = (int *) calloc(6 , sizeof(int));
//     if (ptr!=NULL)
//     {
//         printf("Memory Allocated\n");
//     }

//     for (int i = 0; i < 6; i++)
//     {
//         printf("Enter Value of Element %d\n", i+1);
//         scanf("%d", &ptr[i]);
//     }
//     for (int i = 0; i < 6; i++)
//     {
//         printf("Value of Element %d is %d\n", i+1, ptr[i]);

//     }
    
    
       
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>


// int main(){

//     int *ptr;
//     ptr = (int *) calloc(6 , sizeof(int));
//     if (ptr!=NULL)
//     {
//         printf("Memory Allocated\n");
//     }

//     for (int i = 0; i < 6; i++)
//     {
//         printf("Enter Value of Element %d\n", i+1);
//         scanf("%d", &ptr[i]);
//     }
//     for (int i = 0; i < 6; i++)
//     {
//         printf("Value of Element %d is %d\n", i+1, ptr[i]);

//     }
    
//     ptr = realloc(ptr, 10*sizeof(int));
//     if (ptr!=NULL)
//     {
//         printf("Memory Allocated\n");
//     }

//     for (int i = 0; i < 10; i++)
//     {
//         printf("Enter Value of Element %d\n", i+1);
//         scanf("%d", &ptr[i]);
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         printf("Value of Element %d is %d\n", i+1, ptr[i]);

//     }
    
       
//     return 0;
// }


// #include<stdio.h>
// #include<stdlib.h>

// int main(){

//     int *ptr;
//     ptr = (int *) malloc(10 * sizeof(int));
//     for (int i = 0; i < 10; i++)
//     {
//         ptr[i] = 7 * (i+1);
        
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         printf("7 X %d is %d\n", i+1, ptr[i]);
//     }
//     ptr = realloc(ptr, 15*sizeof(int));
//     for (int i = 0; i < 15; i++)
//     {
//         ptr[i] = 7 * (i+1);
        
//     }
//     for (int i = 0; i < 15; i++)
//     {
//         printf("7 X %d is %d\n", i+1, ptr[i]);
//     }
    
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>


// int main(){

//     int *ptr;
//     ptr = (int *) calloc(5, sizeof(int));
//     for (int i = 0; i < 5; i++)
//     {
//         printf("Enter Value of Element %d\n", i+1);
//         scanf("%d", &ptr[i]);
//     }
        
//     for (int i = 0; i < 5; i++)
//     {
//         printf("Value of Element %d is %d\n", i+1, ptr[i]);
//     }

//     ptr = realloc(ptr, 10*sizeof(int));
//     for (int i = 0; i < 10; i++)
//     {
//         printf("Enter Value of Element %d\n", i+1);
//         scanf("%d", &ptr[i]);

//     }
//     for (int i = 0; i < 10; i++)
//     {
//         printf("Value of Element %d is %d\n", i+1, ptr[i]);
//     }
    
    
//     return 0;
// }