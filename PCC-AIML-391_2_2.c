// Write a program to implement bubble sort
#include <stdio.h>
#include <conio.h>
int bubble(int a[], int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("Sorted array is\n");
    for (i = 0; i < n; i++)
        printf("%d\t", a[i]);
}
int main()
{
    int a[100], n, i, j;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    bubble(a, n);
    return 0;
}