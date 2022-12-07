#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    int element, index;
    cin >> element;
    n++;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] > element)
        {
            index = i;
            break;
        }
    }
    for (int i = n; i >= index; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[index] = element;
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
