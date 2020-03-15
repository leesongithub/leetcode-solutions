# leetcode-solutions
Solutions to Leetcode problems (and some Hacker Rank).
Repo for my own education. 
If you've found this without me sharing it... why are you looking at my stuff? 

# Things I've learned:

## General:
- Write comments explaining thought process before writing actual code
- Comments can affect leetcode runtime and memory
- git add / commit / push only works for files in your current folder, not necessarily the whole repo
- Use the small backwards quote (same key as ~) three times for code in a ReadMe.md file (look inside this one!)

## Syntax:

### For C++ Strings and Chars:
- ```str.length()``` not ```str.size()``` (use size for vectors)
- ```str[i]``` works just like an array (i.e. no need for that "array[256]; strcpy(array, str.c_str())" bullshit)
- convert character c to its ASCII integer value with ```int(c)```
- reverse: convert int i to ASCII character with ```char(i)```
- you can swap out letters of a string just like an array: ```str[i] = c```
- (ref: To Lower Case, Jewels and Stones)

### For C++ Loops:
- Change i++ to ```i+=2``` if you want a for loop to count by 2

### For C++ Maps:
- unordered_map<  > is a hash map in c++!
- inserting into the hash map is extremely simple:
```cpp
hashmap[str[i]]++;        // to insert str[i] element
hashmap.count(str[i]);    // to check for a collision with str[i] element
```
- (ref: Jewels and Stones)

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
