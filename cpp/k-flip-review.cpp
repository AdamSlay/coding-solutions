// Review of K-Flip problem from Code Chef Aug 17
#include <vector>
#include <queue>
#include <iostream>

int main()
{
    int n, k;
    n = 13;
    k = 3;
    std::string s = "1010011011010";
    //initialize a vector of length n 
    //consisting of all '0's
    std::vector<int>v(n, 0);
    for (int i = 0; i < n; i++)
    {
        v[i] = s[i] - '0';
    }
    
    std::queue<int>q;
    for (int i = 0; i < n-k+1; i++)
    {
        // while the q has stuff in it and
        // the oldest val is < the current index
        // q.pop. See comments about q.push(i+k-1) 
        // for why q.front is our comparison
        while(q.size() > 0 and q.front() < i)
        {
            q.pop();
        }

        // if the number of ops affecting 
        // the current val results in it being 0,
        // continue; 
        // else, make it 0 and push (i-k+1) to q
        v[i] = (v[i] + q.size()) % 2;
        if (v[i] == 0) continue;
        v[i] = (v[i] + 1) % 2;

        // when we do an operation at index i, we know that this 
        // index will not affect the character at index i+k-1
        // so, we q.push(i+k-1) in the queue and use the while loop at
        // the top to check if the oldest val in the queue
        // is less than the current value of i
        // if so, pop it from the queue.
        // this is how we keep track of how many operations are
        // affecting our current index.
        q.push(i + k - 1);
    }

    for (int i = n-k+1; i < n; i++)
    {
        while (q.size() > 0 and q.front() < i)
        {
            q.pop();
        }
        // we basically do the same as the above for loop
        // but we don't automatically change the val to 0
        // we just see if it would have flipped based on
        // the size of the q and leave it at that
        v[i] = (v[i] + q.size()) % 2;
    }
    
    // this just initializes a string of length n
    // which consists entirely of '0's
    std::string ans(n, '0');
    for(int i = 0; i < n; i++)
    {
        ans[i] = ('0' + v[i]);
    }
    std::cout << ans << "\n";
}
