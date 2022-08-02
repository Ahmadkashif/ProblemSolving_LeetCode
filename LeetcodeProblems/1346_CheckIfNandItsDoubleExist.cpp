class Solution {
public:
    void merge(vector<int>& arr, int s, int mid, int e){
        int leftSize = mid -s +1;
        int rightSize = e - mid;
        
        vector<int> left, right;
        for(int i = 0; i < leftSize; i++){
            left.push_back(arr[i+s]);
        }
        
        for(int i = 0; i < rightSize; i++){
            right.push_back(arr[i + mid + 1]);
        }
        
        int i = 0, j = 0;
        while(i < leftSize && j < rightSize){
            if(left[i] < right[j])
                arr[s++] = left[i++];
            else
                arr[s++] = right[j++];
        }
        while(i < leftSize)
        {
            arr[s++] = left[i++];
        }
        while(j < rightSize)
        {
            arr[s++] = right[j++];
        }
    }
    
    void mergeSort(vector<int>& arr, int s, int e){
        if(s<e){
            int mid = (e - s)/2 + s;
            
            mergeSort(arr, s, mid);
            mergeSort(arr, mid+1, e);
            
            merge(arr, s, mid, e);
            
        }
    }
    bool checkIfExist(vector<int>& arr) {
        
        mergeSort(arr, 0, arr.size()-1);
        // sort(arr.begin(), arr.end());
        
        int s = 1, e = arr.size()-1, mid;
       
        for(int i = 0; i < arr.size(); i++){
               
            s = i + 1;
            e = arr.size() - 1;
            
            while(s <= e){
                
                mid = (e - s)/2 + s;
                
                if(arr[i] >= 0){
                    
                    if( (arr[mid] == (2*arr[i]) ) || ( arr[i] == (arr[mid]*2)))
                        return true;
                    else if(arr[mid] < 2*arr[i])
                        s = mid + 1;
                    else 
                        e = mid - 1;   
                }
                else{
                     if( (arr[mid] == (2*arr[i]) ) || ( arr[i] == (arr[mid]*2)))
                        return true;
                    else if( 
                            (arr[i]/2 < arr[mid])
                           )
                        e = mid - 1;
                    else 
                        s = mid + 1;   
                }

            }
        }
        return false;
    }
};

// [-10,12,-20,-8,15]