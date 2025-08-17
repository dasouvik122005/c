#include<stdio.h>
void Namaste();
void Bonjour();
int main() {
    printf("Enter i for indian or f for French : " );
    char x ;
    scanf("%c", &x);
    if(x=='i'){
        Namaste();
    }
    else if(x=='f'){
        Bonjour();
    }
    return 0 ;
}

void Namaste(){
    printf("Namaste\n");
}
void Bonjour(){
    printf("Bonjour\n");
}