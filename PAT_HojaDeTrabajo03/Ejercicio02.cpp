#include "Ejercicio02.h"
#include <unordered_map>
#include <algorithm>

vector<vector<string>>* Ejercicio02::groupAnagrams(vector<string>& strings)
{
    //Vector vacio
    if (strings.empty()) {
        return new std::vector<std::vector<std::string>>;
    }

    //Letra repetida
    std::sort(strings.begin(), strings.end());
    if (std::adjacent_find(strings.begin(), strings.end()) != strings.end()) {
        return new std::vector<std::vector<std::string>>;
    }


    std::unordered_map<std::string, std::vector<std::string>> anagramGroups;

    // Recorrido
    for (const auto& letra : strings) {
        
        std::string sortedWord = letra;
        std::sort(sortedWord.begin(), sortedWord.end());
        anagramGroups[sortedWord].push_back(letra);
    }
    auto result = new std::vector<std::vector<std::string>>;
    
    for (const auto& group : anagramGroups) {
        result->push_back(group.second);
    }

    return result;
}

