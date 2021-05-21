#include <stdio.h>
#include <stdlib.h>

typedef struct BoundedArray
{
    int SIZE;
    int *arr;

} boundedArray;

boundedArray *getArrayFromMatrix(int R, int C, int matrix[][C])
{
    boundedArray *aru;
    aru = (struct BoundedArray*)malloc(sizeof(struct BoundedArray));
    int count = 0;
    int k = 0, l = 0;
    int ans[1000];
    for (int i = R - 1, k; i >= 0; i--, k++)
    {
        for (int j = C - 1, l; j >= 0; j--, l++)
        {
            ans[count] = matrix[i][j];
            count++;
        }
    }
    aru->SIZE = count;
    aru->arr = ans;
    return aru;
}

int main(void)

{
    int R, C;
    scanf("%d%d", &R, &C);
    int matrix[R][C];

    for (int row = 0; row < R; ++row)
    {
        for (int col = 0; col < C; ++col)
        {
            scanf("%d", &matrix[row][col]);
        }
    }

    boundedArray *bArr = getArrayFromMatrix(R, C, matrix);

    printf("Matrix:\n");

    for (int row = 0; row < R; ++row)
    {
        for (int col = 0; col < C; ++col)
        {
            printf("%d ", matrix[row][col]);
        }
        printf("\n");
    }

    printf("Array: ");
    for (int index = 0; index < bArr->SIZE; ++index)
    {
        printf("%d ", bArr->arr[index]);
    }

    return 0;
}