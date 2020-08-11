#include <iostream>

using namespace std;

int partition(int arr[],int start,int end)
{
    int i=start;
    int pivot = arr[start];
    for(int j = start+1;j<=end;j++)
    {
        if(arr[j]<pivot)
        {
            swap(arr[i],arr[j]);
            i++;
        }
    }
    swap(arr[i],arr[end]);
    
    return i;
    
}
void  quickSort(int arr[],int start,int end)
{
    if(start<end)
    {
        int p = partition(arr,start,end);
        quickSort(arr,start,p-1);
        quickSort(arr,p+1,end);
    }
}
int main()
{
    int arr[] = {5,4,3,2,1};
    for(auto n:arr)
        cout<<n<<" ";
    cout<<endl;
    
    quickSort(arr,0,4);
    
    for(auto n:arr)
        cout<<n<<" ";
    return 0;
}
