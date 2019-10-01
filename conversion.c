#include<cs50.h>
#include<stdio.h>

int main(void)
{
    float f= get_float("f: ");
int cents= (f*100); 
    if(cents>0)
    {
    printf("%d\n", cents);
    int a= cents/25;
     int b= cents%25;
    printf(" number of 25 coins\n");
    printf("%i\n",a);
    int c= b/10;
     int d= b%10;
     printf(" number of 10 coins\n");
     printf("%i\n",c);
     int e= d/5;
      int h=d%5;
     printf(" number of 5 coins\n");
     printf("%i\n",e);
    int g=h/1; 
     printf(" number of 1 coins\n");
     printf("%i\n",g);
}
}
