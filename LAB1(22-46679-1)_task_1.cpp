
//bubble sort

#include<iostream>
using namespace std;
int main()
{
    int p,i,k,temp;
    cout<<"How many integers you want to input: ";
    cin>>p;
    int arr[p];
    cout<<"Input the integers: ";
    for(i=0; i<p; i++)
        cin>>arr[i];

    for(i=0; i<p-1; i++)
    {
        for(k=0; k<p-i-1; k++)
        {
            if(arr[k]>arr[k+1])
            {
                temp = arr[k];
                arr[k] = arr[k+1];
                arr[k+1] = temp;
            }
        }
    }
    cout<<"The sorted array: ";
    for(i=0; i<p; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
