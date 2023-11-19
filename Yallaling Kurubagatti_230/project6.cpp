#include<iostream>
#include<math.h>
using namespace std;
class cube{
public:
    float l,b,h;
    void read(void);
    void area(void);
    void volume(void);

};
void cube :: read(void){
    float l,b,h;
cout<<"Enter the l b h: "<<endl;
cin>>l;
cin>>b;
cin>>h;

}

void cube :: area(void){
    float l,b,a;
    a=l*b;
    cout<<"Area is :"<<a<<endl;
}
void cube :: volume(void){
    float b,l,h,v;
    v=h*b*l;
    cout<<"Volume is :"<<v<<endl;
}
int main()
{
    cube c;
    c.read();
    c.volume();
    c.area();

    return 0;
}
