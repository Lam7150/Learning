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