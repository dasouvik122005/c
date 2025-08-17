#include <stdio.h>
struct car{
    int year_of_manufacturing;
    char first_name_of_the_company;
};
int main() {
    struct car c1;
    c1.year_of_manufacturing=1630;
    c1.first_name_of_the_company='H';
    printf("%d",c1.year_of_manufacturing);
    printf("%c\n",c1.first_name_of_the_company);
    
    struct car c2;
    c2.year_of_manufacturing=1530;
    c2.first_name_of_the_company='G';
    printf("%d",c2.year_of_manufacturing);
    printf("%c\n",c2.first_name_of_the_company);
    
    struct car c3;
    c3.year_of_manufacturing=1630;
    c3.first_name_of_the_company='F';
    printf("%d",c3.year_of_manufacturing);
    printf("%c\n",c3.first_name_of_the_company);
    return 0;
}