#include "zad1.hpp"

#include <memory>
#include <string>
#include <type_traits>

// tutaj klasa Penne
class Penne : public Makaron
{
    public:
    double ileMaki(unsigned P) const override { return P; }
};

Makaron* Makaron::gotujMakaron(const std::string &st)
{
    if (st.front() == st.back())
        return new Tagliatelle(3.14, 0.42, .1);
    else
        return new Penne();
}
// tutaj definicja metody gotujMakaron