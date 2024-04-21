#include <iostream>
using namespace std;
/*
student--> Test[Done]
student--> sports[Done]
test --> result[Done]
sports --> result[Done]
 */
class Student
{
protected:
    int roll_no;// roll nr is inheriting in both Test and sports class.

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print_number(void)
    {
        cout << " Your roll no is " << roll_no << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks(void)
    {
        cout << " Your result is here: " << endl
             << " Maths: " << maths << endl
             << " physics: " << physics << endl;
    }
};

class Sports :  public virtual Student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }

    void print_score(void)
    {
        cout << " your PT score is " << score << endl;
    }
};

class Result : public Test, public Sports
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout << " Your total score is: " << total << endl;
    }
};

int main()
{
    Result jt;
    jt.set_number(186);
    jt.set_marks(78.9, 85.6);
    jt.set_score(9);
    jt.display();

    return 0;
}