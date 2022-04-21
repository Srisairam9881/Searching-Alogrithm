# Searching-Alogrithms

# Linear Search Algorithm with C++ Code | Data Structures & Algorithms
* a linear search algorithm or sequential search is a method for finding an element within a list. It sequentially checks each element of the list until a match is found or the whole list has been searched.
## 

## Linear Search Diagram –
![linear-search-diagram](https://user-images.githubusercontent.com/80576654/164423342-e642cc6c-fbde-4274-aebd-051b5fa1c8a6.png)
* As you can see in the diagram above, we have an integer array data structure with some values. We want to search for the value (98) which is at 5th position in this array. Since we are performing the linear search algorithm we start from the beginning of the array and check for matching values till we find a match.
##

### Algorithm to perform Linear Search
 * 1.Take the input array arr[] from user.
 * 2.Take element(x) you want to search in this array from user.
 * 3.Set flag variable as -1
 * 4.LOOP : arr[start] -> arr[end]
     
       if match found i.e arr[current_postion] == x then
       Print “Match Found at position” current_position.
       flag = 0
       abort
      
* 5.After loop check flag variable.
       
       if flag == -1
       print “No Match Found”
       
* 6.STOP
##

### Linear Search Complexities
#### Time Complexity
* Best Case:	  O(1)
* Average Case:	O(n)
* Worst Case:	  O(n)
##
### Space Complexity: O(1)
##

### Linear Search Applications
* For searching operations in smaller arrays (<100 items)
##



# Binary Search Algorithm with C++ Code | Data Structures & Algorithms
* Binary search algorithm falls under the category of interval search algorithms. This algorithm is much more efficient compared to linear search algorithm. Binary search only works on sorted data structures. This algorithm repeatedly target the center of the sorted data structure & divide the search space into half till the match is found.
The time complexity of binary search algorithm is O(Log n).
* Binary Search Algorithm can be implemented in two ways which are discussed below.
        
         1.Iterative Method
         2.Recursive Method
         
##
## Binary Search Algorithm Diagram –
![binary-search-algorithm-diagram](https://user-images.githubusercontent.com/80576654/164426638-4600bc4e-51d2-4694-8a98-dbf153ca5b9c.png)

### Working –
* 1. Search the sorted array by repeatedly dividing the search interval in half
* 2. Begin with an interval covering the whole array.
* 3. If the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half.
* 4. Otherwise narrow it to the upper half.
* 5. Repeatedly check until the value is found or the interval is empty.
##

### Algorithm to perform Binary Search –(Iterative Method)
* 1.Take input array, left, right & x
* 2.START LOOP – while(left greater than or equal to right)
              
            mid = left + (right-left)/2
            if(arr[mid]==x) then
            return m
            else if(arr[mid] less than x) then
                  left = m + 1
            else
                   right= mid – 1
* 3.END LOOP
* 4.return -1
##
### Algorithm to perform Binary Search –(Recursive Method)
          binarySearch(arr, x, low, high)
          if low > high
          return False 
          else
             mid = (low + high) / 2 
             if x == arr[mid]
                return mid
             else if x > arr[mid]        // x is on the right side
                 return binarySearch(arr, x, mid + 1, high)
              else                               // x is on the right side
                 return binarySearch(arr, x, low, mid - 1)
##

### Time Complexities
* Best case complexity:    O(1)
* Average case complexity: O(log n)
* Worst case complexity:   O(log n)
##

### Space Complexity
* The space complexity of the binary search is O(1).
##

### Binary Search Applications
* In libraries of Java, .Net, C++ STL
* While debugging, the binary search is used to pinpoint the place where the error happens.
##
