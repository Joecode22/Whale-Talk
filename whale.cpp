#include <iostream>
#include <vector>
#include <string>
#include <cctype>  // Include for tolower

int main() {
    std::string input = "Turpentine and Turtles";
    std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    std::vector<char> result;

    // Loop through the input string and check if each of the characters is a vowel
    for (int i = 0; i < input.size(); i++) {
        char lowerCaseChar = tolower(input[i]);  // Convert character to lowercase

        for (int j = 0; j < vowels.size(); j++) {
            if (lowerCaseChar == vowels[j]) {
                result.push_back(lowerCaseChar);
            }
        }
        if (lowerCaseChar == 'e' || lowerCaseChar == 'u') {
            result.push_back(lowerCaseChar);
        }
    }

    // Print the input and the result
    std::cout << input << "\n";
    for (char c : result) {
        std::cout << c;
    }
    std::cout << "\n";

    return 0;
}
