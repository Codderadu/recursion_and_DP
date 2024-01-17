#include <bits/stdc++.h>
using namespace std;
bool dfs(int sx, int sy, int dx, int dy)
{
    if (sx >= dx && sy >= dy)
    {
        if (sx == dx && sy == dy)
            return true;
        return false;
    }
    if (dfs(sx + sy, sy, dx, dy))
        return true;
    if (dfs(sx, sy + sx, dx, dy))
        return true;

    return false;
}
int main()
{
    return dfs(1, 1, 2, 2);
}