#include <bits/stdc++.h>

using namespace std;
class Box
{
private:
    int l;
    int b;
    int h;

public:
    Box()
    {
        l = 0;
        b = 0;
        h = 0;
    }
    Box(int length, int breadth, int height)
    {
        l = length;
        b = breadth;
        h = height;
    }
    Box(const Box &B)
    {
        l = B.l;
        b = B.b;
        h = B.h;
    }
    int getLength()
    {
        return l;
    }
    int getBreadth()
    {
        return b;
    }
    int getHeight()
    {
        return h;
    }
    long long CalculateVolume()
    {
        return (long long)(l)*b * h;
    }
    bool operator<(Box &box)
    {
        if (l < box.l)
        {
            return true;
        }
        if (l == box.l && b < box.b)
        {
            return true;
        }
        if (l == box.l && b == box.b && h < box.h)
        {
            return true;
        }
        return false;
    }
};
ostream &operator<<(ostream &out, Box &B)
{
    out << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();
    return out;
};