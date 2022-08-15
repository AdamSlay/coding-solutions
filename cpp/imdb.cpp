// CodeChef: Motivation - Practice Problem
// https://www.codechef.com/submit/IMDB

#include <iostream>
#include <vector>
#include <algorithm>
void imdb()
{
    std::vector<int> movies;
    int N, X; std::cin >> N >> X;
    for (int i = 0; i < N; i ++)
    {
        int s, r;
        std::cin >> s >> r;
        if (s <= X)
        {
            movies.push_back(r);
        }
    }
    int max_r = *max_element(movies.begin(), movies.end());
    std::cout << max_r << "\n";
}

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        imdb();
    }
}
