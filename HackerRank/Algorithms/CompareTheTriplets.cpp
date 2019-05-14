#include <iostream>
#include <vector>

/**
 * Compares triplets
 * 
 * Given: vectors of length 3 with integers between 1 and 100 (inclusive)
 * Return: vector with tally of how many integers were greater in one vector than the other (positions respective), respectively
 **/
std::vector<int> compareTriplets(std::vector<int> a, std::vector<int> b) {
    int alice = 0, bob = 0;

    for (int i = 0; i < a.size(); i++) {
        if (a[i] > b[i]) {
            alice++;
        } else if (a[i] < b[i]) {
            bob++;
        }
    }

    std::vector<int> results;
    results.push_back(alice);
    results.push_back(bob);

    return results;
}

int main() {
    // Test cases
    std::vector<int> base = {50, 50, 50};
    std::vector<int> lows = {1, 1, 1};
    std::vector<int> highs = {100, 100, 100};
    std::vector<int> h1_l2 = {79, 25, 34};
    std::vector<int> h2_l1 = {94, 51, 49};

}