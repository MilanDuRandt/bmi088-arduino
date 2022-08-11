#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    printf("BMI Calculator \n\n1. Weight in pounds, height in inches \n2. Weight in kilograms, height in meters \n\nChoice: ");
    int iChoice=0;
    scanf("%d",&iChoice);
    while((iChoice!=1) && (iChoice!=2)){
        printf("Invalid choice! Please enter valid choice: ");
        scanf("%d",&iChoice);}
    float BMI =0.0;
    float W =0.0;
    float H =0.0;

    if (iChoice==1){
        printf("\nWeight in pounds?: ");
        scanf("%f",&W);
        printf("\nHeight in inches?: ");
        scanf("%f",&H);
        BMI = (W*703)/(H*H);
        printf("\n\nResult.............. \n\n Weight:\t %g",W);
        printf(" pounds\n Height:\t %g",H);
        printf(" inches\n BMI:\t\t %.1f",BMI);}
    else if (iChoice==2){
        printf("\nWeight in kilograms?: ");
        scanf("%f",&W);
        printf("\nHeight in meters?: ");
        scanf("%f",&H);
        BMI = (W)/(H*H);
        printf("\n\nResult.............. \n\n Weight:\t %g",W);
        printf(" pounds\n Height:\t %g",H);
        printf(" inches\n BMI:\t\t %.1f",BMI);}

    if (BMI>=30){
        printf("\n Status:\t Obese");}
    else if ((BMI<30)&&(BMI>=25)){
        printf("\n Status:\t Overweight");}
    else if ((BMI<25)&&(BMI>=18.5)){
        printf("\n Status:\t Normal");}
    else{
        printf("\n Status:\t Underweight");}
    return 0;
}
