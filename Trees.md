## Trees as Data Structures
~~~                                                        
                                              .         ;  Leaf ( level 3 )
                 .              .              ;%     ;;   
                   ,           ,                :;%  %;   
                    :         ;                   :;%;'     .,   SIBLINGS ( level 2 )
           ,.        %;     %;            ;        %;'    ,;
             ;       ;%;  %%;        ,     %;    ;%;    ,%'
              %;       %;%;      ,  ;       %;  ;%;   ,%;' 
               ;%;      %;        ;%;        % ;%;  ,%;'
                `%;.     ;%;     %;'         `;%%;.%;'
                 `:;%.    ;%%. %@;        %; ;@%;%'
                    `:%;.  :;bd%;          %;@%;'
                      `@%:.  :;%.         ;@@%;'   
                        `@%.  `;@%.      ;@@%;         
                          `@%%. `@%%    ;@@%;        
                            ;@%. :@%%  %@@%;      PARENT NODES ( level 1 )
                              %@bd%%%bd%%:;     
                                #@%%%%%:;;
                                %@@%%%::;
                                %@@@%(o);  . '         
                                %@@@o%;:(.,'         
                            `.. %@@@o%::;         
                               `)@@@o%::;         
                                %@@(o)::;        
                               .%@@@@%::;         
                               ;%@@@@%::;.          
                              ;%@@@@%%:;;;. 
                          ...;%@@@@@%%:;;;;,..    ROOT ( level 0 )
~~~
>* Tree's have Roots, Levels, Parent Nodes, and Sibilings, Subtrees, leaf nodes
>* Tree's are used in some AI applications

### Tree Search/ Traversal

#### Depth-First search
>* This algo goes straight down the left then works backwards through the tree and pop nodes from a stack if they have already been visited.
>>* __Visit a parent before you vist the children__
>>* Start at the root node. Visit it.
>>* Repeat
>>>- If the current node has a child that has not been visited, visit that node.
>>* If there are multiple choose leftmost.
>>* Otherwise, go to the current node's parent
>>* end when root has no unvisited children.

#### Post order traversal
>* Similar to DFS but only can store visited nodes if value is a leaf or has no unvisited children.
>* __Visit the children before you vist a parent__ <br>
>* Once it is visited it can be poped.
>* DFS vs Postorder: Postorder is for times when you dont know the size of the parents and need to find the sizes of the smallest things first then work your way back.
>>* DFS is for searching for an object in a tree.
>* Prefix notation = DFT
>* Postfix notation = POT

#### Breadth-First Search
>* Goes through level by level in the tree
>* Read it like a book.

#### Inorder traversal
>* NOTE: can only be done on a __binary tree__ (every parent has 0-2 children)
>* We vist a node after the left child but before the right child.
>* When a node does not have a left child it can be visited, when it does not have a right child it can be poped from the stack.
>* It scans the tree from left to right vertically.

#### Complexity of Traversal
>* What is the complexity of traversing a tree?
>>* Usally its O(N) [linear time]

### Binary Search Trees
>+ For each node with value X:
>+ has to be in order, left is less then right is greater than.
>+ cut it in half until you have the value you want.
>+ It not just a parent child relationship it has to be the whole sub tree.

#### Adding and removing
Adding (+)
>+ always start wit the root when adding or subtracting.
>+ when you hit a null point is where you add
>>+ Go left if less than node, go right is greater than.
>+ Order makes a difference when adding nodes. <br>

Removing (-)
>+ When removing a leaf node you can just delete it.
>+ When you have one child it replaces the node you remove.


