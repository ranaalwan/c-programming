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

// int main( int argc,char **argv){
// int n,i;
// char *tab[]="\t\t";
// n=(int )strtol(argv[1],'\0',10);

// for ( i = 0; i < n; i++){
//     printf("%s" )
// }

// // }




// #include <stdio.h>
// long fun(int y)
// {
//     int n;
//     long result = 1;

//     for( n = 1 ; n <= y ; n++ )
//         result = result*n;

//     return ( result );
// }
// int main()
// {
//     int x, y, n;
//     printf("Input the number of rows in Pascal's triangle: ");
//     scanf("%d",&y);
//     for ( x = 0 ; x < y ; x++ )
//     {
//         for ( n = 0 ; n <= ( y - x - 2 ) ; n++ )
//             printf(" ");
//         for( n = 0 ;n <= x ; n++ )
//             printf("%ld ",fun(x)/(fun(n)*fun(x-n)));

//         printf("\n");
//     }
//     return 0;
// }

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