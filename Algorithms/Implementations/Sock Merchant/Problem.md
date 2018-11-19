
John works at a clothing store. He has a large pile of socks that he must pair by color for sale. Given an array of integers representing the color of each sock, determine how many pairs of socks with matching colors there are.

For example, there are `n = 7` socks with colors `ar = [1, 2, 1, 2, 1, 3, 2]` . There is one pair of color  and one of color  . There are three odd socks left, one of each color. The number of pairs is 2 .

**Function Description**

Complete the  _sockMerchant_  function in the editor below. It must return an integer representing the number of matching pairs of socks that are available.

sockMerchant has the following parameter(s):

-   _n_: the number of socks in the pile
-   _ar_: the colors of each sock

**Input Format**

The first line contains an integer n , the number of socks represented in ar .  
The second line contains n space-separated integers describing the colors ar[i] of the socks in the pile.

**Constraints**

- `1 <= n <= 100`
- `1 <= ar[i] <= 100 where 0 <= i < n`

**Output Format**

Print the total number of  _matching pairs_  of socks that John can sell.

**Sample Input**

```
9
10 20 20 10 10 30 50 10 20

```

**Sample Output**

```
3
```
