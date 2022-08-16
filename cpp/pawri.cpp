// CodeChef: Pawri Meme - Practice Problem
// https://www.codechef.com/submit/PAWRI

#include <iostream>

void pawri()
{
    std::string s;
    std::cin >> s;
    std::string toReplace = "party";

    int pos = -1;
    do 
    {
        pos = s.find(toReplace);
        if (pos != -1)
        {
            s.replace(pos, toReplace.length(), "pawri");
        }
    } while(pos != -1);

    std::cout << s << "\n";
}

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        pawri();
    }
}
