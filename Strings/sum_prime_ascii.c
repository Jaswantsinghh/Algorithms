/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>
int prime(int n)
{
    int i,flag=1;
    for (i = 2; i <= sqrt(n); i++) { 
        if (n % i == 0) { 
            flag = 0; 
            break; 
        } 
        if(flag==1)
        {
            return 1;
        }
        else
        {
        return 0;
        } 
    }
}
int stringOperation(char str[21])
{
    int val;
    int sum=0;
    for(int i=0;i<20;i++)
    {
        val=str[i];
        if(prime(val)==1)
        {
            
            sum += val;
        }
    }
    return sum;
}
int main()
{
    char str[21];
    for(int i=0;i<21;i++)
    {
        scanf("%c",&str[i]);
    }
    printf("Sum is %d\n",stringOperation(str));
    return 0;
}
