#include <iostream>
#include "Lista.hh"

using namespace std;

int main()
{

Lista<double> l;
double a=2;
cin>> l.PUSH(a);
cout<< l.SIZE() <<endl;


return 0;
}

