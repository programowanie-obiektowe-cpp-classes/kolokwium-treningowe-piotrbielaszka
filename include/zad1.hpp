#include "catch.hpp"

// Zad2
// tutaj definicja klasy Makaron
// BEZ definicji metody gotujMakaron (tylko z deklaracją)
class Makaron
{
public:
    virtual double  ileMaki(unsigned P) const {}
    static Makaron* gotujMakaron(const std::string&);

    virtual ~Makaron() = default;
};

// Zad1
// tutaj definicja klasy Tagliatelle
class Tagliatelle : public Makaron
{
    double              L;
    double              W;
    double              R;
    static const double C;

public:
    Tagliatelle(double l, double w, double r) : L(l), W(w), R(r) {}
    Tagliatelle()
    {
        L = .5;
        R = 0.5;
        W = .5;
    }
    double ileMaki(unsigned P) const override { return L * W * (1. - R) * C * P; }
};
