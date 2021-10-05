#include <stdio.h>
#include <stdlib.h>

// void rvereseArray(int arr[], int start, int end)
// {
//     if (start >= end)
//         return;

//     int temp = arr[start];
//     arr[start] = arr[end];
//     arr[end] = temp;

//     rvereseArray(arr, start + 1, end - 1);
// }

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int *)malloc(num * sizeof(int));
    for (i = 0; i < num; i++)
    {
        scanf("%d", arr + i);
    }

    for (int i = 0; i < num / 2; ++i)
    {
        int tmp = arr[i];
        arr[i] = arr[num - i - 1];
        arr[num - i - 1] = tmp;
    }

    // rvereseArray(arr, 0, num);
    // int temp, start = 0, end = num;
    // while (start < end)
    // {
    //     temp = arr[start];
    //     arr[start] = arr[end];
    //     arr[end] = temp;
    //     start++;
    //     end--;
    // }

    for (i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
