#include<bits/stdc++.h>
using namespace std;
// shallow copy makes the 
// copied class point to same 
// memory location as the one it is 
// copied from, shallow copy is 
// done by default due to 
// automatic creation of 
// dumb copy constructor

class abc{
    public:
    int x;
    int *y;
    // initialisation list
    abc(int _x,int _y):x(_x),y(new  int(_y)){}

    // // by deafault used copy constructor
    // // named:-dumb copy constructor
    // abc(const abc &obj)
    // {
    //     x=obj.x;//b.x=a.x
    //     y=obj.y;//b.y =a.y
    //     // Hence same momory address is stored


    // }

    // but when we copy we need a
    // totaly diffferent obj
    // which is pointing to a different memory address
    // and have the same value in that address
    // as of the obj from which it is copied from but
    // in shallow copy both diff pointers points 
    // to the same momory add 
    // to overcome this prob. we
    // write our own deep copy constructor
    
    abc (const abc &obj)
    {
        x=obj.x;
        y=new int(*obj.y);

    }

    void print()
    {cout<<"x: "<<x<<"\ny: "<<y<<"\nContent of y (*y): "<<*y<<"\n\n\n";}
};

int main()
{
    abc a(1,2);
    cout<<"Printing a\n";
    a.print();

    // abc b(a)
    abc b=a;//call hota hai,COPY CONSTRUCTOR
    cout<<"Printing b\n";
    b.print();

    *b.y=20;
    cout<<"Printing b\n";
    b.print();

    cout<<"Printing a\n";
    a.print();

    return 0;


}