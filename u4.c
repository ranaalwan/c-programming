/*
write a program "pascal" that capture  from the terminal to disaplay the pascal triangel 
input :
multab
output :


      1
     1  1
    1  2  1 
   1  3  3  1
  1  4  6  4  1 
1  5  10  10  5  1 

(x+y)

*/


#include<stdio.h>
int main()
{
  int n;
  printf("Enter the number of rows: ");
  scanf("%d",&n);
  for(int row=1; row<=n; row++)
  {
    int a=1;

    for(int s=1; s<=40-row; s++)
    printf(" ");

    for(int i=1; i<=row; i++)
    {
      printf("%d ",a);
      a = a * (row-i)/i;
    }

    printf("\n");
  }

  return 0;
}
