# Hashing
* We want to be able to inset an element find an elemtn remove an element.
* We _**dont**_ want to compare elements while doing this. We dont care about relative ordering of elements
* For each element, perform some calculation on the key that returns an index into the vecotor. Store the element there.
* The goal of this function is to spread the elements across the vecotr as evenly as possible given the input type and range*

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
