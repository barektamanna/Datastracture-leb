//linear search
#include<iostream>
using namespace std;

int main(){

int a,b;
cout<<"How many integers you want to input: ";
cin>>a;
int arr[a];
cout<<"Input the integers: ";
for(int i=0;i<a;i++ ){

    cin>>arr[i];
}

cout<<"Input the integer you want to search: ";
cin>>b;

for(int i=0;i<a;i++){

    if(arr[i]==b){

        cout<<"Integer found at "<<i+1<<" position.";
        return 0;

    }
}

cout<<"INTEGER NOT FOUND.";
return 0;


