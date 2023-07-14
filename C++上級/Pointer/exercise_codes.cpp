void multiply_with_pointer(int* ptr, int multiplier) {
    *ptr *= multiplier;
}

/*
Find teh Maximum Element in an Array using Pointers
*/
int find_max_element(int* arr, int size) {
    int maxElement = *arr;  // Initialize maxElement with the first element

    for (int i = 1; i < size; i++) {
        if (*(arr + i) > maxElement) {
            maxElement = *(arr + i);  // Update maxElement if a larger element is found
        }
    }

    return maxElement;
}

/*
Reverse an Array using Poiners
*/
void reverse_array(int* arr, int size) {
    int *start = arr;
    int *end = arr + size - 1;
    while (start < end) {
        // swap elements pointed to by start and end pointers
        int temp = *start;
        *start = *end;
        *end = temp;
        
        // Move the pointers towards the center
        start++;
        end--;
    }
}

/*
Reverse a std::string using Pointers
*/
#include <string>

std::string reverse_string(const std::string& str) {
    std::string reversed;

    const char* start = str.c_str();                    // Pointer to the first character
    const char* end = str.c_str() + str.size() - 1;     // Pointer to the last character

    while (end >= start) {
        reversed.push_back(*end);   // Append the character at the end pointer to the reversed string
        end--;
    }

    return reversed;
}
