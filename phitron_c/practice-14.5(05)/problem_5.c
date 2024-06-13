#include <stdio.h>

char capital_to_small(char capital_alphabet) {
    if (capital_alphabet >= 'A' && capital_alphabet <= 'Z') {
        return capital_alphabet - 'A' + 'a'; // Convert capital alphabet to small alphabet
    } else {
        return capital_alphabet; // Return unchanged if input is not a capital alphabet
    }
}

int main() {
    char input_char;
    
    printf("Enter a capital alphabet: ");
    scanf(" %c", &input_char); // Input character from user
    
    char small_char = capital_to_small(input_char); // Get small alphabet using capital_to_small() function
    
    printf("Small alphabet: %c\n", small_char); // Print small alphabet
    
    return 0;
}
