#include <iostream>
#include <iomanip>

/*
 * Write a fucntion named apply_all that expects 2 arrays of integers and their
 * sizes nd dynamically allocates a new array of integers whose size is the
 * product of the 2 array sizes.
 *
 * The function should loop through the second array and multiple each element
 * across each element of array 1 and store the product in the newly creted
 * array.
 *
 * The function should return a pointer to the newly allocated array.
 *
 * You can also write a print function that expects a pointer to an array of 
 * integers and its size and displays the elements in the array.
 */

void print(const int *const a, size_t size) {
    for (size_t i {}; i < size; ++i) {
        std::cout << std::setw(4) << a[i];
    }
    std::cout << '\n';
}

int *apply_all(const int *const a, size_t asize,
        const int *const b, size_t bsize) {
    int *results = new int[asize * bsize];
    int index {};
    for (size_t i {}; i < asize; ++i) {
        for (size_t j {}; j < bsize; ++j) {
            results[index++] = a[i] * b[j];
        }
    }
    return results;
}

int main() {
    int array1[] {1, 2, 3, 4, 5};
    int array2[] {10, 20 , 30};

    std::cout << "Array 1: ";
    print(array1, 5);

    std::cout << "Array 2: ";
    print(array2, 3);

    int *results = apply_all(array1, 5, array2, 3);
    std::cout << "Results: ";
    print(results, 15);

    delete [] results;
}
