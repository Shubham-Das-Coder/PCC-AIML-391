// Write a program to implement linear search
#include <stdio.h>
#include <conio.h>
int main()
{
    int key, a[100], n, flag = 0;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    printf("Enter the elements of the array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the key to search\n");
    scanf("%d", &key);
    for (int i = 0; i < n; i++)
    {
        if (key == a[i])
        {
            printf("%d found at position %d", key, i + 1);
            flag++;
            break;
        }
    }
    if (flag == 0)
    {
        printf("%d is not found", key);
    }
    return 0;
}