#include<stdio.h>
int main(){
//     int age=20;
//     int *ptr= &age;// *=value at address   &=address of i
//     int a= *ptr;
//     printf("%d",a);
//     printf("%p\n",&age); 
//     printf("%u\n");
//     printf("%d\n",age); //print value of age
//     printf("%d\n",*ptr); 
//     printf("%p\n",&ptr);
//     printf("%d\n",*(&age));

// }

// Declaring pointers
// int*ptr   int age=22
// char*ptr  char star='*'
// float*ptr  float price=100.00

// Format specifier
// printf("%p",&age);
// printf("%p",ptr);
// printf("%p",&ptr);


// Example
    int x;
    int *ptr;
    ptr=&x;
    *ptr=0;
    printf("x=%d\n",x);
    printf("*ptr=%d\n",*ptr);

    *ptr+=5;
    printf("x=%d\n",x);
    printf("*ptr=%d\n",*ptr);

    (*ptr)++;
    printf("x=%d\n",x);
    printf("*ptr=%d\n",*ptr);
}
