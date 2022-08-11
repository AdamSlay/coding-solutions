// Codewars Kata: Going to the Cinema
// https://www.codewars.com/kata/562f91ff6a8b77dfe900006e/cpp
#include <iostream>
#include <cmath>
class Movie
{
public:
    static int movie(int card, int ticket, double perc)
    {
        double dis_tick = ticket;
        int count = 0;
        int a = 0;
        double b = card;

        while (a <= floor(b) + 1) 
        {
            a += ticket;
            dis_tick = dis_tick * perc;
            b += dis_tick;
            count += 1;
        }
        return count;
    }
};

int main() 
{
    Movie mov;
    std::cout << mov.movie(100,10,0.95);
}
