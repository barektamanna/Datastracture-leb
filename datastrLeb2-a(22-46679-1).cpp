#include<iostream>
using namespace std;

int main()
{
    int arr1[6]={50,60,70,80,90,100};
    int arr2[8]={1,2,3,4,5,6,7,8};

    int arr3[14];
    int i;
    for(i = 0; i<6; i++)
    {
        arr3[i]=arr1[i];
    }
    for(int j=0; j<8;j++)
    {
        arr3[i]=arr2[j];
        i++;
    }
    for(int j = 11; j>0; j--)
    {
        cout<<arr3[j]<<"\t";
    }

}

