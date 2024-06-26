#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number; //

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void Student::set_roll_number(int r)
{
    roll_number = r;
}
void Student::get_roll_number()
{
    cout << "The roll number is: " << roll_number << endl;
}

/*
For a protected members:
                        public derivation   private derivation  protected derivation
1. private members     not Inherited        not Inherited       not Inherited
2. protected members    protected           private             protected
3. public members       public              private             protected
*/

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}

void Exam::get_marks()
{
    cout << " The marks obtained in Physics is: " << physics << endl;
    cout << " The marks obtained in Maths is: " << maths << endl;
}

class Result : public Exam
{
    float percentage;

public:
    void display_results()
    {
        get_roll_number();
        get_marks();
        cout << "Your percentage is= " << (maths + physics) / 2 << "%" << endl;
    }
};
int main()
{

    /**
     If we are inheriting  B from A and C from B: [A-->B-->C]

     1. A is the base class for B and B is base class for C.
     2. A-->B-->C is called Inheritance Path.
    */
    Result jt;
    jt.set_roll_number(186);
    jt.set_marks(94.0, 92.7);
    jt.display_results();

    return 0;
}
