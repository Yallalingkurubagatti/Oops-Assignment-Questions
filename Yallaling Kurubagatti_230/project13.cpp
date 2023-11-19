#include<iostream>
using namespace std;

class employee{
public:
    void read(void);
    void display(void);
};

void employee::read(void)
{
    int i,n,p[20];
    cout<<"Enter the values"<<endl;
    cin>>n;
    for(i=0;i<=n;i++)
    {
        cin>>p[i];



    }


}

void employee::display(void)
{
    int i,n,p[20];
    cout<<"Entered numbers are: "<<endl;
    for(i=0;i<=n;i++)
    {
         cout<<p[i]<<endl;
    }


}
int main()
{
    employee m;
    m.read();
    m.display();
    return 0;
}
