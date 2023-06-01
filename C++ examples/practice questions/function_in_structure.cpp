#include<iostream>
using namespace std;
struct func
{
    int x;
    int y;

    
    void print();
}f1;
int main()
{
   // func f1;
    f1.print();
   f1.x=10;
   cout<<"the value of x is \n"<<f1.x<<endl;
    return 0;


}
void func::print()
{
    cout<<"hi hello\n"<<endl;
}