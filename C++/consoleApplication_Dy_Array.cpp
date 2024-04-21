#include<iostream>

using namespace std;

int main()
{
    int size ;
    cout<< "size: ";
    cin>>size;


    int* myArray = new int[size];
    // the address of the first element of that array is stored in this my array pointer

    for(int i =0; i<size; i++)
    {
        cout<<"Array["<<i+1<<"] ";
        cin>>myArray[i];
    }

    for(int i =0; i<size; i++)
    {
        
        //cout<<myArray[i]<<" ";
        cout<<*(myArray+i)<<" ";
    }

    delete[] myArray;
    myArray = NULL;
    /*
    because we dont want some accidentel crashes or problems in our program 
    by having this array pointing to memory locations which are not ours anymore. it is good practice to say
    that our array is now equal to null. which means that it's  not pointing to anything

    */
    system("pause>0");
}