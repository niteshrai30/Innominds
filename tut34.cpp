// Copy Constructor  in C++;

#include<iostream>
using namespace std;

class Number
{
    int a;

    public:
    Number(){
        a = 0;
    }

    Number(int num)
    {
        a = num;
    }

    Number(Number & Obj)
    {
        cout << "Copy constructor called "<< endl;
        a = Obj.a;
    }
    void display()
    {
        cout << "output is "<< a << endl;
    }
    
};
int main(void)
{
    Number x,y,z(45),z2;

    x.display();
    y.display();
    z.display();

    Number z1(z);   //Copy constructor invoked.
    z1.display();

     z2 = z;       // Copy constructor not called.  
     z2.display();

    Number z3 = z; //Copy constructor invoked.
    z3.display();

    
    return 0;
}
