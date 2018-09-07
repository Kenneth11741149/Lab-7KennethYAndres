#ifndef REAL_H
#define REAL_H

#include<string>
using namespace std;
class Real{
    protected:
        double valor;
    public:

        Real();
        Real(double);

        double getValor();
        double operator+(Real*);
        double operator-(Real*);
        double operator*(Real*);
        double operator/(Real*);
        bool operator==(Real*);
        virtual string toString(); 

        ~Real();
};
#endif