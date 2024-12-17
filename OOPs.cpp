#include<bits/stdc++.h>

using namespace std;
// Private by default
class Animal{
// State or properties
private:
int weight;
public:
int age;
string name;

// Behaviour
void eat()
{
    cout<<"Eating"<<"\n";
}

void sleep()
{
    cout<<"Sleeping"<<"\n";
}


int getweight()
{
    return weight;
}
int setweight(int w)
{
    weight= w;
}

// Constructor(default)
Animal()
{
    this->weight=0;
    this->age=0;
    
    cout<<"Constructor called"<<"\n";
}
// parametrized
Animal(int age)
{

    this->age=age;
    
    cout<<"paraConstructor called"<<"\n";
}
// Copy Constructor
Animal(Animal &obj)
{
        this->weight=obj.weight;
    this->age=obj.age;
    this->name=obj.name;
    cout<<"CopyConstructor called"<<"\n";
}
void print()
{
    cout<<this->name<<" "<<this->age<<" "<<this->weight<<"\n";
}

// Destructor
~Animal()
{
    cout<<"I am Destructor"<<"\n";
}
};

int main()
{
// object creation 

// //   Static 
// Animal ramesh;
// ramesh.age=122;
// ramesh.name="Ramesh";
// cout<<"Age of ramesh is:"<<ramesh.age<<"\n";
// cout<<"Nameof ramesh is:"<<ramesh.name<<"\n"
// ramesh.eat();
// ramesh.sleep();
// // How to  access a private access modifier
// // Ans:- We  use getter setter
// ramesh.setweight(101);
// cout<<"Weight of ramesh is:"<<ramesh.getweight()<<"\n";


// Dynamic
Animal * suresh=new Animal;
 (*suresh).age=12;
 (*suresh).name="Suresh";

// Alternate -Dynamic
suresh->age=127;
suresh->name="Suresh";
cout<<"Age of ramesh is:"<<suresh->age<<"\n";
cout<<"Nameof ramesh is:"<<suresh->name<<"\n";

// // copy cons
// Animal *a=new Animal;
// a->age=20;
// a->setweight(73);
// a->name="Rathore";

// Animal b(*a);
// Animal c=b;

// a->print();
// b.print();
// c.print();

// Des
Animal a;
a.age=98;

Animal*b=new Animal;
b->age=12;

delete b;//Manually Calling a Destructor
        //in order to free up the memory



}

// Padding 
// Greedy alignment