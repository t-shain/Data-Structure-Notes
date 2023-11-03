# Hashing
* We want to be able to inset an element find an elemtn remove an element.
* We _**dont**_ want to compare elements while doing this. We dont care about relative ordering of elements
* For each element, perform some calculation on the key that returns an index into the vecotor. Store the element there.
* The goal of this function is to spread the elements across the vecotr as evenly as possible given the input type and range*
* You want your hash tables size to be a prime number becasue if it has factors its easier to get the size of. 

### Horner Hash
~~~
/// in main ///
unsigned long hornerHash(string key, unsigned long tableSize) {
  unsigned long hashVal = 0;
  for(char letter : key){
    hashVal = HashVal * 37 + letter
  }
  return HashVal % tableSize
}

hornerHash(key:"Hello, World!", tableSize:TABLE_SIZE) << endl;


~~~

### Passing functions into things in C++
* You can pass functions into parameters like other data types.
~~~
//the function has to return a string
//the function has to take an int param
Constructor(function<string(int)> func) {
  cout << func(3) << endl;
}
~~~
* We can use this idea to help make Hashing.
* We also need some way of not returning something in a function if we have do not have that object at that index.
  * basically we want to return a null value.
  
### Optionals
* This data type lets you return a value weither or not something is in that value.
* Is important becasue we dont need zeros to place hold in our horner hash table.
~~~
#include <optional>
std::nullOpt;

optional<int> myOptInt = nullopt;
if(myOptInt) {
  cout << "Int value is" << *myOptInt;
  //need to access optional with asteristcs because its basically a pointer.
  cout << endl;
} else {
  return nullopt;
}
~~~
### Ways to put all values in hash tables

>### Closed addressing 
> In this once you get an index you WILL put that iteam in that index.
>* Seperate Chaining
  >* If you get a collison you link that value to the value that it collided with
~~~
0:5
1:2 <- 3
2:
3:8 <- 7 <- 12
~~~
  

### BUILT IN LISTS!
~~~
vector<list<Hashable>>> 
~~~
