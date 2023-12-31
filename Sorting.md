# Sorting algos

#### Stability 
* when there are duplicate values, they stay in the same relative order before and after sorting.
* You have to sort in reverse order of the attributes that you want to sort by, in that the first atribute you sort by is the last attribute or "tie breaker".

### Heap sorting
* uses a heap tree to sort a vector. It does this by deleting the root node then resorting the heap until there are zero nodes left in the heap.
* time complexity of Heap sorting is O(nlogn) becasue going through the heap is logn time and it requires for loops to equally sort out all the nodes.
* Heap sort finalizes the values from right to left. Meaing the highest value gets to the right then stays there. 
* Can we garentee duplicates dont swap in this algo?? <br>
__NO...This means its an unstable algorithm.__

### Bubble Sort
* stable algo
* goes through pair of elements to see if those two are in order if they are then it goes to the next two, if not then it swaps them. 
* moves larger elements quickly to the back, and small elements slowly towards the front.
* Uses when you have a list that is __almost sorted__ it can stop earlier than other algo's.
* Swapping uses a three line swap.
* worst case is when your smallest value is on the far right side. 
~~~
copy = vec[i];
vec[i] = vec[i+1];
vec[i + 1] = copy;
~~~

### Selection sort
* Compares the first value with the rest if there is a smaller value it swaps with it. Then moves to the next value and does the same thing. It does the n-1 times where n is the size of the vector. 

### Merge Sort
* The idea is to split a vector into two halves and check linearly the first elements in each list, whichever one is less goes first.
* Starts with each item being its own sorted list and builds up to two large vectors.
* Is a stable algo
* Needs temp memory for all the copied vectors of the og vector.
* When making merge assume the recursive calls will get your vector to two sorted halves. Then add each front element to the full sorted list.
* Merege sort has a time complexity of O(nlogn) on par with heap sort.
>* Lisas version has a auxillary complexity of linear O(nlogn) but it can be reduced to linear if you pass through the temp vector through the recursive calls.

### Project Four notes
* Read counts should be higher then write counts
* Pass the reads integer by reference into the algos
* Setting timers is a fire extra credit option.

### Quick Sort
* Looks at first element then scans the rest of the vector and partitions the vector depending on the first value. Then does the same thing for the two partitions.
* It is an unstable algo, but there is an implamentation the requires more memory that is stable. 
* If you have good partitions you get time complexity of O(nlogn) if you have bad partitions you get O(n^2)
* Auxillary complexity is constant.

### Other sorting algos
* _Bucket Sort_
>* Create a bucket for each value. Go through the list and add each element to the new appropriate bucket. (Like sorting playing cards cards)
>* Can be used with other sorting algos
* _Radix Sort_
>* Uses integers in numbers to sort them.
>* Goes throught the ones digit for each number and resorts just by that first integer. Then moves to the tens, hundereds, thousands however long needed for all your data.
>* Basically a specific type of bucket sort.

### Sorting tradeoffs 
* You may need an algo to be stable (Bubble, Insertion, Merge, Quick) then there is a time vs memory tradeoff.
* You may need an algo to be fast (Merge, Quick, Heap)
* The use cases can differ depending on what is needed. 
