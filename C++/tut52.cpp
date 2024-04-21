#include<iostream>
using namespace std;

class ShopItem{

    int id;
    float price;

    public:
        void setData(int a, float b){
            id = a;
            price = b;
        }
        void getData()
        {
            cout<<"Code of this item is : "<<id<<endl;
            cout<<"Price of this item is : "<<price<<endl;
        }
};

     //   1 2 3 
     //     ^
      //    |
     //     |
          
int main() {
    
    int size = 3;
    ShopItem *ptr = new ShopItem[size];// here *ptr is storing address of  3 object of class Shop.
    ShopItem *ptrTemp = ptr;
    int p,i;
    float q;
    //1. general store item,
    //2.  veggies item,
    //3. hardware item
    for(i=0; i<size; i++)
    {
        cout<< "Enter Id and Price of item "<<i+1;
        cin>>p>>q;
        //(*ptr).setData(p,q);

        ptr->setData(p,q);
        ptr++;
    }

    for(i=0; i<size; i++)
    {
        cout<< "Item number: "<<i+1<<endl;
        ptrTemp->getData();
        ptrTemp++;
    }

    return 0;
}