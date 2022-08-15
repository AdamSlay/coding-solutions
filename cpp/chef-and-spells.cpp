// CodeChef: Chef and Spells - Practice Problem
// https://www.codechef.com/submit/CHFSPL
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#include <iostream>  
#include <vector>  
#include <algorithm>  
using namespace std;                                  
                                                      
void spells()                                         
{                                                     
    int a, b, c; cin >> a >> b >> c;                  
    int hp = 0;                                       
    vector<int> spells = {a,b,c};                     
    auto k = min_element(spells.begin(), spells.end());
    int m = *k;
    bool caught = false;
    for (int i = 0; i < 3; i++)                       
    {                                                 
        if (spells[i] == m && caught == false)                           
        {                                             
            caught = true;
            continue;                                 
        }                                             
        hp += spells[i];                              
    }                                                 
    cout << hp << endl;                               
}                                                     
int main()                                            
{                                                     
    int t; cin >> t;                                  
    while (t--)                                       
    {                                                 
        spells();                                     
    }                                                 
}                                                     

