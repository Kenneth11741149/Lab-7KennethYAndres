#ifndef REAL_H
#define REAL_H

class Real{
    protected:
        double valor;
    public:

        Real();

        double getvalor();
        virtual double sumar();
        virtual double restar();
        virtual double multiplicar();
        virtual double dividir();

        ~Real();
};
#endif