#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high]; // pivot
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {

        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

//quicksort algorithm
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        //partition the array
        int pivot = partition(arr, low, high);

        //sort the sub arrays independently
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}

void displayArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << "\t";
}

int main()
{
    int n1;
    cout << "Enter the size of array" << endl;
    cin >> n1;
    int arr[n1];
    cout << "Enter the  elements of array" << endl;

    for (int i = 0; i < n1; i++)
    {
        cin >> arr[i];
    }

    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Input array" << endl;
    displayArray(arr, n);
    cout << endl;
    quickSort(arr, 0, n - 1);
    cout << "Array sorted with quick sort" << endl;
    displayArray(arr, n);
    return 0;
}
