# Searching-Alogrithm
## Linear Search 

* a linear search algorithm or sequential search is a method for finding an element within a list. It sequentially checks each element of the list until a match is found or the whole list has been searched.
# Linear Search Diagram –
![image](https://user-images.githubusercontent.com/80576654/164422670-9eb93e4f-5831-4d8c-84f6-ec522938bd85.png)
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
