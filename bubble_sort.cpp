#include<iostream>
using namespace std;
void BubbleSort(int arr[],int n)
{
    for(int i = n-1 ; i >= 0 ; i--){
        bool swapped = false; //already swapped
        for(int j = 0 ; j < i;j++)
        {
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        if(!swapped)
        break;
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i < n ;i++)
    {
        cin >> arr[i];
    
    }
    BubbleSort(arr,n);
    for(int i = 0; i< n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}