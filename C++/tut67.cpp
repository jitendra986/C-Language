#include<iostream>
using namespace std;

float funcAverage(int a, int b){
    float avg = (a+b)/2.0;
    return avg;
}

float funcAverage2(int a, float b){
    float avg = (a+b)/2.0;
    return avg;

}

int main() {
    float a,b;
    a = funcAverage(5,2);
    printf ("The average of these numbers is %.3f\n",a);
    b = funcAverage2(5,2.4);
    printf ("The average of these numbers is %.3f",b);
    return 0;
}