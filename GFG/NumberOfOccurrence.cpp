class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    int s = 0, e = n-1, mid = 0;
       int first = 0, last = 0;
        
        while( s <= e){

            mid = (e-s)/2 + s;

            if(arr[mid]==x){
                first = mid;
                e = mid - 1;
            }
            else if(arr[mid] > x )
                e = mid - 1;
            else
                s = mid + 1;
        }

        s = 0, e = n-1, mid = 0;
        while(s <= e ){
            mid = (e-s)/2 + s;
            if(arr[mid]==x){
                
                last = mid;
                s = mid + 1;
                
            }
            else if(arr[mid] > x )
                e = mid - 1;
            else
                s = mid + 1;
        }
        if(arr[last]==x){
            return last-first+1;
        }
        else 
            return  0;
	}
};