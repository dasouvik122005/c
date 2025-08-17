#include<stdio.h>
// int main(){
//     int marks[3];
//     printf("Enter phy mark: ");
//     scanf("%d",&marks[0]);

//     printf("Enter chem mark: ");
//     scanf("%d",&marks[1]);

//     printf("Enter math mark: ");
//     scanf("%d",&marks[2]);

//     printf("phy = %d , chem = %d , math = %d",marks[0],marks[1],marks[2]);

//     return 0;
// }

// example - write a c program to enter the price of 3 items and print their final price with gst

// int main(){
//     float prices[3];

//     printf("1st item price is :  ");
//     scanf("%f",&prices[0]);

//     printf("2nd item price is :  ");
//     scanf("%f",&prices[1]);

//     printf("3rd item price is :  ");
//     scanf("%f",&prices[2]);

//     printf("1st item price : %f , 2nd item price : %f , 3rd item price : %f " , prices[0]+(0.18*prices[0]) , prices[1]+(0.18*prices[1]) , prices[2]+(0.18*prices[2]));
// }

//pointer arithmatic 


// int main(){
//     int age = 22;
//     int *ptr = &age;
//     printf("ptr=%u\n",ptr);
//     ptr++;  // increase 4 bytes as int size is 4 byte
//     printf("ptr=%u\n",ptr);
//     ptr--;  // decrease 4 bytes as int size is 4 byte
//     printf("ptr=%u\n",ptr);
// }


// int main(){
//     float price = 100.00;
//     float *ptr = &price;
//     printf("ptr=%u\n",ptr);
//     ptr++;  // increase 4 bytes as float size is 4 byte
//     printf("ptr=%u\n",ptr);
//     ptr--;  // decrease 4 bytes as float size is 4 byte
//     printf("ptr=%u\n",ptr);
// }


// int main(){
//     char star = '*' ;
//     char *ptr = &star ;
//     printf("ptr=%u\n",ptr);
//     ptr++;  // increase 1 bytes as char size is 1 byte
//     printf("ptr=%u\n",ptr);
//     ptr--;  // decrease 1 bytes as char size is 1 byte
//     printf("ptr=%u\n",ptr);
// }



// Traverse an array

// int main(){
//     int aadhar[5];

//     //input
//     int *ptr = &aadhar[0];
//     for(int i=0;i<5;i++){
//         printf("%d index : ",i);
//         scanf("%d",&aadhar[i]);
//     }

//     //output
//     for(int i=0;i<5;i++){
//         printf("%d index is %d \n", i , aadhar[i]);
//     }
// }


// Arrays as function argument
void pritnumbers(int arr[], int n);

int main(){
    int arr[]={1,2,3,4,5,6};
    pritnumbers(arr,6);
    return 0;
}
void pritnumbers(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
