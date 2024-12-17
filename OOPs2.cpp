// Four pillars of oops
// Encapsulation
// Inheritance
// Poly morphism'
// Abstraction

#include<bits/stdc++.h>
#include <iostream>
using namespace std;

// 4 pillars of oops
// Encapsulation
// Inheritance
// Polymorphism
//  Abstraction


//Encapsulation
// class animal{
//     private:
//     int age;
//     int weight;

//     public:
//     void eat()
//     {
//         cout<<"Eating"<<endl;
//     }

//     int getage()//gives the value on calling
//     {
//         return this->age;
//     }
//     void setage(int age)//sets the value even in pvt.
//     {
//         this->age=age;
//     }
//     ]]

// };


// //Inheritance
// //Super class->sub class
// // class child: (mode-of-inh)Parent
// class Animal
// {
//     public:
//     int age;
//     int weight;
    
//     void eat()
//     {
//         cout<<"Eating"<<"\n";

//     }

// };

// class Dog :public Animal{


// };
// int main()
// {
//     Dog d1;
//     d1.eat();
// }

// Types of inheritance
// //Singl
// //Multiple
// //Multi level  
// //hierarcical
// //Hybrid

// // SINGLE Level inheritance

// class car{
//     public:
//     string name;
//     int weight;
//     int age;
//     void speedup()
//     {
//         cout<<"Speeding up"<<"\n";

//     }
//     void breakmarro()
//     {
//         cout<<"Break Mardi"<<"\n";
//     }
// };
// class Scorpio: public car{

// };
// int main()
// {
//     Scorpio s;
//     s.speedup();
// }



// // //Multi level
// class fruit
// {
//     public:
//     string name;
// };
// class mango: public fruit{
//     public:
//     int weight;

// };
// class alphanso:public mango{
//     public:
//     int sugar;
// };

// int main()
// {
//     alphanso a;
//     cout<<a.name<<" "<<a.weight<<" "<<a.sugar<<"\n";

// }

// // // // Multiple

// class a{
//     public:
//     int physics;
//     int chemistry;
// };

// class b{
//     public:
//     int chemistry;
// };
// class c:public a,public b{
//     public:
//     int maths;  
// };

// int main()
// {
//     c obj;
//     cout<<obj.physics<<" "<<obj.a::chemistry<<" "<<obj.b::chemistry<<" "<<
//     obj.maths<<"\n";
//     return 0;
// }
// //1963188592 -1930097681 -2 6422280
// //Heirarachical

// // //     Car
// // Scorpio---fortuner

// class car{
//     public:
//     int age;
//     int weight;
//     string name;
//     void speedup()
//     {
//         cout<<"speeding up"<<"\n";
//     }
// };

// class scorpio:public car{

// };
// class fortuner:public car{

// };

// int main()
// {
//     scorpio s11;
//     s11.speedup();

//     fortuner f11;
//     f11.speedup();
// }

// //Hybrid
//// mix. of two or more

// Polymorphism
// many +form
// types
// 1compile time
// //fn overloading(two diff fns with same name)
// //operator overloading()
// class param{
//     public:
//     int val;
//     void operator+(param&obj2)
//     {
//         int val1=this->val;
//         int val2=obj2.val;
//         cout<<(val1-val2)<<"\n"; 
//     }
// };
// int main ()
// {
//     param obj1,obj2;
//     obj1.val=7;
//     obj2.val=2;

//     // print difference b/w them
//     obj1+obj2;//(a.add(b);)
// }


// 2 Run time
// //fn overriding
//   //inheritance used
// // change in the fn used in parent class
class animal {
    public:
    void speak()
    {
        cout<<"Speaking"<<"\n";
    }
};
class dog:public animal{
    public:
    void speak()
    {
        cout<<"barking"<<"\n";
    }
};
int main ()
{
    // dog a;
    // a.speak();


    // upcasting
    animal* a=new dog();
    a->speak();
    // toprint barking using virtual

    // doowncasting
    dog *b=(dog*)new animal();
    b->speak();

    // ////conc:-> always the method of pointer is called


}
