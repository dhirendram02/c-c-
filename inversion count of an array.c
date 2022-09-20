#include <stdio.h>
 
int inversionCount(int arr[], int n)
{
    int inversionCunt = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j]) {
                inversionCunt++;
            }
        }
    }
    return inversionCunt;
}
 
int main()
{
    int arr[] = { 1, 9, 6, 4, 5 };
    int N = sizeof(arr)/sizeof(arr[0]);
 
    printf(" inversion count  %d", inversionCount(arr, N));
 
    return 0;
}
