#include <iostream>
using namespace std;

void nerd();
int nope();

int main()
{
    cout<<"I am a Big Nerd\n";
    cout<<"I am a Little Nerd\n";
    cout<<nope()<<endl;
    cout<<nerd<<endl;
    return 0;
}

void nerd()
{
    cout<<"I am a Nerd\n";
}
int nope()
{
    int nerd = 1 + 2;
    return nerd;
}