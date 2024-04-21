#include <iostream>

using namespace std;

int main()
{
    /*Loops in C++:
    there are three types of loops  in c++:
            1. For loops in C++
            2. while Loop
            3. do-while Loop
    
    int i = 1;
    cout << i;
    i++;
    

    for (int i = 0; i < 40; i++)
    {
        
        cout << i;
        //i++;
    }

    // Example of Infinite For loops

   for (int i = 1; 34 <= 40; i++)
    {
        
        cout << i<<endl;
        //i++;
    }
    
    // Printing 1 to 40 using while loops

    int i = 1;
    while (i <= 40)
    {
        cout << i << endl;
        i++;
    }
    //Example infine while loop
    int i = 1;
    while (true)
    {
        cout << i << endl;
        i++;
    }

    */
    //Example do-while loop
    int i = 1;

    do
    {
        cout << "Multiplication of 6 *"<<i<<"="<<6*i << endl;
        i++;
    } while (i <= 10); 
    return 0;
}