## Priority Queues and Binary Heaps
>* we want to be able to insert a node
>* we want to remove the highest priority node.
>* like a sports standings list where things are in a queue but are based off a priority.

#### Binary heaps
>* The BH lets you make a priority queue
>* BH is a binary tree where all the gens are optimized to be as filled as possible then the bottom most gen gets filled from left to right.
>* These filled binary trees can be stored in an array/ vector
>*This table shows the index of a BS with the second row being the index of its left most child. 

| Node Name | A | B | C | D |
|---|---|---|---|---|
| Index | 1 | 2 | 3 | 4 |
| Index of left most child | 2 | 4 | 6 | 8 |

#### Heap-Order Property
>* **For each node with value X, all of its children have values less than or equal to X.**
>* >* Opposite rule also works, if you want the smallest values at the top of the tree instead of largest.
>* **Insertion** starts at the bottom where you want to add the node then moves the value up to the parent if its larger than the parent. Keep moving up if value is greater than the parents.
>>* The time complexity of insertion is logorithmic. 
>* **Deleting** a node means you find the largest of its children to replace it than finding the right most node to replace the hole you made.

## d-heaps
>- like a binary heap but can have d children
>- binary head is a 2-heap
>- The parents must still be greater than or equal to the children (or less than if you reverse the tree)
