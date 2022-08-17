#include <iostream>
using namespace std;
void mergesort(int arr[], int low, int mid, int high)
{
    int a, b;
    a = (mid - low) + 1;
    b = (high - mid);
    int sub1[a], sub2[b];
    for (int i = 0; i < a; i++)
    {
        sub1[i] = arr[low + i];
    }
    for (int i = 0; i < a; i++)
    {
        sub2[i] = arr[mid + 1 + i];
    }
    int q = low;
    int i = 0, j = 0;
    while (i < a && j < b)
    {
        if (sub1[i] <= sub2[j])
        {
            arr[q] = sub1[i];
            i++;
        }
        else
        {
            arr[q] = sub2[j];
            j++;
        }
        q++;
    }
    while (i < a)
    {
        arr[q] = sub1[i];
        i++;
        q++;
    }
    while (j < b)
    {
        arr[q] = sub2[j];
        j++;
        q++;
    }
}
void dividemerge(int arr[], int low, int high)
{
    if (low < high)
    {
        int mid = low + (high - low) / 2;
        dividemerge(arr, low, mid);
        dividemerge(arr, mid + 1, high);
        mergesort(arr, low, mid, high);
    }
}
int main()
{
    int n = 0;
    cout << "Enter Size of Array : ";
    cin >> n;
    int arr[n];
    cout << "Enter Array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    dividemerge(arr, 0, (n - 1));
    cout << "Sorted Array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}