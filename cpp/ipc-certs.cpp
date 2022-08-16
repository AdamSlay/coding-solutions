// CodeChef: Chef and IPC Certificates - Practice Problem
// https://www.codechef.com/submit/IPCCERT

#include <iostream>
int count = 0;
void ipc(int m, int k)
{
    int mins = 0;
    for (int i = 0; i < k; i++)
    {
        int v;
        std::cin >> v;
        mins += v;
    }
    int q;
    std::cin >> q;
    if (mins >= m && q <= 10)
    {
        count += 1;
    }
}

int main()
{
    int n, m, k;
    std::cin >> n >> m >> k;
    while (n--)
    {
        ipc(m, k);
    }
    std::cout << count;
}
