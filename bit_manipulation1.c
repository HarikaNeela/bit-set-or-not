#include<stdio.h>
int main()
{
    int n,c,i,f=1; 
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Enter at which position");
    scanf("%d",&i);
    while(i--)  //shifting 1,i number of times
    {
        f=f<<1;
    }
    c=n&f; //performing logical and
    if(c==0)
        printf("bit is not set");
    else
        printf("bit is set");
     
    return 0;
}

/*EXAMPLE
  5=   0101
             //1=   0001
       0100   <<2
    ..........
       0100
   ..........
 */  