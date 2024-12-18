#include<bits/stdc++.h>
using namespace std;
// yes  constructor can be made private;

class box{
    int width;

    // ctor
    box(int _w):width(_w){};    
    public:



    int getwidth()const
    {
        return width;
    }
    void setwidth(int _val)
    {
        width=_val;
    }
    friend class boxfac;
};
class boxfac{
    int count;
    public:
    box getabox(int _w)
    {
        ++count;
        return box(_w);
    }
};
int main()
{
    boxfac bf;
    box b=bf.getabox(443);
    cout<<b.getwidth()<<"\n";
    return 0;
}