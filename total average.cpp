#include<iostream> 
using namespace std;

int main() 
{ 
  int a[2][5];double b[2]; 
  int(*pa)[5],i,j,sum; 
  double* p; 
  pa=a; 
  for (i=0; i<8; i++)
  For(j=0;j<5;j++)
 { scanf("%d",* (pa+i)+j); 
        printf("score%d\n",*(*(pa+i)+j));
 }
 Pa=a;p=b; 
  for(i=0;i<8;i++,p++) 
  {
For(j=0,sum=0;j<5;j++) 
    sum+=*(*(pa+i)+j); 
    printf("total score %d", sum); 
    *p=(double)sum/ 5; 
  } 
  for(i=0,p=b;i<8;i++,p++)
 Printf("average grade %f", *p); 

  return 0;
  
}
