# Coding Challenges

## **Programming Contest**
A programming organization is planning a contest for several programmers, each of which has a
certain rating. (The higher the rating, the better the programmer.) Each programmer is paired with
.another programmer, and the difference between their ratings is referred to as the "bias
amount". Given the ratings of all the programmers in the contest, what is the minimum total bias
amount that can be achieved by optimally planning the programmer pairs?

**Example**

n=4 

ratings = [4, 2, 5, 1]

**The optimal solution is:**

Pair the second programmer (2) with the fourth (1) for a difference of 1.

Pair the first programmer (4) with the third (5) for a difference of 1.

This results in a total bias amount of 1 + 1 = 2.

**Function Description**

Complete the function minimizeBias in the editor below.
minimizeBias has the following parameter:

int ratings[n]: the ratings of each of the programmers

**Returns:**

int: the minimum total bias amount that can be achieved in the contest
Constraints

---

## **Fun with Anagrams**

Given an array of strings, remove each string that is an anagram of an earlier string, then return the remaining array in sorted order.

**Example** 

str = ['code', 'doce', 'ecod', 'framer', 'frame']

code and doce are anagrams. Remove doce from the array and keep the first occurrence code in the array. 
code and ecod are anagrams. Remove ecod from the array and keep the first occurrence code in the array. 
code and framer are not anagrams. Keep both strings in the array. framer and frame are not anagrams due to 
the extra r in framer. Keep both strings in the array. Order the remaining strings in ascending order: ['code','frame','framer'].
