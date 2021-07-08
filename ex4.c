#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
int i,a,b,total=0;

printf("Rolling the dice...\n");

  srand((unsigned)time(NULL));
  a=rand()%6+1;
  b=rand()%6+1;
printf("Die 1: %d\n",a);
printf("Die 2: %d\n",b);
total=a+b;
printf("Total value: %d\n",total);
  
// result part
if(total>7) printf("You won!\n"); 
  else printf("You lost!\n");

return 0;
}
