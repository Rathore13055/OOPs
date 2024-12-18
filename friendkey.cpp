#include<bits/stdc++.h>
using namespace std;


// used to share the informationof a class that waas previously hidden
class A
{
    private:
    int x;

    public:
    A(int _vsl):x(_vsl){};

    int getx ()const{return x;}

    void setx(int _val){x=_val;}
    friend class B;//friend keyword
    friend void print (const A&);
};

class B{
    public:
    void print(const A&a)
    {
        // cout<<a.getx();
        cout<<a.x<<"\n";
    }
};
void print (const A&a)
{
    cout<<a.x<<"\n";
}
int main()
{
    A a(5);
    B b;
    b.print(a);
    print(a);

}