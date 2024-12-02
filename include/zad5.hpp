#include "zad1.hpp"

#include <algorithm>
#include <deque>
#include <iterator>
#include <random>
#include <vector>

// tutaj funkcja sortujTagliatelle
template < typename T >
void sortujTagliatelle(T start, T end)
{
    std::sort(start, end, [](auto a, auto b) { return a.ileMaki(1) > b.ileMaki(1); });
}
