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
>* 
