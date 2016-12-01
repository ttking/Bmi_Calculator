#include<stdio.h>

int main()
{

   char name[20];

   float gewicht;
   float lengte;
   float BMI;



   printf("Hello, please enter your name\n");
   scanf("%s", name);

   printf("Hello, %s , please enter your weight\n", &name);
   scanf("%f", &gewicht);

   printf("Please enter your length\n", &gewicht);
   scanf("%f", &lengte);

   BMI = (gewicht / (lengte * lengte));

   printf("Uw BMI is : %f", BMI);

   if(BMI < 18.5){
    printf(", u heeft ondergewicht\n");
   }
   if(BMI > 18.5 && BMI < 24.9){
    printf(", u heeft een normaal gewicht\n");
   }
   if(BMI > 25 && BMI < 29.9){
    printf(", u heeft overgewicht\n");
   }
   if(BMI > 30 && BMI < 39.9){
    printf(", u heeft obesitas\n");
   }
   if(BMI > 40){
    printf(", u heeft zware obesitas\n");
   }

        //break;
    }




