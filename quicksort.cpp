#include <iostream>
#include <climits>
using namespace std;

int partition(int a[], int low, int high)
{
    int i = low;
    int j = high + 1;
    int pivot = a[low];
    do
    {
        do
        {
            i++;
        } while (a[i] < a[low]);

        do
        {
            j--;
        } while (a[j] > a[low]);

        if (i < j)
        {
            int temp = a[j];
            a[j] = a[i];
            a[i] = temp;
        }

    } while (i < j);

    int temp1 = a[low];
    a[low] = a[j];
    a[j] = temp1;
    return j;
}
void quicksort(int a[], int low, int high)
{
    int j;
    if (low < high)
    {
        j = partition(a, low, high);
          quicksort(a, low, j - 1);
             quicksort(a, j + 1, high);
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    quicksort(a, 0, n);
    for (int i = 0; i < n; i++)
    {
        cout << " " << a[i];
    }

    return 0;
}
