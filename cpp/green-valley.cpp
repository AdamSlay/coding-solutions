// Codewars Kata: How Green is My Valley?
// https://www.codewars.com/kata/56e3cd1d93c3d940e50006a4/solutions/cpp

#include <iostream>
#include <vector>
#include <algorithm>
class Valley
{
public:
    static std::vector<int> makeValley(std::vector<int> &arr)
    {
        sort(begin(arr), end(arr));
        std::vector<int> fin = {arr[0]};
        unsigned int size = arr.size(); 
        int mod = 0;
        
        if (size % 2 == 0) 
        {
            mod = 1;
        }
       
        for (unsigned int i = 1; i < size; i++) 
        {
            if (i % 2 == mod)
            {
                fin.push_back(0);
                fin.pop_back();
                fin.insert(fin.begin(), arr[i]);
            }
            else
            {
                fin.push_back(arr[i]);
            }
        }
       
        return fin;
    }

};

int main() 
{
    std::vector<int> vect = { 17, 17, 15, 14, 8, 7, 7, 5, 4, 4, 1 };
    Valley m;
    for (int i: m.makeValley(vect))
        std::cout << i << " ";
}
