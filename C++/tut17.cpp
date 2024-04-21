#include <iostream>

using namespace std;

inline int product(int a, int b)
{
    // if one is using inline then it is not recommended to make static variable
     return a * b;
}


// int product(int a, int b)
// {
//     static int c=0; // This executes only once.
//     c = c+1;//Next time this function is run, the value of c will be retained.

//     return a*b+c;
// }

/*
never use inline function in recursion.
*/

float moneyReceived(int currentMoney, float factor=1.04) 
{
    return currentMoney*factor;
}

int main()
{
    int a, b;

    // cout << "Enter the value of a and b ";
    // cin >> a >> b;

    // cout << "The product of a and b is " << product(a, b) << endl;

    int money = 100000;
    cout<<"If you have "<<money<<" Rs in your bank account, you will receive "<<moneyReceived(money)<<" Rs after 1 year"<<endl;
    cout<<"For VIP: If you have "<<money<<" Rs in your bank account, you will receive "<<moneyReceived(money,1.10)<<" Rs after 1 year";


    return 0;
}