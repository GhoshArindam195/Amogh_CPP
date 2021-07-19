#include<iostream>
using namespace std;

class Rectangle
{
    int length;
    int breadth;

    public:
        
        Rectangle(int l=0, int b=0) // param constructor
        {
            length=l;
            breadth=b;
        } 

        Rectangle(Rectangle &rect)  //copy
        {
            length=rect.length;
            breadth=rect.breadth; 
        }

        int getLength()
        {
            return length;
        }
        int getBreadth()
        {
            return breadth;
        }
};

int main()
{
    Rectangle r1(10, 5);
    Rectangle r2;
    Rectangle r3(r1);

    cout<<r2.getLength()<<" "<<r2.getBreadth()<<endl;
    cout<<r3.getLength()<<" "<<r3.getBreadth()<<endl;

}