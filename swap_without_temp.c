// C program to swap 2 variables without a temporary variable. 

#include<stdio.h> 
int swap(int *x, int *y)   // function for swapping for 2 numbers. 
{
  *x=*x+*y;            
  *y=*x-*y;             
  *x=*x-*y;             
}
void main()               //main function for reading and passing parameters for SWAP function. 
{
  int no1,no2;
  printf("\n Enter 2 numbers \n");
  scanf("%d%d", &no1, &no2);
  
  printf("\n The numbers before swapping are: \n A: %d \t B: %d",no1,no2);
  
  swap(&no1,&no2);
  
  printf("\n The numbers after swapping are: \n A: %d \t B: %d",no1,no2);
}
