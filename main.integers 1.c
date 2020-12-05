#include<stdio.h>
main()
{
int square; int x; square=0;
 for(x=2;x<=10;2*x)
 // x take values in {1,2,3,...,10}
 {
 square = square * 2;
 }
 printf(" 1*2,2*2...2*10=%d\n",square);
}
