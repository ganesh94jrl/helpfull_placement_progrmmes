/*An anagram is a rearrangement of the letters in a word or phrase to form a new word or phrase.
 All the original letters must be used exactly once, and the result should have a meaningful 
 connection to the original text. For example, "listen" can be rearranged to form "silent."
  Anagrams are often used in puzzles and games.*/
  
#include <iostream>
#include <string>
#include <algorithm>

bool areAnagrams(std::string str1, std::string str2) {
    // Remove any whitespace and convert to lowercase
    str1.erase(std::remove_if(str1.begin(), str1.end(), ::isspace), str1.end());
    str2.erase(std::remove_if(str2.begin(), str2.end(), ::isspace), str2.end());
    std::transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    std::transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

    // Sort the strings
    std::sort(str1.begin(), str1.end());
    std::sort(str2.begin(), str2.end());

    // Compare the sorted strings
    return str1 == str2;
}

int main() {
    std::string str1, str2;
    std::cout << "Enter the first string: ";
    std::getline(std::cin, str1);
    std::cout << "Enter the second string: ";
    std::getline(std::cin, str2);

    if (areAnagrams(str1, str2)) {
        std::cout << "The strings are anagrams." << std::endl;
    } else {
        std::cout << "The strings are not anagrams." << std::endl;
    }

    return 0;
}
