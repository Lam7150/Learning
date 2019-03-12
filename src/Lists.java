/**
 * Lam Tran
 * November 2018
 * CS125
 *
 * List module
 */

import java.util.List;
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Collection;
import java.util.Iterator;

public class Lists {
    public static void main(String args[]) {
        arraylist();
    }

    /**
     * Arraylist module to explore arraylist functions
     */
    public static void arraylist() {
        /** initializing og array */
        ArrayList array1 = new ArrayList();

        /** filling array */
        array1.add(2);
        array1.add(0, 1);
        array1.add(3);
        array1.add(4);
        array1.add(5);

        /** cloning arrays */
        List array2 = new ArrayList(array1); // produces deep copy
        List array3 = List.copyOf(array2); // produces deep copy
        ArrayList array4 = (ArrayList) array1.clone(); // produces deep copy
        ArrayList array5 = array1; // produces shallow copy

        /** removing objects */
        array1.remove(0);
        array1.remove((Integer) 3);

        System.out.println("array1: " + array1.toString());
        System.out.println("array2: " + array2.toString());
        System.out.println("array3: " + array3.toString());
        System.out.println("array4: " + array4.toString());
        System.out.println("array5: " + array5.toString());


        /** clearing array */
        System.out.println("\nclearing array1...\n");
        array1.clear();
        System.out.println("array1 is empty = " + array1.isEmpty());
        System.out.println("array2 is empty = " + array2.isEmpty());

        /** combining arrays */
        System.out.println("\nadding array2 to array1...\n");
        array1.addAll(array2); // addAll adds the content, while add will just insert the array into next index
        System.out.println("array1: " + array1.toString());

        /** testing iterator */
        Iterator iter = array1.iterator();
        while (iter.hasNext()) {
            System.out.println(iter.next());
        }
    }
}