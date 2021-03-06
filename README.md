# leetcode-solutions
Solutions to Leetcode problems (and some Hacker Rank).
If you've found this without me sharing it... why are you looking at my stuff? 

leetcode username: pleasehireleeson

I really should've named this repo "leescode"

# Things I've learned:

## General:
- Write comments explaining thought process before writing actual code
- Comments can affect leetcode runtime and memory
- git add / commit / push only works for files in your current folder, not necessarily the whole repo
- Use the small backwards quote (same key as ~) three times for code in a ReadMe.md file (look inside this one!)
- You can add helper functions in leetcode, just create a new function below the TODO one they give you. example:
```cpp
int Solution(vector<int>& nums) {
    // ... stuff ...
    int test = add2(3);
    cout << test; // outputs 5
    // ... stuff ...
}
    
int add2(int num) {
  return num+2;
}
```

## Syntax:

### For C++ Strings and Chars:
- ```str.length()``` not ```str.size()``` (use size for vectors)
- ```str[i]``` works just like an array (i.e. no need for that "array[256]; strcpy(array, str.c_str())" bullshit)
- convert character c to its ASCII integer value with ```int(c)```
- reverse: convert int i to ASCII character with ```char(i)```
- you can swap out letters of a string just like an array: ```str[i] = c```
- (ref: To Lower Case, Jewels and Stones)

### For C++ Vectors:
- vectors have ```.push_back()```, but not ```.push_front()```? (only for lists?)
- instead you can do ```.insert(v.begin(), element)```

### For C++ Types:
- The "auto" type is similar to python duck-typing; it assumes the type based on usage. See: https://www.learncpp.com/cpp-tutorial/the-auto-keyword/
- ```const int x = 9; x++;``` <-- this causes a compiler error. "const" keyword prevents the variable from being changed at compile time.

### For C++ Loops:
- Change i++ to ```i+=2``` if you want a for loop to count by 2
- Simple syntax for iterating through a vector v 1-by-1:
```cpp
for (auto i : v)
    cout << i
```
- note: i is a REFERENCE, and CANNOT directly modify the value. e.g. i++ will not increment all the values of the vector. You need to use a traditional ```for (int i=0; i<v.size(); i++)``` loop for that
- note: "i" IS the element of v, and works for ints, chars, etc. You DO NOT use v[i] (this will break unless the element matches the index, i.e. v={0,1,2...}
- Ternary operator:
```
(condition) ? ifTrue : ifFalse;
is the same as:
if (condition == true) {
    do the ifTrue statement;
} else if (condition == false) {
    do the ifFalse statement;
}
```
### For C++ Maps:
- unordered_map<  > is a hash map in c++!
- inserting into the hash map is extremely simple:
```cpp
hashmap[str[i]]++;        // to insert str[i] element
hashmap.count(str[i]);    // to check for a collision with str[i] element
```
- map requires an iterator to use the find() function:
```cpp
std::map<int, int> OrderedMap;
std::map<int, int>::iterator it;

it = OrderedMap.find(nums[i]);
int index = std::distance(OrderedMap.begin(), it);
results.push_back(index);
//OrderedMap.erase(it); <-- this line caused a runtime error?
```
- if you want the value or key (idk which) to count up from zero like an index, insert by the map's size:
```cpp
OrderedMap.insert(pair<int, int>(SortedList[i],OrderedMap.size()));
```
- (ref: Jewels and Stones, How Many Numbers Are Smaller Than the Current Number)

### For C++ Trees:
- (ref: Range Sum of BST)
- get values of a node just as you would from a linked list, with -> arrows
- Depth first search (DFS) is easy: if left go left; if left go left; etc. The base case here is no left child exists, so go right. So there's essentially two base cases, no left child and no right child.

### For C++ Recursion:
- making a recursive function is pretty easy. it just calls itself:
  ```cpp
  recurse() {
  if ... { break }
  if ... { recurse() }
  ```
- (ref: Range Sum of BST)

### For Python Syntax:
- I can't find any built-in methods for isEven(), isOdd(). Just use %2
- Python doesn't use ++ and -- to increment or decrement. Use x += 1, x -= 1, etc.
- Python apparently doesn't have block comments! use """ comment """ or lots of single-line comments (hashtag)
- find out what "lambda" is. it looks like... a shorthand way to make functions? seems powerful.
- Printing integers/variables within string:
```python
print('x is {} and y is {}'.format(x, y))
```
- You can make new methods inside the current method. Here's one for a for-loop with custom step number:
```python
def CustomRange(start, end, step):
  while start <= end:
    yield start
    start += step
```
- (ref: Decompress Run-Length Encoded List)
- a python function returns NoneType if you forget to add a return value
- integer / integer = a double (due to duck typing)
- python strings don't end in null terminating characters the way C++ strings do
