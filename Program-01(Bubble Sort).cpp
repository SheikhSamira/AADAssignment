#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of elements n: ";
    cin>>n;
    int data[n];
    cout<<"\n Enter elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>data[i];
    }
    int pass,i,temp;


    for(pass=1;pass<=n-1;pass++)
    {
        for(i=0;i<=n-pass;i++)
        {
            if(data[i]>data[i+1])
            {
                temp=data[i];
            data [i]= data [i+1];
            data [i+1]=temp;
            }
              }
              cout<<"\n After pass "<<pass<<" : ";
              for(int j=0;j<n;j++)
              {

                cout<< data [j]<<" ";
              }
              cout<<"\n";

    }
    cout<<"\n Final sorted list: ";
    for(i=0;i<n;i++)
    {
        cout<< data [i]<<" ";
    }
    cout<<endl;
}
