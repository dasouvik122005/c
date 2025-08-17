#include<stdio.h>
// void swap(int a, int b);
// void _swap(int*a, int*b);

// int main(){
//     int x = 3;
//     int y = 5;
//     swap(x,y);
//     printf("x=%d  & y=%d\n", x, y);
//     _swap(&x,&y);
//     printf("x=%d  & y=%d\n", x, y);
// }

// //call by value
// void swap(int a, int b){
//     int t = a;
//     a = b;
//     b = t;
//     printf("a=%d  & b=%d\n", a, b);
// }
// //call by reference
// void _swap(int*a,int*b){
//     int t = *a;
//     *a = *b;
//     *b = t;
//     printf("a=%d  & b=%d\n", *a, *b);
// }

// will the address output be same ?

void printaddress(int n);
void _printaddress(int* n);
int main (){
    int n = 4;
    printf("%p\n",&n);
    printaddress(n);
    _printaddress(&n);
    printf("%p\n",n);
  
}
//call by value
void printaddress(int n) {
    printf("%p\n",&n);
}
//call by referaence
void _printaddress(int* n){
    printf("%p\n",*n);
} 