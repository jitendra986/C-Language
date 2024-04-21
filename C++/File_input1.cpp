#include<iostream>
#include<fstream>

int main()
{
    std::ofstream file("Example.txt"); //Create output filestream to write text to example.txt

    if(file.is_open())              //try to open file to write to it, if successful
    {
        file << "Some text ...\n" ;      //write to file, just like std::cout
        file.close();
    }
    else                        // Handle the case when opening fails
    {
        std::cout << "Can't open file!";
    }
}