#include <iostream>
#include <vector>

/**
 * Given n non-negative integers a1, a2, ..., an, where each represents a point at coordinate (i, ai). 
 * n vertical lines are drawn such that the two endpoints of line i is at (i, ai) and (i, 0). 
 * Find two lines, which together with x-axis forms a container, such that the container contains the most water.
 * 
 * Note: You may not slant the container and n is at least 2.
 * 
 * Results:
 * Runtime: 16 ms, faster than 95.91% of C++ online submissions for Container With Most Water.
 * Memory Usage: 9.7 MB, less than 91.90% of C++ online submissions for Container With Most Water.
 **/
int maxArea(std::vector<int> &height)
{
    int highest = 0;
    int left = 0;
    int right = height.size() - 1;

    for (int i = 0; i < height.size() - 1; i++)
    {
        if (std::min(height[left], height[right]) * (right - left) > highest)
        {
            highest = std::min(height[left], height[right]) * (right - left);
        }

        if (height[left] < height[right])
        {
            left++;
        }
        else
        {
            right--;
        }
    }

    return highest;
}