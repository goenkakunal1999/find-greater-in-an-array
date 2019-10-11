#include<iostream>
using namespace std;
int main()
{
    int n;//n define the size of array
    cout<<"enter the number from keyboard"<<"\n";
    cin>>n;
    int arr[n];
    for(int k=0;k<n;k++)
    {
    cin>>arr[k]
    }
    for(int i=1;i<n;i++)
    {
        if(arr[0]<arr[i])
        {
            arr[0]=arr[i];
        }
        else
        {
            continue;
        }

    }
    cout<<"greater"<<arr[0];



    return 0;
}
