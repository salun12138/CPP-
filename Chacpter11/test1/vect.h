//
// Created by dell on 2024/6/11.
//

#ifndef CHACPTER11_VECT_H
#define CHACPTER11_VECT_H
#include <iostream>
namespace VECTOR
{
    class Vector{
    public:
        enum Mode{RECT, POL};
    private:
        double x;
        double y;
        double mag;
        double ang;
        Mode mode;

        void set_mag();
        void set_ang();
        void set_x();
        void set_y();

    public:
        Vector();
        Vector(double n1, double n2, Mode form = RECT);
        void reset(double n1, double n2, Mode form = RECT);
        ~Vector();
        double xval() const {return x;}
        double yval() const {return y;}
        double Magval() const {return mag;}
        double Angval() const {return ang;}
        void polar_mode();
        void rect_mode();

        //重载
        Vector operator+(const Vector & b) const;
        Vector operator-(const Vector & b) const;
        Vector operator-() const;
        Vector operator*(double n) const;

        friend Vector operator*(double n, const Vector & a);
        friend std::ofstream & operator<<(std::ofstream & of, const Vector & v);
    };
}
#endif //CHACPTER11_VECT_H
