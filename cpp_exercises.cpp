#include <iostream>
#include <vector>
#include <cmath>
#include <array>

using std::cout;

int remainderFunction(int a, int b)
{
    return a % b;
}

bool inequalityCondition(double a, double b)
{
    return 100 < a + b;
}

std::string nameString(std::string word)
{
    return word + "LumahLinda";
}

int getAbsValue(std::vector<int> vec)
{
    int dum = 0;
    for (const int &element : vec)
        dum += std::abs(element);
    return dum;
}

int numberSyllables(std::string separated_word)
{
    int count = 0;
    for (const char &character : separated_word)
    {
        count = (character == '-') ? count + 1 : count;
    }
    return count + 1;
}

std::string longBurp(int n)
{
    return "Bu" + std::string(n, 'r') + 'p';
}

bool isSafeBridge(std::string bridge)
{
    for (const char &element : bridge)
    {
        if (element != '#')
            return false;
    }
    return true;
}

bool lastDig(int a, int b, int c)
{
    return ((a * b) % 10 == c % 10) ? true : false;
}

std::string maskify(std::string word)
{
    int word_condition = word.size() - 4;
    if (word_condition)
    {
        return std::string(word_condition, '#') + word.substr(word_condition);
    }
    return word;
}

std::vector<int> noOdds(std::vector<int> vec)
{
    std::vector<int> result;
    for (const int &element : vec)
    {
        if (!(element % 2))
        {
            result.push_back(element);
        }
    }
    return result;
}

int solutions(int a, int b, int c)
{
    double delta = b * b - 4 * a * c;
    return (delta > 0) ? 2 : (delta == 0) ? 1 : 0;
}

int countVowels(const std::string& word)
{
    int count = 0;
    std::array<char, 5> vowels_arr = {'a', 'e', 'i', 'o', 'u'};
    for (const char& element : word)
    {
        for (const char& vowel : vowels_arr)  
        {
            if (element == vowel) {count += 1;}
        }
    }
    return count;
}

int main()
{
    cout << countVowels("Celebration") << "\n";
    return 0;
}







//  cout << "The number of solutions is: " << solutions(-1, 1, 0) << "\n";
//  cout << maskify("4556364607935616") << "\n";
//  cout << std::boolalpha << lastDig(25, 21, 125) << "\n";
//  cout << std::boolalpha << isSafeBridge("####") << "\n";
//  cout << "Remainder of a % b is " << remainderFunction(35, 31) << "\n";
//  cout << std::boolalpha << inequalityCondition(56, 50) << "\n";
//  cout << nameString("DaviAma") << "\n";
//  cout << getAbsValue({1, -2, -3, 4}) << "\n";
//  cout << numberSyllables("on-o-mat-o-poe-ia") << "\n";
//  cout << longBurp(4) << "\n";
