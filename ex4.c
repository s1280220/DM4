#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
int i,a,b,total=0;
  // name part
  char str[8];
  printf("What is your name?");
scanf("%s",str);
  printf("Hello, %s!\n",str);
  
  // coin part
printf("Rolling the dice...\n");

  srand((unsigned)time(NULL));
  a=rand()%6+1;
  b=rand()%6+1;
printf("Die 1: %d\n",a);
printf("Die 2: %d\n",b);
total=a+b;
printf("Total value: %d\n",total);
  
// result part
if(total>7) printf("%s won!\n",str); 
  else printf("%s lost!\n",str);

return 0;
}
