#include<stdio.h>
int main()
{
    int array[3][4]={1,2,3,4,5,6,7,8,9,0,11,12};
    printf("%d\n",array[0][0]);
    printf("%d\n",array[0][1]);
    printf("%d\n",array[0][2]);
    printf("%d\n",array[0][3]);
    printf("%d\n",array[1][0]);
    printf("%d\n",array[1][1]);
    printf("%d\n",array[1][2]);
    printf("%d\n",array[1][3]);
    printf("%d\n",array[2][0]);
    printf("%d\n",array[2][1]);
    printf("%d\n",array[2][2]);
    printf("%d\n",array[2][3]);
    array[2][0]=13;
    printf("%d",array[2][0]);
}
