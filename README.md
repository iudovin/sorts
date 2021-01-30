# sorts

Here are some "classic" ways to sort an array of numbers. They include

## Bubble sort

Step through the array, compare adjacent elements and swap them if they are in the wrong order. The pass through the list is repeated until the list is sorted. Time complexity is $O(n^2)$.

## Selection sort

Find the smallest element in the array and swap it with the first one. Then find the second smallest element and swap it with the second one and so on. Time complexity is also $O(n^2)$, but in practice it works slightly faster than bubble sort.

## Insertion sort

Iterate over the array, for each element find the leftmost one that is smaller and place the element right after it. Time complexity is still $O(n^2)$

## Megre sort

This methd is recurrent. Divide the array into two arrays, do the same with both of them and then merge them back. Time complexity here is $O(n\log n)$
