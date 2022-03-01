#include <iostream>

int main()
{
    constexpr int size = 16;
    int array[size] = {3, 2, 5, 7, 1, 4, 5, 6, 7, 8, 9, 10, 12, 2, 3};


    int index = 0;
    int max_len = 1;
    int curr_len = 1;


    for (int i = 0; i < size - 1; i++)
    {
        if (array[i + 1] > array[i])
        {
            curr_len++;
        }
        else
        {
            if (curr_len > max_len)
            {
                index = i + 1 - curr_len;
                max_len = curr_len;
            }
            curr_len = 1;
        }
    }

    std::cout << "max-len: " << max_len << std::endl;

    std::cout << "subarray: ";

    for (int i = 0; i < max_len; i++)
    {
        std::cout << array[index + i] << std::endl;
    }
}
