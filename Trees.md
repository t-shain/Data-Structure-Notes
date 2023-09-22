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

>#### Depth-First search
> This algo goes straight down the left then works backwards through the tree and pop nodes from a stack if they have already been visited. 
>>* Start at the root node. Visit it.
>>* Repeat
>>>- If the current node has a child that has not been visited, visit that node.
>>* If there are multiple choose leftmost.
>>* Otherwise, go to the current node's parent
>>* end when root has no unvisited children.

>#### Post order traversal
> Similar to DFS but only can store visited nodes if value is a leaf or has no unvisited children.
> Once it is visited it can be poped.
> DFS vs Postorder: Postorder is for times when you dont know the size of the parents and need to find the sizes of the smallest things first then work your way back.
>> DFS is for searching for an object in a tree. 
