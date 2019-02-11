#include <stdio.h>
int main (void)
{
  int a, b;
  char c;
  scanf ("%d/n", &a);
  scanf ("%d/n", &b);
  scanf ("%d/n", &c);
  if(a>b){
    printf("%d/n", c);
           }
         else(a<b)
              {
                printf("Anton moshet bit gandonom?/n Enter N and Y/n");//Namana shivem
                scanf("%c", &c);
                if(c==Y||c==y)
                {
                  printf ("Anton ne gandon");
                }
else 
printf("You prav Anton ne gandon");
  return 0;
 }
