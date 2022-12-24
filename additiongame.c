#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int a,b;
  int ans;
  int answer;
  int level;
  printf("Choose your level :\n 1) Easy \n 2) Medium \n 3) Hard\n  ");
  scanf("%d",&level);
  switch(level){
    case 1 : 
    
                for (int i=0;;i++){
                srand(time(NULL));
                a = (rand() % (10 - 1 + 1)) + 1;    
                b = (rand() % (10 - 1 + 1)) + 1;
                printf("\n%d + %d = ",a ,b);
                scanf("%d",&answer);
                ans = a+b;
          
              if (ans==answer){
                printf("Correct");
              }
              else {
                printf("Oops Better luck next time !!");
              }
              if (ans!=answer){
                break;
              }
                }
  
  break;
   case 2 : 
    
                for (int i=0;;i++){
                srand(time(NULL));
                a = (rand() % (50 - 1 + 1)) + 10;    
                b = (rand() % (50 - 1 + 1)) + 10;
                printf("\n%d + %d = ",a ,b);
                scanf("%d",&answer);
                ans = a+b;
          
              if (ans==answer){
                printf("Correct");
              }
              else {
                printf("Oops Better luck next time !!");
              }
              if (ans!=answer){
                break;
              }
                }
  
  break;
   case 3 : 
    
                for (int i=0;;i++){
                srand(time(NULL));
                a = (rand() % (70 - 1 + 1)) + 10;    
                b = (rand() % (70 - 1 + 1)) + 10;
                printf("\n%d + %d = ",a ,b);
                scanf("%d",&answer);
                ans = a+b;
          
              if (ans==answer){
                printf("Correct");
              }
              else {
                printf("Oops Better luck next time !!");
              }
            if (ans!=answer){
                break;
              }
           }
  
  break;
}
  

                
    return 0;
}