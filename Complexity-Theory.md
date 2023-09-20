# Complexity Theory
>* Big idea: we want an idea to determine how much time and or memory is used by an algorithm as the amount of input data grows. <br>
>* We want to compare similar solutions to determine what works the best. 

#### Big[o] notation
>* Big-Oh T(N) = O(f(N))as long as your data is big enough your algorithm will take as least as much time as f(N) times some c multiplier, or take less time and be better!.
>>* **Translation of Big-Oh** As the input size grows, how much longer will the algorithm take to run?
>* Big-Omega is a lower bound saying that your algo is never getting as good as this.

#### Complexity Categories
>* O(1) is a parrell line to the x axis and means no matter how much data you have it takes the same amount of time to compute them.
>* O(logn) is a very good and has a platau basically where the time does matters less as the data grows.
>>* O(n logn) is between log n and exponential. 
>* O(n^n) bad bad bad. 

#### Examples of complexity 
>* O(1)
>>* getters and setters, as well as Computing the average of two doubles
>* O(logn)
>>* Binary search of a sorted list
>>* in general the algorithm increses by one step every time the input size is doubled.
>* O(N)
>>* Summing all the values in an integer array/vector
>>* In general, any algo that has to loop through the length of an array/vector
>* O(n logn)
>>* In general, "Divide and Conquer" algos. Split into two halves solve each, then combine agian.
>* O(n^2)
>>* In general, anything that has two embedded loops each of N iterations. (where each loop is linear)
>* O(2^n)
>>* recursively calculating the Nth number in the Fibonacci sequence.
>>* **Note Exponential time means for every piece of data given the time doubles, lol**

#### Complexity Practice
~~~
int sumOfCubes(int n) {
  int partialSum = 0;
  for (int i = 1; i <= n; ++i) {
    partialSum += i * i * i;
}
return partialSum;
}
~~~
>* This is a linear algo.

##### Notes
>* for consecutive statmenets, add their complexities
>* for conditionals, use the worst complexity of all the branches
>* for loops multiply the number of times the loop can run by the complexity of the work inside the loop.
>* __SIMPLIFY__ eliminate constant multiples and smaller terms (smaller terms being addition)
>>* __O(3n^2) + O(n)__ becomes __O(n^2)__

#### More complexity 
>* Space complexity
>>* If I double the input, how much more memory am I using?
>>* If I double the input how much more space does the algorithm allocate
>* Auxiliary complexity
>>* How much temporary space is being used (temp variables),  The extra space that is taken by an algorithm temporarily to finish its work.
>* Auxillary, Time and Space complexity all are represented with Big-Oh notation.
>* Complexities with multiple variables
>>* Sometimes there are two independent variables at play that will affect the complexity of the algorithm.
>>* Could get complexities like O(N + K), O(N * K), O(N^K)

##### Example algos to track complexity
>* __Maximum Subsequence__ the highest sum you can get when going through an array/vector.
>###### Max Sub algo 1
>>* This maxSub1 algo has a time complexity of O(N^3)
>>* auxiliary complexity is constant -> O(1)
>>* space complexity is also constant, becasue the vextor is passed in by reference. -> O(1)
>###### Max Sub algo 2
>* has time complexity of O(N^2)
