#include <array>
#include <iostream>

using namespace std;

int main(void) {
    // An elegant container to store the vowels
    array<char, 5> vowels{'A', 'E', 'I', 'O', 'U'};
    char character;
    // Sets flag for whether the input was vowel
    bool isVowel = false;

    cout << "Enter a character: ";
    cin >> character;

    // Always check if the input was valid
    if (!cin) {
        cerr << "error: Input must be a valid char." << endl;
        return EXIT_FAILURE;
    }

    // Using range-based loop to iterate through each element for a match
    for (const auto &it : vowels)
        // If the it was directly equal to char, or, the tolower() version
        // matches, then it's a vowel, otherwise not
        if (it == character || tolower(it) == character) {
            isVowel = true;
            break;
        }

    // Using ternary operation to determine the expected text elegantly
    auto ternary = (isVowel) ? "vowel" : "consonant";
    cout << "The character was a " << ternary << endl;

    return 0;
}