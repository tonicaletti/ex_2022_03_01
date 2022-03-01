#include <iostream>
#include <tuple>

//fdgdfgbin

std::pair<int, int> numbertobinary(int x)
{
    std::pair<int, int> outpair = {0, 0};

    int out = 0;
    int basis10 = 1;
    int countones = 0;

    while (x > 0)
    {
        int rem = x % 2;
        if (rem == 1)
        {
            countones++;
        }
        x = x - rem;
        x = x / 2;

        out = out + rem * basis10;
        basis10 = basis10 * 10;
    }

    outpair.first = out;
    outpair.second = countones;

    return outpair;
}


int main()
{
    //Given an integer n, return an array ans of length n + 1 such that
    //for each i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i.
    int x;
    std::cout << "input number: ";
    std::cin >> x;

    int array[x + 1] = {};

    int nums1[x + 1] = {};

    for (int i = 0; i < x + 1; i++)
    {
        array[i] = numbertobinary(i).first;
        nums1[i] = numbertobinary(i).second;
    }

    for (int i = 0; i < x + 1; i++)
    {
        std::cout << i << ", binary: " << array[i] << ", number_of_ones: " << nums1[i] << std::endl;
    }

    //std::cout << std::endl;
    //td::cout << numbertobinary(x) << std::endl;
}
