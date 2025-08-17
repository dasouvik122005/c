int fibonacci(int n);

int main(){
    printf("%d",fibonacci(6));

    return 0;
}
//recursive funcion
int fibonacci(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int fibonacci1 = fibonacci(n-1);
    int fibonacci2 = fibonacci(n-2);
    int fibonacci = fibonacci1 + fibonacci2;
    return fibonacci;
}