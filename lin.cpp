// Recursive C++ program  
// to search x in array 
// #include<bits/stdc++.h> 
#include<iostream>

using namespace std;

// Recursive function to 
// search x in arr[l..r]  
int recSearch(int arr[], int l,
    int r, int x)
{
    if (r < l)
        return -1;
    if (arr[l] == x)
        return l;
    if (arr[r] == x)
        return r;
    return recSearch(arr, l + 1,
        r - 1, x);
}


int main()
{

    cout<<" NAME:  SHIVAM GUGLANI"<<endl<<"ROLLNo.   1816110190"<<endl;

    int arr[100];
    int n;
    cout<<"ENTER THE SIZE OF ARRAY  =>";
    cin>>n;
    for (int i = 0; i < n; i++)
    {

        cout<<"ENTER THE "<<i<<"th  element  =>";
        cin>>arr[i];
    }

    cout<<"THE ARRAY IS :";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    int x;
    cout<<"ENTER THE ELEMENT TO BE FOUND  =>";
    cin>>x;

    int index = recSearch(arr, 0, n - 1, x);
    if (index != -1)
        cout << "Element " << x
        << " is present at index "
        << index;
    else
        cout << "Element" << x
        << " is not present";
    return 0;
}