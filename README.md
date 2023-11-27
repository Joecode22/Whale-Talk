# Whale Talk Translator - README

## Overview

"Whale Talk" is a unique and fun project designed to translate English phrases into "Whale Talk," a fictional language mimicking the vocal patterns of whales. This translation program specifically targets the phrase "turpentine and turtles" and converts it into its Whale Talk equivalent, "uueeieeauuee." The project demonstrates fundamental programming concepts using C++ and offers an engaging way to learn about loops, vectors, and string manipulation.

### Project Intent

- **Translation to Whale Language**: The core functionality is to translate a given phrase into "Whale Talk".
- **Rules for Translation**:
  - Only vowels are used in the translation (a, e, i, o, u).
  - The letters 'u' and 'e' are given extra emphasis by doubling them.
  - Consonants, including the letter 'y', are excluded from the translation.
- **Output**: The translated phrase is meant to be sung slowly, adhering to the whimsical concept of whale communication.

## Implementation

### File: whale.cpp

This C++ program encapsulates the logic for translating text into Whale Talk. It employs loops to iterate over the characters of the input string and vectors to store and manipulate vowels.

#### Key Features

- **Vector Usage**: A vector of characters (`std::vector<char>`) is used to store the vowels that are permissible in Whale Talk.
- **Loops**: Iterative loops are employed to examine each character of the input and determine if it is a vowel that should be included in the output.
- **Character Duplication**: For the characters 'u' and 'e', the program duplicates them in the output to emphasize their prolonged pronunciation in Whale Talk.
- **Case Insensitivity**: The program has been enhanced to handle uppercase letters by converting all characters to lowercase before processing.

#### How to Run

1. Compile the `whale.cpp` file using a C++ compiler (e.g., `g++ whale.cpp -o whale`).
2. Run the compiled program (e.g., `./whale` on Unix-based systems).

## Acknowledgements

This project was inspired by and based on an exercise from Codecademy. Codecademy's comprehensive and interactive learning platform provided the foundational knowledge and concept for the Whale Talk Translator. Their educational resources have been invaluable in learning programming concepts and applying them to fun and creative projects like this one.

## Conclusion

The Whale Talk Translator is a playful yet educational tool to get acquainted with basic concepts of C++ programming, including vectors, loops, and string manipulation. While the application has a specific and somewhat whimsical purpose, the underlying programming principles are widely applicable in various software development contexts.
