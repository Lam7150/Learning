#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../CompareTheTriplets.cpp"
#include <vector>

TEST_CASE("Alice wins all") {
    std::vector<int> alice = {100, 50, 2};
    std::vector<int> bob = {1, 49, 1};
    std::vector<int> expected = {3, 0};

    REQUIRE(compareTriplets(alice, bob) == expected);
}

TEST_CASE("Bob wins all") {
    std::vector<int> alice = {2, 37, 99};
    std::vector<int> bob = {3, 78, 100};
    std::vector<int> expected = {0, 3};

    REQUIRE(compareTriplets(alice, bob) == expected);
}

TEST_CASE("Alice wins 2, bob 1") {
    std::vector<int> alice = {100, 50, 2};
    std::vector<int> bob = {50, 49, 99};
    std::vector<int> expected = {2, 1};

    REQUIRE(compareTriplets(alice, bob) == expected);
}

TEST_CASE("Alice wins none, bob 1") {
    std::vector<int> alice = {100, 50, 2};
    std::vector<int> bob = {100, 50, 99};
    std::vector<int> expected = {0, 1};

    REQUIRE(compareTriplets(alice, bob) == expected);
}

TEST_CASE("All is tied") {
    std::vector<int> alice = {100, 50, 2};
    std::vector<int> bob = {100, 50, 2};
    std::vector<int> expected = {0, 0};

    REQUIRE(compareTriplets(alice, bob) == expected);
}