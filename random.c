#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define Count 10e7
#define M 1
#define R 0.5

int p10(int n){
  if(n==0)
    return 1;
  else if(n>0)
    return p10(n-1)*10;
  else
    return -1;
}

int main(){
  unsigned long int i,n=0,j=0;
  double x,y,S;

  srand( (unsigned)time(NULL));
  for(i=0;i<Count+1;i++){
    x =  rand() / (double)RAND_MAX * M;
    y =  rand() / (double)RAND_MAX * M;
    if((x-R)*(x-R)+(y-R)*(y-R) <= R*R) n++;
    if(i == p10(j)){
      S = (double)n/(double)i;
      printf("i: %ld i: 10e%ld ,S: %.10lf ,pi: %.10lf\n",i,j,S,S/(R*R));
      j++;
    }
  }
  return 0;
}
