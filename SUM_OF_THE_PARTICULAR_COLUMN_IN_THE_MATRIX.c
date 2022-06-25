/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
int main() {
  int r, c,n,k=0;
  printf("Enter rows and columns: \n");
  scanf("%d\n %d", &r, &c);
  int a[r][c];

  // asssigning elements to the matrix
  printf("\nEnter matrix elements:\n");
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    printf("Enter element a%d%d: ", i + 1, j + 1);
    scanf("%d", &a[i][j]);
  }

  // printing the matrix a[][]
  printf("\nEntered matrix: \n");
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    printf("%d  ", a[i][j]);
    if (j == c - 1)
    printf("\n");
}
  printf("Enter the matrix column to be added: ");
  scanf("%d",&n);
  int j=n-1,s=0;
      for(int i=0;i<r;i++)
      {
        s=s+a[i][j];
      }
  printf("The sum of the column: %d",s);

return 0;
}



