#include<stdio.h>
int main()
{
    float cp,sp,profit,loss;
     printf("Enter cost price\n",cp);
     scanf("%f",&cp);
      printf("Enter selling  price\n",sp);
     scanf("%f",&sp);
    profit=(sp-cp);
    loss=(cp-sp);
     if (cp<sp )
       printf("you have made a profit of %f",profit);
       else
       {
           (cp>sp);
           printf("you made a loss of%f",loss);
       }
       

    return 0;
}