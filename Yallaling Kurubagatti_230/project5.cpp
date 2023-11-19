#include<iostream>
using namespace std;

class myclass{
public:
    int mynum;
    string mystring;
};
int main()
{
    myclass s1,s2,s3;
    s1.mynum=25;
    s1.mystring= "HEllo";
    cout<<s1.mynum<<endl;
    cout<<s1.mystring<<endl;
    s2.mynum=25;
    s2.mystring= "HEllo";
    cout<<s2.mynum<<endl;
    cout<<s2.mystring<<endl;
     s3.mynum=25;
    s3.mystring= "HEllo";
    cout<<s3.mynum<<endl;
    cout<<s3.mystring<<endl;
    return 0;

}
