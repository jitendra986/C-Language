#include <iostream>
using namespace std;

int main()
{

    int marks[4] = {23, 45, 56, 89};

    int mathMarks[4];
    mathMarks[0] = 2278;
    mathMarks[1] = 738;
    mathMarks[2] = 378;
    mathMarks[3] = 578;

    cout << " These are math marks " << endl;
    cout << mathMarks[0] << endl;
    cout << mathMarks[1] << endl;
    cout << mathMarks[2] << endl;
    cout << mathMarks[3] << endl;

    cout << " These are  marks " << endl;
    marks[2] = 455;
    /*
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    for (int i = 0; i < 4; i++)
    {
        cout<<"The value of marks "<<i+1<<"is "<<marks[i]<<endl;
    }
    

   // Example of while loop
    int i =0;
    while(i<4)
    {
        cout<<"The value of marks "<<i+1<<"is "<<marks[i]<<endl;
        i++;
    }
    

     // Example of Do-while loop
    int i =0;
    
    do{
        cout<<"The value of marks "<<i+1<<"is "<<marks[i]<<endl;
        i++;
    }while(i<4);


    for (int i = 0; i < sizeof(marks); i++)
    {
        cout << "The value of marks " << i + 1 << "is " << *p++ << endl;
        //p++;
    }
    */

    // Pointer and arrays

    int *p = marks;
    //cout << "The value of marks[0] " << *p << endl;
    cout<<marks<<endl;
    cout<<p<<endl;
    cout<<&marks<<endl;
    cout<<(&marks+1)<<endl;
    cout<<*(&marks+1)<<endl;
    /*
    Same address as (&marks + 1), but 
                type of pointer is "int *".
    */
    cout<<*(&marks+1)-marks<<endl;

    //int t = *(&marks+1)-marks;
    int t = sizeof(marks) / sizeof(marks[0]);
    for (int i = 0; i < t; i++)
    {
        cout << "The value of marks " << i + 1 << "is " << *p << endl;
        p++;
    }



    

    return 0;
}