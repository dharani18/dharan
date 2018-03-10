#include <iostream>
using namespace std;

std::vector<char> np(const std::string& s)
{
    std::map<char, int> frequency;
    for(int i=0;i<s.size();i++)
    {
        frequency[s[i]]++;
    }
    std::vector<char> out;
    for(auto it = frequency.begin(); it != frequency.end(); it++)
    {
        if(it->second == 1)
            out.push_back(it->first);
    }
    return out;
}

int main() 
{
    std::string str = "abbad";
    for(char c : np(str))
    {
        std::cout << c << std::endl;
    }
    return 0;
}
