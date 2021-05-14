#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
typedef struct BoundedArray
{
    int SIZE;
    int *ans_arr;
} boundedArray;

boundedArray *getThreeOrFour(int SIZE, int ar[])
{
    struct BoundedArray ans1;
    int idx = 0;
    int arr[100];
    for (int i = 0; i < SIZE; i++)
    {
        int length = printf("%d\r", ar[i]) - 1;
        if (length >= 3 && length <= 4)
        {
            arr[idx] = ar[i];
            idx++;
        }
    }
    if (idx == 0)
    {
        idx = 1;
        arr[0] = -1;
    }
    ans1.SIZE = idx;
    ans1.ans_arr = arr;
    return &ans1;
}
int main()
{
    int n, idx = 0;
    bool indic = true;
    scanf("%d", &n);
    int arr[n], sizes[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    boundedArray *bArr = getThreeOrFour(n, arr);
    printf("Old Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nNew Array: ");
    for (int i = 0; i < bArr->SIZE; i++)
    {
        printf("%d ", bArr->ans_arr[i]);
    }
    return 0;
}