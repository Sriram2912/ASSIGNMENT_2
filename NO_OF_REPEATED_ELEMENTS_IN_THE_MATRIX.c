/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int r,c,i,j;
    printf("number of row:");
    scanf("%d",&r);
    printf("number of column:");
    scanf("%d",&c);
    int a[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    int count,count1 =0;
    count =0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            
            if(a[i][j]<4)
            {
               count=count1+1;
               count1++;
            }
        }
        
    }
 
   int number,l=0;
   printf("get number:");
   scanf("%d",&number);
   for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            
            if(a[i][j]==number)
            {
                l++;
            }
        }
        
    }
    
    printf("number of elements:");
    int sum;
    sum=count1+l;
    printf("%d",sum);
    return 0;
}
