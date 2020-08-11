#include <iostream>

using namespace std;

void merge(int arr[],int start,int end,int mid)
{
    int lsize = mid-start+1;
    int rsize = end-mid;
    
    int* lr = new int[lsize];
    int* rr = new int[rsize];
    
    int k = start;
    for(int i=0;i<lsize;i++)
    {
        lr[i] = arr[k++];
    }
    for(int j =0;j<rsize;j++)
    {
        rr[j] = arr[k++];
    }
    
    k = start;
    int i = 0,j = 0;
    
    while(i<lsize && j < rsize)
    {
        if(lr[i] <= rr[j])
        {
            arr[k++] = lr[i++];
        }
        else
        {
            arr[k++] = rr[j++];
        }
    }
    while(i<lsize)
    {
        arr[k++] = lr[i++];
    }
    while(j<rsize)
    {
        arr[k++]= rr[j++];
    }
    
}

void mergeSort(int arr[],int start,int end)
{
    if(start<end)
    {
        int mid = (start+end)/2;
        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1,end);
        merge(arr,start,end,mid);
    }
}
int main()
{
    int arr[] = {5,14,34,51,678,9,87,70,2,55,65,4,32,1};
    for(auto n:arr)
        cout<<n<<" ";
    cout<<endl;
    
    mergeSort(arr,0,13);
    
    for(auto n:arr)
        cout<<n<<" ";
    return 0;
}

/*
5 14 34 51 678 9 87 70 2 55 65 4 32 1
1 2 4 5 9 14 32 34 51 55 65 70 87 678 
*/
