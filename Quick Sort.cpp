
#include<iostream>
using namespace std;
void swap(int a[],int i,int j)
{
    int temp;
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}



int partition(int a[],int l,int r)
{
    int pivot=a[r];
    int i=l-1;
    int j;
    for(j=l;j<r;j++)
    {
        if(a[j]<pivot)
        {
            i++;
            swap(a,i,j);
        }
    }

    swap(a,i+1,r);
    return i+1;
}
void quickSort(int a[],int l,int r)
{
    if(l<r){
    int pi=partition(a,l,r);
    quickSort(a,l,pi-1);
    quickSort(a,pi+1,r);
    }
}
int main()
{
      int n;
    cout<<"Enter number of elements: ";
    cin>>n;

    int a[n];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    quickSort(a,0,n-1);

    cout<<"After sorting: ";

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
