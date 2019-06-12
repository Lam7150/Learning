/**
 * Lam Tran
 * November 2018
 * CS125
 *
 * Algorithms Module
 */

import java.util.Arrays;

public class Algorithms {

    /**
     * Linear Search method to find number in array in O(n)
     *
     * @param array array to be searched
     * @param toFind target int to find
     * @return true if target int is in array, otherwise false
     */
     public static boolean LinearSearch(final int array[], final int toFind) {
         for (int i = 0; i < array.length; i++) {
             if (array[i] == toFind) {
                return true;
             }
         }
         return false;
     }

     public static int[] insertionSort(int[] array) {
         int[] sorted = array.clone();
         int current, j;

         for (int i = 1; i < sorted.length; i++) {
             current = sorted[i];
             j = i - 1;

             while (current < sorted[j] && j > 0) {
                 // insert
                 sorted[j + 1] = sorted[j];
                 j--;
             }

             sorted[j + 1] = current;
         }

         return sorted;
     }

    /**
     * Bubble sort algorithm to sort array in O(n^2)
     *
     * @param unsorted unsorted array to sort
     * @return sorted array
     */
     public static int[] bubbleSort(final int unsorted[]) {
         // not done
         int[] sorted = unsorted.clone();

         for (int i = 1; i < sorted.length; i++) {
             if (sorted[i] < sorted[i-1]) {
                 int temp = sorted[i];
                 sorted[i] = sorted[i-1];
                 sorted[i-1] = temp;
             }
         }

         return sorted;
     }

    /**
     * Euclidean Algorithm
     *
     * @param first larger number
     * @param divisor divisor
     * @return gcd of two numbers
     */
    public static int gcd(final int first, final int divisor) {
        if (divisor == 0) {
            return first;
        }

        int remainder = first - (int) (Math.floor(first / divisor) * divisor);

        if (remainder == 0)
            return divisor;
        else
            return gcd(divisor, remainder);
    }

    /** function MergeSort (int array[]) {
     *     if (array.length == 1) {
     *         return array;
     *     } else if (array.length == 2) {
     *         //swap if unsorted
     *         return array;
     *     } else {
     *         array1 = array[0..mid];
     *         array2 = array[mid+1..end];
     *         sorted_array1 = MergeSort(array1);
     *         sorted_array2 = MergeSort(array2);
     *         sorted_array = Merge(sorted_array1, sorted_array2);
     *     }
     * }
     *
     * function Merge (stack array1, stack array2) {
     *     int sorted_array[array1.length() + array2.length()];
     *     for (int i = 0; i < sorted_array.length(); i++) {
     *         if (array1.empty()) {
     *             sorted_array[i] = array2.pop();
     *         } else if (array2.empty()) {
     *             sorted_array[i] = array1.pop();
     *         } else if (array1.top() < array2.top()){
     *             sorted_array[i] = array1.pop();
     *         } else {
     *             sorted_array[i] = array2.pop();
     *         }
     *     }
     *     return sorted_array;
     * }
     *
     * private static void mergesort(int[] arr, int low, int hi) {
     *    if (low >= hi) {
     *         return;
     *     }
     *     int mid = (low + hi) / 2;
     *     mergesort(arr, low, mid);
     *     mergesort(arr, mid + 1, hi);
     *     merge(arr, low, hi);
     *     return;
     * }
     *
     */
}
