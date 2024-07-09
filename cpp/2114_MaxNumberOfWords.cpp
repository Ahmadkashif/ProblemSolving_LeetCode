#include <iostream>
#include <cstring>
#include <vector>
#include <string>

using namespace std;

int max = 0;

// int mostWordsFound(vector<string> &sentences)
// {
//     int max = 0;
//     for (int i = 0; i < sentences.size(); i++)
//     {
//         int spaces = 0;
//         int n = sentences[i].size();
//         char ch_array[n + 1];
//         strcpy(ch_array, sentences[i].c_str());
//         for (int j = 0; j < n; j++)
//         {
//             if (ch_array[j] == ' ')
//                 spaces++;
//         }
//         if (max < spaces)
//             max = spaces;
//     }
//     return max + 1;
// }

int mostWordsFound(vector<string> &sentences)
{
    if (sentences.size() == 0)
        return 0;
    else
    {
        vector<char> s(sentences.back().begin(), sentences.back().end());
        int n = getMax(s);
        if (max < n)
            max = n;
        sentences.pop_back();
        mostWordsFound(sentences);
    }
    return max + 1;
}

int getMax(vector<char> &sentence)
{
    if (sentence.size() == 0)
        return 0;

    if (sentence.back() == ' ')
    {
        sentence.pop_back();
        return 1 + getMax(sentence);
    }
    else
    {
        sentence.pop_back();
        return 0 + getMax(sentence);
    }
}