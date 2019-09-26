# leetcode-solutions
Solutions to Leetcode problems

Repo for my own education. If you've stumbled upon this without me having shared it, stop creeping. 

Things I've learned:

General:
- Write comments explaining thought process before writing actual code

*Syntax:*

From Jewels and Stones:
- .length() is what you use for a string's length
- you can just treat a string as an array with str[i]
  no need for fancy array[256]; strcpy(array, str.c_str()) shenanigans
- unordered_map<  > is a hash map in c++!
- inserting into the hash map is extremely simple:
  hashmap[str[i]]++;        to insert str[i] element
  hashmap.count(str[i]);    to check for a collision with str[i] element

From Range Sum of BST:
- how to reconstruct a binary search tree from apparent array / sequence
- getting the values is pretty much the same as a linked list, with -> arrows
- making a recursive function is pretty easy. it just calls itself:
  recurse() {
  if ... { break }
  if ... { recurse() }
- so this was depth first search. if left go left; if left go left; etc
  the base case here is no left child exists, so go right
  so there's essentially two base cases, no left child and no right child
  
From To Lower Case:
- convert character c to its ASCII integer value with int(c)
- reverse: convert int i to ASCII character with char(i)
- you can swap out letters of a string just like an array:
  str[i] = c
- all i'm changing is comments and leetcode runtime and memory are 
  varying from 100% to 49% to 25%
  
