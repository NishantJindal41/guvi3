    

  
class G  
{ 
      
    public static int localMinUtil(int[] arr, int low,  
                                   int high, int n0) 
    { 
          
        int mid = low + (high - low) / 2; 
          
        if(mid == 0 || arr[mid - 1] > arr[mid] &&  
           mid == n0 - 1 || arr[mid] < arr[mid + 1]) 
                return mid; 
          
        else if(mid > 0 && arr[mid - 1] < arr[mid]) 
                return localMinUtil(arr, low, mid - 1, n0); 
          
        return localMinUtil(arr, mid + 1, high, n0); 
    } 
      
    public static int localMin(int[] arr, int n0) 
    { 
        return localMinUtil(arr, 0, n - 1, n0); 
    } 
      
    public static void Main ()  
    { 
          
        int []arr = {4, 3, 1, 14, 16, 40}; 
        int n0 = arr.Length; 
        Console.WriteLine("Index of a local minima is " + 
                            localMin(arr, n0)); 
      
    }
