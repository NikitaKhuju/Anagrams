#include<iostream>
#include<unordered_map>


bool isAnagram(std::string s, std::string t) {
    //if the lengths if strings are different, they can never be anagrams
    if (s.length() != t.length()) {
        return false;
    }

    //in order to know how frequent a letter is in the first string s, we defing an unordered map to store data in key-value (character-integer) pairs. For a string "apple" -> map_pair[p] = 2
    std::unordered_map<char, int> map_pair;

    //we calculate frequency of each character in the map
    for (char c : s) {
        map_pair[c]++;
    }

    //now we check if the characters stored in map (that of the first string s) are present one by one in the second string t
    for (char ch : t) {
        if (map_pair[ch] > 0) {
            map_pair[ch]--; // if same character is seen, we decrease its frequency in the map so that if the final frequency is zero, the character is present in both strings with same frequency
        }
        else {
            map_pair[ch]++; //  this line will help increase frequency of a new character if found
        }
    }

    for (auto& p : map_pair) {
        if (p.second > 0) { // if any frequency(value) is not zero then there are still letters left in either of the strings hence they cannot be anagrams
            return false;
        }
    }
    return true;
}

int main() {
    std::string s = "listen", t = "listen"; // will result true : 0
    std::string a = "rat", b = "car"; // will result false : 0
    std::string c = "rats", d = "rat"; // will result false : 0
    std::string e = "battle", f = "elttab"; // will result false : 1
    

    std::cout << isAnagram(s, t) << std::endl;
    std::cout << isAnagram(a, b) << std::endl;
    std::cout << isAnagram(c, d) << std::endl;
    std::cout << isAnagram(e, f) << std::endl;
    return 0;
}

/*
Output:
(base) PS D:\Anagrams> g++ validAnagram.cpp
(base) PS D:\Anagrams> ./a.exe
1
0
0
1
(base) PS D:\Anagrams> 

*/