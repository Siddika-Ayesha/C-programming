#include <stdio.h>
int main()
{
    int A[]= {1,2,3,4,5,6,7,8,9,10};
    int n=4;
    int left,right,mid;
    left=0;
    right=sizeof(A)/4;
    printf("%d\n",right);
    mid=left+right/2;
    printf("%d\n",mid);
   while(left<=right)
    {
        if(A[mid]==n)
        {
            printf("Item is found at position");

        }
        else  if(A[mid]<n)
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }
    printf("Item not found\n");
    return 0;
}
