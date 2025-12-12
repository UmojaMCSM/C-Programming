#include <stdio.h>
int main()
{
    //Declare and initialize variables
    int num = 7;
    float amt = 123.45;
    char code = 'A';
    double pi = 3.1415926536;
    long int population_of_greatland = 10000000000;
    char msg[] = "Hi";

    //Print the values of variables
    printf("\n NUM = %d \t AMT = %f \t CODE = %c \n PI = %e \t POPULATION OF GREATLAND = %ld \n MESSAGE = %s", num, amt, code, pi, population_of_greatland, msg);
    return 0;
}
