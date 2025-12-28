#ifndef CCOMPLEX_H
#define CCOMPLEX_H

class CComplex
{
private:
    double real;
    double imag;
public:
    CComplex();
    CComplex(double r, double i);
    ~CComplex();
    void set(double r, double i);
    void show() const;
};

#endif
