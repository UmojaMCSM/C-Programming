#include <stdio.h>
int main()
{
    int num;
    float amt;
    char code;
    double pi;
    long int population_of_greatland;
    char msg[10];

    printf("\n Enter the value of num : ");
    scanf("%d", &num);
    printf("\n Enter the value of amt : ");
    scanf("%f", &amt);
    printf("\n Enter the value of pi : ");
    scanf("%e", &pi);
    printf("\n Enter the value of population_of_greatland : ");
    scanf("%d", &population_of_greatland);
    printf("\n Enter the value of code : ");
    scanf("%c", &code);
    printf("\n Enter the message : ");
    scanf("%s", &msg);

    printf("\n NUM = %d \n AMT = %f \n PI = %e \n POPULATION_OF_GREATLAND = %ld \n CODE = %c \n MESSAGE = %s", num, amt, code, pi, population_of_greatland, msg);
    return 0;

}
