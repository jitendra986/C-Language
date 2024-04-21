#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x, y;
    int size = 10;
    char ch = 6;//3
    string message("I Love You, Lea Johana Hausel");
    int print_line = 4; //4

    if (message.length() % 2 != 0)//2
        message += "        \n";//one space only
    for (x = 0; x < size; x++)
    {
        for (y = 0; y <= 4 * size; y++)
        {
            double dist1 = sqrt(pow(x - size, 2) + pow(y - size, 2));
            double dist2 = sqrt(pow(x - size, 2) + pow(y - 3 * size, 2));
            //if (dist1 < size + 5 || dist2 < size + 0.5)
            if (dist1 < size + 0.1 || dist2 < size + 0.1)
            {
                cout << ch;
            }
            else
                cout << " ";//one space only
        }
        cout << "\n";
    }
    for (x = 1; x < 3 * size; x++)//2*
    {
        for (y = 0; y < x; y++)
            cout << " ";//one space only
        for (y = 0; y < 4 * size + 1 - 2 * x; y++)//4, 2
        {
            if (x >= print_line - 1 && x <= print_line + 1)
            {
                int idx = y - (4 * size - 2 * x - message.length()) / 2;//4,2
                if (idx < message.length() && idx >= 0)//0
                {
                    if (x == print_line)
                        cout << message[idx];
                    else
                        cout << " ";//one space only
                }
                else
                    cout << ch;
            }
            else
                cout << ch;
        }
        cout << endl;
    }
    return 0;
}