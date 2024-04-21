#include <iostream>
#include<algorithm>
using namespace std;

class Shop{

    int itemId[100];// by default everything is private.
    int itemPrice[100];
    int counter;// it actually count how many item have been already added in above mentioned Array.

    public:
        void initCounter(void){counter =0;}
        /* this initCounter function is going to start counter from zero
        // but since this function is not going to take anything we will pass void in it.
        // initCounter, counter ki value ko zero kar dega. 
        //Har us object ke liye jo ki mai banaunga.*/

        void setPrice(void);
        void displayPrice(void);

};

void Shop:: setPrice(void) 
{
    cout<<"Enter Id of  your item nr"<<counter + 1 <<endl;
    cin>>itemId[counter];

    cout<<"Enter Price of  your item"<<endl;
    cin>>itemPrice[counter];

    counter++;
}

void Shop:: displayPrice(void) 
{
    for(int i =0; i< counter; i++)
    {
          cout<<"The Price of item with Id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
  
    
}

int main()
{
    Shop dukan;
    dukan.initCounter();
    dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice();
    dukan.displayPrice();


    return 0;
}