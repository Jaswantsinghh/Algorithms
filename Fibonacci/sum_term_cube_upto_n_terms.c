/*Written by Jaswant singh*/
#include<stdio.h>
int fibonacci(int n)
{
    if (n <= 0) 
       return 0; 
  
    int fibo[n+1]; 
    fibo[0] = 0, fibo[1] = 1; 
  
    int sum = fibo[0] + fibo[1]; 
    for (int i=2; i<=n; i++) 
    { 
        fibo[i] = fibo[i-1]+fibo[i-2]; 
        sum += fibo[i]*fibo[i]*fibo[i]; 
    } 
  
    return sum; 
}
int main()
{
  int n=-1;
  while(n>11||n<0)
  {
    printf("Enter the an positive integer less than 10\n");
    scanf("%d",&n);
  }
 printf("sum upto n digits is %d\n",fibonacci(n)); 
  return 0;
}
