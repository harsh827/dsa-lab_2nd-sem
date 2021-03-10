//deletion
#include<stdio.h>
void main()
{
int array[100],pos,i,n;

printf("enter the number of elements in matrix\n");
scanf("%d",&n);

printf("enter %d elements\n",n);

for(i=0;i<n;i++)
  scanf("%d",&array[i]);


printf("enter the element location  to be deleted\n");
scanf("%d",&pos);

if(pos>=n+1)
  printf("deletion not possible\n");

else
  {
   for(i=pos-1;i<n-1;i++)
     array[i]=array[i+1];

   printf("new array\n");

   for(i=0;i<n-1;i++)
    {
    printf(" %d",array[i]);
    }
  }
  getch();
}
