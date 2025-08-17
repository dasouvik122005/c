#include<stdio.h>
void table(int n);
int main() {
    int n ;
    printf("Enter the number: " );
    scanf("%d", &n);
    table(n); // argument or actual parameter
    return 0 ;
}

int sum (int x, int y){
    return x + y ;
}
void table(int n){ // parameter or formal parameter
    for(int i=0;i<=10;i++){
        printf("%d\n", i*n);
        
    }
}
