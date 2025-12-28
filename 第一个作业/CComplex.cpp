#include <iostream>
#include "CComplex.h"
using namespace std;

CComplex::CComplex():real(0),imag(0){}
CComplex::CComplex(double r,double i):real(r),imag(i){}
CComplex::~CComplex(){}

void CComplex::set(double r,double i)
{
    real=r; imag=i;
}
void CComplex::show() const
{
    cout<<real<<" + "<<imag<<"i"<<endl;
}
