#include <iostream>
#include <array>
#include <span>
#include <cassert>

using namespace std;

void WhileBreak(span<int> first, span<int> second)
{
    assert(first.size() == second.size());

    size_t i = 0;

    while (true)
    {
        if (i >= first.size())
            break;

        first[i] = first[i] * second[i];
        i++;
    }
}

void WhileU(span<int> first, span<int> second)
{
    assert(first.size() == second.size());

    size_t i = 0;

    while (i < first.size())
    {
        first[i] *= second[i];
        i++;
    }
}
    
void Forasd(span<int> first, span<int> second)
{
    assert(first.size() == second.size());

    for (size_t i = 0; i < first.size(); i++)
    {
        first[i] *= second[i];
    }
}

int main()
{
    array<int, 3> first {1, 2, 3};
    array<int, 3> second {4, 5, 6};

    WhileBreak(first, second);
    for (size_t i = 0; i < first.size(); i++)
    {
        cout << first[i] << " ";
    }

    first = {1, 2, 3};

    WhileU(first, second);
    for (size_t i = 0; i < first.size(); i++)
    {
        cout << first[i] << " ";
    }

    first = {1, 2, 3};

    Forasd(first, second);
    for (size_t i = 0; i < first.size(); i++)
    {
        cout << first[i] << " ";
    }

    first = {1, 2, 3};


}
