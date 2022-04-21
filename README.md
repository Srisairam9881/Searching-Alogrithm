# Searching-Alogrithm

## Linear Search Algorithm with C++ Code | Data Structures & Algorithms
* a linear search algorithm or sequential search is a method for finding an element within a list. It sequentially checks each element of the list until a match is found or the whole list has been searched.

## 
# Linear Search Diagram –
![linear-search-diagram](https://user-images.githubusercontent.com/80576654/164423342-e642cc6c-fbde-4274-aebd-051b5fa1c8a6.png)
* As you can see in the diagram above, we have an integer array data structure with some values. We want to search for the value (98) which is at 5th position in this array. Since we are performing the linear search algorithm we start from the beginning of the array and check for matching values till we find a match.
##

## Algorithm to perform Linear Search
 * 1.Take the input array arr[] from user.
 * 2.Take element(x) you want to search in this array from user.
 * 3.Set flag variable as -1
 * 4.LOOP : arr[start] -> arr[end]
 *     if match found i.e arr[current_postion] == x then
 *      Print “Match Found at position” current_position.
 *      flag = 0
 *      abort
* 5.After loop check flag variable.
*       if flag == -1
*       print “No Match Found”
* 6.STOP
##

## Linear Search Complexities
# Time Complexity
* Best Case:	  O(1)
* Average Case:	O(n)
* Worst Case:	  O(n)
##
# Space Complexity: O(1)
##

## Linear Search Applications
* For searching operations in smaller arrays (<100 items)
##



## Binary Search Algorithm with C++ Code | Data Structures & Algorithms
* Binary search algorithm falls under the category of interval search algorithms. This algorithm is much more efficient compared to linear search algorithm. Binary search only works on sorted data structures. This algorithm repeatedly target the center of the sorted data structure & divide the search space into half till the match is found.
The time complexity of binary search algorithm is O(Log n).
##
