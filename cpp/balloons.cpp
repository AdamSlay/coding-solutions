// CodeChef: ICPC Balloon - Practice Problem
// https://www.codechef.com/submit/BALLOON
                                                            
#include <iostream>                                         
#include <algorithm>                                        
#include <vector>                                           
void solve()                                                
{                                                           
    int n; std::cin >> n;                                   
    std::vector<int>v;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int s; std::cin >> s;
        v.push_back(s);
    }
    std::vector<int>c;
    for (int i = 0; i < n; i++)                             
    {            
        count += 1;
        if (v[i] < 8 and std::count(c.begin(), c.end(), v[i]) == 0)
        {                                                   
            c.push_back(v[i]);                         
        }                                                   
        if (c.size() == 7)                                  
        {                                                   
            break;                                          
        }                                                   
    }                                                       
    std::cout << count << "\n";                          
}                                                           
int main()                                                  
{                                                           
    int t; std::cin >> t;                                   
    while (t--)                                             
    {                                                       
        solve();                                            
    }                                                       
}                                                       
