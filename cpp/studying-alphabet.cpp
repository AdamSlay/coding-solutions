// CodeChef: Studying Alphabet - Practice Problem
// https://www.codechef.com/submit/ALPHABET

#include <iostream>

void alphabet(std::string word) 
{
    std::string n;
    std::cin >> n;
    int n_size = n.size();
    int w_size = word.size();
    int count = 0;
    for (int i = 0; i < n_size; i++)
    {
        for (int j = 0; j < w_size; j++)
        {
            if (n[i] == word[j])
            {
                count += 1;
            }
        }
    }
    if (count == n_size)
    {
        std::cout << "YES" << "\n";
    }
    else
    {
        std::cout << "NO" << "\n";
    }
}

int main()
{
    std::string word;
    int t;
    std::cin >> word >> t;
    while (t--)
    {
        alphabet(word);
    }
}
