#include <iostream>
#include <climits>
using namespace std;


int partition(int a[], int low, int high)
{
    int mid=(low+high)/2;
    int t=a[mid];
    a[mid]=a[low];
    a[low]=t;
    
    int i = low;
    int j = high + 1;
    

    int pivot = a[low];
    do
    {
        do
        {
            i++;
        } while (a[i] < pivot);

        do
        {
            j--;
        } while (a[j] > pivot);

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
    int a[10] = {20, 78, 5, 67, 11, 22, 87, 34, 12, 10};
    quicksort(a, 0, 10);
    for (int i = 0; i < 10; i++)
    {
        cout << " " << a[i];
    }

    return 0;
}