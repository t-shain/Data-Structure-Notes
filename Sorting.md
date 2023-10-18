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
