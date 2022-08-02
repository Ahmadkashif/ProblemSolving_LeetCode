#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> decodedArray;
    // vector<int> decode(vector<int> &encoded, int first)
    // {
    //     vector<int> decoded;
    //     for (auto : i : encoded)
    //     {
    //         if (decoded.size() == 0)
    //             decoded.push_back(first);
    //         else
    //         {
    //             decoded.push_back(encoded[i] ^ decoded.back());
    //         }
    //     }
    //     return decoded;
    // }











































































































































































































































































    vector<int> decode(vector<int> &encoded, int first)
    {
        if(! (decodedArray.size() >= encoded.size() - 1)){
            if(decodedArray.size()==0){
                decodedArray.push_back(first);
                decode(encoded,0);
            }
            else{
                decodedArray.push_back(encoded[first++]^decodedArray.back());
                decoded(encoded,first);
            }
        }
        return decodedArray;
    }
};