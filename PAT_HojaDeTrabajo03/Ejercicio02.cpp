#include "Ejercicio02.h"
#include <unordered_map>
#include <algorithm>

vector<vector<string>>* Ejercicio02::groupAnagrams(vector<string>& strings)
{
    if (strings.empty()) {
        return new std::vector<std::vector<std::string>>;
    }

    std::unordered_map<std::string, std::vector<std::string>> anagramGroups;

    for (const auto& letra : strings) {
        
        std::string sortedWord = letra;
        std::sort(sortedWord.begin(), sortedWord.end());
        anagramGroups[sortedWord].push_back(letra);
    }

    auto result = new std::vector<std::vector<std::string>>(anagramGroups.size());
    auto it = result->begin();
    for (const auto& group : anagramGroups) {
        *it = group.second;
        ++it;
    }
    
   

    return result;
}

