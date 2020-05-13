#include <iostream>
using namespace std;

class A
{
    public:
    int a=10, b=20;
};
class B: public A
{
    public:
    int r;
       r= a+b;
};
class C: public B
{
    public:
    void result()
    {
        cout<<"The addition= "<< c;
    }
}ob1;
 int main()
 {
     ob1.result();
     return 0;
 }
