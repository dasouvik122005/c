#include<stdio.h>

// void printhello(int count);
// int main(){
//     printhello(10);
// }
// // recursive function
// void printhello(int count){
//     if (count == 0){    //base case 
//         return;
//     }
//     printf("Hellow World\n");
//     printhello(count-1);
// }

// // example - sum of n number

// int sum(int n);
// int main(){
//     printf("sum is : %d",sum(10));
// }
// //recursive funcion
// int sum(int n){
//     if(n==1){      //base case
//         return 1;
//     }
//     int sumNum1 = sum (n-1); //sum of 1 to n
//     int sumN = sumNum1+n;
//     return sumN;
// }


// // example - factorial of n

// int factorial(int n);
// int main(){
//     printf("final answer is : %d",factorial(10));
// }
// //recursive funcion
// int factorial(int n){
//     if(n==1){
//         return 1;
//     }
//     int factorialNum1 = factorial (n-1); //sum of 1 to n
//     int factorialN = factorialNum1*n;
//     return factorialN;
// }


// // example - write a function to convert celcious to fahrenheit

// float celctofar(float c);
// int main(){
//     float far = celctofar(37);
//     printf("Temp is in fahrenheit : %f", far);
// }
// //recursive funcion
// float celctofar(float c){
//     float far = c *(9.0/5.0) + 32; 
//     return far;
// }

// example - write a function to calculate percentage of a student from marks in science , math & Sanslrit


// int calcpercentage(int science , int math , int sanskrit);

// int main(){
//     int sci = 98;
//     int math = 98;
//     int sans = 99;

//     printf("percentage is : %d %%",calcpercentage(sci,math,sans));
// }
// //recursive funcion
// int calcpercentage(int science , int math , int sanskrit){
//     return((science+math+sanskrit)/3);
// }


// example- write a function to print n terms of the fibonacci sequence


// int fibonacci(int n);

// int main(){
//     printf("%d",fibonacci(6));

//     return 0;
// }
// //recursive funcion
// int fibonacci(int n){
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return 1;
//     }
//     int fibonacci1 = fibonacci(n-1);
//     int fibonacci2 = fibonacci(n-2);
//     int fibonacci = fibonacci1 + fibonacci2;
//     return fibonacci;
// }