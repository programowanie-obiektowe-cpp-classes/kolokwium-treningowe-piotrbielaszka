#include "zad1.hpp"
#include <cstdint>
#include <functional>

// tutaj funkcja polejSosem
template < typename T >
std::size_t polejSosem(const Tagliatelle& a, const T& b)
{
    return b.polej(a);
}