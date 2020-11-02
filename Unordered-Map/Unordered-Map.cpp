/*
    Unordered maps are implemented using hash tables. The average 
    cost of search, insert, and delete from a hash table is O(1).

    map is an ordered sequence of unique keys, unordered_map keys can
    be stored in any order. Map is a balanced tree structure which
    maintains an order between the elements.
*/

#include <iostream>
#include <unordered_map>
// std::make_pair()
#include <utility>

int main()
{
    // Unordered map with string key and int value.
    std::unordered_map<std::string, int> umap;

    umap["Foo"] = 2;
    umap["Bar"] = 3;
    umap["Foos"] = 5;

    for (auto val : umap)
    {
        // .first is key, .second is value.
        std::cout << val.second << " ";
    }
    std::cout << "\n\n";

    std::unordered_map<std::string, double> uMap;

    uMap["pi"] = 3.14;
    uMap["root2"] = 1.414;
    uMap["root3"] = 1.732;
    uMap["log10"] = 2.302;
    uMap["loge"] = 1.0;

    // Insert value
    uMap.insert(std::make_pair("e", 2.718));

    // Find pi
    std::string key = "pi";

    if (uMap.find(key) == uMap.end())
    {
        std::cout << key << " not found\n\n";
    }
    else
    {
        std::cout << "Found " << key << "\n\n";
    }

    // Iterate over all values of the map
    std::unordered_map<std::string, double>::iterator itr;
    std::cout << "All elements of uMap: \n";
    for (itr  = uMap.begin();  itr != uMap.end(); itr++)
    {
        // itr is a pointer to a pair.
        // itr->first, key.
        // itr->second, value.
        std::cout << itr->first << "\t" << itr->second << std::endl;
    }
    std::cout << "\n\n";
 
}
