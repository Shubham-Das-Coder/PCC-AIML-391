#include <stdio.h>
#include <conio.h>
int main()
{
    int arr[100] = {0};
    int i, x, pos, n = 10;
    printf("Enter the number elements you want to enter: ");
    scanf("%d", &n);
    printf("Enter the numbers in the array\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("The original array is\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    printf("Enter the element you want to insert in the array: ");
    scanf("%d", &x);
    printf("Enter the position where you want to insert %d: ", x);
    scanf("%d", &pos);
    n++;
    for (i = n - 1; i >= pos; i--)
        arr[i] = arr[i - 1];
    arr[pos - 1] = x;
    printf("The array after inserting %d at %d is\n", x, pos);
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}