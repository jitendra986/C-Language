#include<iostream>
using namespace std;
int main()
{
        int num, i, arr[50], j, temp;
        cout<<"\n Enter Total Number of Elements : ";
        cin>>num;
        cout<<"\n Enter "<<num<<" Elements : \n\n";
        for(i=0; i<num; i++)
        {
                cout<<" ";
                cin>>arr[i];
        }
        cout<<"\n\n Sorting Array using Bubble Sort... \n";
        for(i=0; i<(num-1); i++)
        {
                for(j=0; j<(num-i-1); j++)
                {
                        if(arr[j]>arr[j+1])
                        {
                                temp=arr[j];
                                arr[j]=arr[j+1];
                                arr[j+1]=temp;
                        }
                }
        }
        cout<<"\n Sorted Element in Ascending Order : \n";
        for(i=0; i<num; i++)
        {
                cout<<" ";
                cout<<arr[i]<<" ";
        }
        return 0;
}