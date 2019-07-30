#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../ContainerWithMostWater.cpp"
#include <vector>

TEST_CASE("test case 1")
{
    std::vector<int> input = {1, 1};

    REQUIRE(maxArea(input) == 1);
}

TEST_CASE("test case 2")
{
    std::vector<int> input = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    REQUIRE(maxArea(input) == 49);
}