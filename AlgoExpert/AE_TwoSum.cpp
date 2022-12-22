// #include <vector>
// using namespace std;

// int binarySearch(vector<int> arr, int s, int e, int t, int n){
  
//   int m = (e - s)/2 + s;
  
//   if(s < e){
//     if( arr[m] + arr[n] == t)
//       return m;
//     else if (arr[m] + arr[n] < t)
//       binarySearch(arr, m + 1, e, t, n);
//     else
//       binarySearch(arr, s, m-1, t, n);
//   }
  
//   return -1;
// };

// vector<int> twoNumberSum(vector<int> array, int t) {
//   // Write your code here
//   vector<int> res(2);
//   sort(array.begin(), array.end());
  
//   for(int i = 0; i < array.size(); i++ ){
//     res[0] = array[i];
//     int x = binarySearch(array, i+1 , array.size() - 1, t, i);
//     if(x > 0){
//       res[1] = array[x];
//       break;
//     }
//     res.pop_back();
//   }
//   return res;
// }

#include <vector>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int t) {
  // Write your code here

  vector<int> res(2);
  unordered_set <int> set;
  
  for(int n: array)
    {
      if(set.find(t - n) == set.end()){
        set.insert(n);
      }
      else{
        res[0] = n;
        res[1] = t-n;
        return res;
      }
    }
  
  
  return {};
}



