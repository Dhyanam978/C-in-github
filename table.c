
int main()
{
    int num,i;
    printf("Enter any number you want.\n");
    scanf("%d",num);
    for ( i =1; i <=10; i++)
    {
         printf("Multiplication table for %d is as follows",num);
          printf("%d*%d=%d",&num,i,(num*i));
    }
    
       
    
    return 0;
}