# Sorting algos

#### Stability 
>- when there are duplicate values, they stay in the same relative order before and after sorting.
>- You have to sort in reverse order of the attributes that you want to sort by, in that the first atribute you sort by is the last attribute or "tie breaker".

### Heap sorting
>- uses a heap tree to sort a vector. It does this by deleting the root node then resorting the heap until there are zero nodes left in the heap.
>- time complexity of Heap sorting is O(nlogn) becasue going through the heap is logn time and it requires for loops to equally sort out all the nodes.
>- Heap sort finalizes the values from right to left. Meaing the highest value gets to the right then stays there. 
>- Can we garentee duplicates dont swap in this algo?? <br>
__NO...This means its an unstable algorithm.__

### Bubble Sort
>- goes through pair of elements to see if those two are in order if they are then it goes to the next two, if not then it swaps them. 
