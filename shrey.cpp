#include <iostream>

using namespace std;

void merge(int *ar, int l, int mid, int u)
{
    int i, j, k, n1, n2;
    n1 = l + mid + 1;
    n2 = u - mid;
    int ar1[n1], ar2[n2];
    for (int i = 0; i < n1; i++)
    {
        ar1[i] = ar[l + i]; //insert the leaf nodes obtained from first half of the mergesort
    }
    for (int i = 0; i < n2; i++)
    {
        ar2[i] = ar[mid + 1 + i]; //insert the leaf nodes obtained from second half of the mergesort
    }
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (ar1[i] < ar2[j])
        {
            ar[k] = ar1[i];
        }
        else
        {
            ar[k] = ar2[j];
        }
        k++;
    }
    while (i < n1)
    {
        ar[k] = ar1[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        ar[k] = ar2[j];
        k++;
        j++;
    }
}

void mergesort(int *ar, int i, int j)
{
    if (i < j)
    {
        int mid = (i + j) / 2;
        mergesort(ar, i, mid);
        mergesort(ar, mid, j);
        merge(ar, i, mid, j);
    }
}

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void display(int *ar, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ar[i];
        if (i < n - 1)
        {
            cout << ",";
        }
    }
    cout << endl;
}

int main()
{
    int i, n;
    cout << "Enter the size of The Array:";
    cin >> n;
    int ar[n];
    cout << "Enter the Array Elements:";
    for (i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    cout << "Array before Sorting:";
    display(ar, n);
    mergesort(ar, 0, n);
    cout << "The Sorted Array:";
    display(ar, n);
    return 0;
}