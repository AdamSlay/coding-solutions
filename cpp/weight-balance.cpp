// CodeChef: Weight Balance - Practice Problem
// https://www.codechef.com/submit/WEIGHTBL

#include <iostream>

void weight()
{
    int w1, w2, x1, x2, M; 
    std::cin >> w1 >> w2 >> x1 >> x2 >> M;
    const int dw = w2 - w1;
    if ((dw >= x1 * M ) && (dw <= x2 * M))
    {
        std::cout << 1 << "\n";
    }
    else
    {
        std::cout << 0 << "\n";
    }

}
int main()
{
    int t; std::cin >> t;
    while (t--)
    {
        weight();
    }
}
