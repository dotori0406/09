#include <stdio.h>
#include <stdlib.h>

#define N_STUDENT 5

int main(int argc, char *argv[])
{ 
    int i,avarage,sum;
    int grade [N_STUDENT];
    printf("input a 5 scores : ");
    sum=0;
    
    for (i=0;i<N_STUDENT;i++)
    {
      scanf("%d",&grade[i]);
      sum+=grade[i];
      }
    avarage = sum/N_STUDENT;
      
    for (i=0;i<N_STUDENT;i++)
      printf("grade[%d] = %d\n",i,grade[i]);
      
    printf("avarage is %d\n",avarage);
     
     
  
  system("PAUSE");	
  return 0;
}
