#include<iostream>
using namespace std;

int main()
{
    int arr1[6]={1,4,6,3,8,12};
    int arr2[6]={5,3,7,1,2,6};

    int arr3[100];
    int a=0;
    int x=0;
    for(int i=0; i<6;i++)
    {
        for (int j=0; j<6; j++)
        {
            if (arr1[i]==arr2[j])
            {
               do
                {
                    arr3[x]=arr1[i];
                    x++;
                    break;
                }
                while(x<100);
                a=1;
            }

        }
    }
     for(int i=0; i<x;i++)
    {
      cout<<arr3[i]<<" ";
    }

    if(a==0)
    {
        cout<<"No common element";
    }

}

