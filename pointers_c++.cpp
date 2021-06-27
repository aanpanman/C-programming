#include "iostream"
using namespace std;
int main()
{
    int x=100;
    int *p = &x;
    cout<<"content of x is "<<x<<endl;
    cout<<"address of x is "<<&x<<endl;
    cout<<"content of p is "<<p<<endl;
    cout<<"address of p is "<<&p<<endl;
    cout<<"size of p is "<<sizeof(p)<<" bytes"<<endl;
    return 0;
}
