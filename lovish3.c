
#include <stdio.h>
int main()
{
int p, q;
printf("Enter Size of 1st and 2nd Array: ");
scanf("%d %d", &p, &q);
int x[10], y[10], z[20];
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
int i = 0, j = 0, k = 0;
while (i < p && j < q)
{
if (x[i] < y[j])
{
z[k++] = x[i++];
}
else if (x[i] > y[j])
{
z[k++] = x[i++];
j++;
}
else
{
i++;
j++;
}
}
printf("Array After Difference: \n");
for (int i = 0; i < k; i++)
{
printf("%d ", z[i]);
}
}
