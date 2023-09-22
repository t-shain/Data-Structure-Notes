## Trees as Data Structures
~~~                                                        
                                              .         ;  
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
>* Tree's have Roots, Levels, Parent Nodes, and Sibilings, Subtree
>* Tree's are used in some AI applications

### Tree Search/ Traversal

>#### Depth-First search
>>* Start at the root node. Visit it.
>>* Repeat
>>>- If the current node has a child that has not been visited, visit that node.
>>* If there are multiple choose leftmost.
>>* Otherwise, go to the current node's parent
>>* end when root has no unvisited children. 
