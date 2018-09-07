#ifndef REAL_H
#define REAL_H

class Real{
    protected:
        double valor;
    public:

        Real();

        double getValor();
        double operator+(Real*);
        double operator-(Real*);
        double operator*(Real*);
        double operator/(Real*);
        bool operator==(Real*);

        ~Real();
};
#endif