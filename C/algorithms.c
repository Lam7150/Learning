/**
 * Lam Tran 
 * November 2018
 * 
 * Algorithms
 */

int main(void) {

}

/**
 * Returns true if value is in array of n values, else false.
 * -- can be made recursive -- 
 */
bool binary_search (int value, int values[], int n)
{
    //Binary search
    int i = 0; //Initializing left parameter
    int center; //Declaring center
    
    while (i < n)
    {
        center = (i + n) / 2; //Initializing center
        
        if (values[center] == value)
            return true;
        else if (values[center] < value)
            i = center + 1;
        else if (values[center] > value)
            n = center;
    }

    return false;
}

/**
 * Sorts array of n values using selection sort
 */
void selection_sort(int values[], int n)
{
    int lowest; //Temporary placeholder when switching values

    for (int sorted = 0; sorted < n; ++sorted) //Sorting each index in array
    {
        lowest = values[sorted]; //Initializing lowest element
    
        for (int unsorted = sorted + 1; unsorted < n; ++unsorted) //Going through rest of array for lowest element
        {
            if (values[unsorted] < lowest)
            {
                lowest = values[unsorted];
                values[unsorted] = values[sorted];
                values[sorted] = lowest;
            }
        }
    }
}