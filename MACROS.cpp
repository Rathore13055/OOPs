#include<bits/stdc++.h>
using namespace std;
// macro is good for readability of the code


#define pi 3.14159465
#define MAXX(x,y)(x>y?x:y)

float circlearea(float r)
{
    return pi*r*r;
}
float circleperimeter(float r)
{
    return 2*pi*r;
}

void fn()
{
    int x=6;
    int b=17;
    int c=MAXX(x,b);
}
int main()
{
    cout<<circlearea(65.4)<<"\n";
}