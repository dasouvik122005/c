#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of cities: ");
    scanf("%d", &n);
    char city [100];
    //int temp;
    float temp;
    for (int i=0; i<n; i++) {
        printf("Enter the name of city %d: ", i+1); 
        scanf("%s", city);
        printf("Enter the temperature of the city %s (in Celsius): ", city); 
        scanf("%f", &temp);
        printf("The temperature is %f C.\n",temp);
        }
        return 0;
}