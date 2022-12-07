#include <stdio.h>
int main()
{
    int p, q;
    printf("Enter Size of Both Array : ");
scanf("%d %d", &p, &q);
    int x[10], y[10];
    printf("Enter Elements of 1st Array: ");
    for (int i = 0; i < p; i++)
    {
        scanf("%d", &x[i]);
    }
    printf("Enter Elements of 2nd Array: ");
    for (int i = 0; i < q; i++)
    {
        scanf("%d", &y[i]);
    }
    int i = 0,j = 0,k = 0;
    int z[20];
    while (i < p && j < q)
    {
        if (x[i] == y[j])
        {
            z[k++] = x[i++];
            j++;
        }
        else if (x[i] < y[j])
        {
            i++;
            }
        else
            j++;
    }
    printf("Array after intersection\n");
    for (int i = 0; i < k; i++)
    {
        printf("%d ", z[i]);
    }
    return 0;
}
