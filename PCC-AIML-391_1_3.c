// Write a program to merge two arrays
#include <stdio.h>
#include <conio.h>
int main()
{
    int aSize, bSize, mSize, i, j;
    int a[10], b[10], merge[20];
    printf("Please Enter the First Array Size: ");
    scanf("%d", &aSize);
    printf("Please Enter the First Array Elements:\n");
    for (i = 0; i < aSize; i++)
        scanf("%d", &a[i]);
    printf("Please Enter the Second Array Size: ");
    scanf("%d", &bSize);
    printf("Please Enter the Second Array Elements:\n");
    for (i = 0; i < bSize; i++)
        scanf("%d", &b[i]);
    for (i = 0; i < aSize; i++)
        merge[i] = a[i];
    mSize = aSize + bSize;
    for (i = 0, j = aSize; j < mSize && i < bSize; i++, j++)
        merge[j] = b[i];
    printf("Array Elements After Merging\n");
    for (i = 0; i < mSize; i++)
        printf("%d\t ", merge[i]);
    return 0;
}