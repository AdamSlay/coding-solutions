// CodeChef: Lapindromes - Practice Problems
// https://www.codechef.com/submit/LAPIN
#include <iostream>                                      
#include <algorithm>                                     
void lapi()                                              
{                                                        
    std::string s;                                       
    std::cin >> s;                                       
    int size = s.size();   
    std::string a;
    std::string b;
    a = s.substr(0, size / 2);
    if (size % 2 == 0)
    {
        b = s.substr(size/2, size);
    }
    else
    {
        b = s.substr((size / 2) + 1, size); 
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if (a == b)                                          
    {                                                    
        std::cout << "YES" << "\n";                      
    }                                                    
    else {                                               
        std::cout << "NO" << "\n";                       
    }                                                    
                                                         
}                                                        
int main()                                               
{                                                        
    int t; std::cin >> t;                                
    while (t--)                                          
    {                                                    
        lapi();                                          
    }                                                    
}                                                        
                                                         
                                                         
                                                         
                                                         

