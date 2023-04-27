# Projeto e Análise de Algoritmos - Trabalho 1.
* Objetivo: Desenvolver os algoritmos de busca binária, mergesort e insertion sort.
+ Ferramenta de teste: Deve se seguir as especificações dadas pelo site Spoj.

# Especificações:

## MERGSORT - Mergesort
Simple. Sort the numbers on the standard input using the merge sort algorithm. Don't try to cheat by just calling your build in functions... I can see your source.

### Input

On the standard input you will receive N (1 <= N <= 100000). Each number will fit in 32-bit integer
Output

### Output
the same integers in a sorted manner. Smallest to largest.

### Example

+ Input:
7 3 2 5 4 3

+ Output:
2 3 3 4 5 7
#

## CODESPTB - Insertion Sort
Insertion Sort is a classical sorting technique. One variant of insertion sort works as follows when sorting an array a[1..N] in non-descending order:

for i <- 2 to N
    j <- i
    while j > 1 and a[j] < a[j - 1]
        swap a[j] and a[j - 1]
        j <- j - 1

The pseudocode is simple to follow. In the ith step, element a[i] is inserted in the sorted sequence a[1..i - 1]. This is done by moving a[i] backward by swapping it with the previous element until it ends up in it's right position.

As you probably already know, the algorithm can be really slow. To study this more, you want to find out the number of times the swap operation is performed when sorting an array.

### Input

The first line contains the number of test cases T. T test cases follow. The first line for each case contains N, the number of elements to be sorted. The next line contains N integers a[1],a[2]...,a[N].

### Output

Output T lines, containing the required answer for each test case.
Constraints

1 <= T <= 5
1 <= N <= 100000
1 <= a[i] <= 1000000

### Example

+ Sample Input:
2
5
1 1 1 2 2
5
2 1 3 1 2

+ Sample Output:
0
4

#

## BSEARCH1 - Binary search

You are given a sorted array of numbers, and followed by number of queries, for each query if the queried number is present in the array print its position, else print -1.
### Input

First line contains N Q, number of elements in the array and number of queries to follow.

Second line contains N numbers, the elements of the array. Each number will be -10^9 <= ai <= 10^9, 0 < N <= 10^5, 0 < Q <= 5*10^5
### Output

For each element in the query, print the elements 0 based location of its first occurence, if present, otherwise print -1.
### Example

+ Input:
5 4
2 4 7 7 9
7
10
4
2

+ Output:
2
-1
1
0

=======

# Especificações:

## MERGSORT - Mergesort
Simple. Sort the numbers on the standard input using the merge sort algorithm. Don't try to cheat by just calling your build in functions... I can see your source.

### Input

On the standard input you will receive N (1 <= N <= 100000). Each number will fit in 32-bit integer
Output

### Output
the same integers in a sorted manner. Smallest to largest.

### Example

+ Input:
7 3 2 5 4 3

+ Output:
2 3 3 4 5 7
#

## CODESPTB - Insertion Sort
Insertion Sort is a classical sorting technique. One variant of insertion sort works as follows when sorting an array a[1..N] in non-descending order:

for i <- 2 to N
    j <- i
    while j > 1 and a[j] < a[j - 1]
        swap a[j] and a[j - 1]
        j <- j - 1

The pseudocode is simple to follow. In the ith step, element a[i] is inserted in the sorted sequence a[1..i - 1]. This is done by moving a[i] backward by swapping it with the previous element until it ends up in it's right position.

As you probably already know, the algorithm can be really slow. To study this more, you want to find out the number of times the swap operation is performed when sorting an array.

### Input

The first line contains the number of test cases T. T test cases follow. The first line for each case contains N, the number of elements to be sorted. The next line contains N integers a[1],a[2]...,a[N].

### Output

Output T lines, containing the required answer for each test case.
Constraints

1 <= T <= 5
1 <= N <= 100000
1 <= a[i] <= 1000000

### Example

+ Sample Input:
2
5
1 1 1 2 2
5
2 1 3 1 2

+ Sample Output:
0
4

#

## BSEARCH1 - Binary search

You are given a sorted array of numbers, and followed by number of queries, for each query if the queried number is present in the array print its position, else print -1.
### Input

First line contains N Q, number of elements in the array and number of queries to follow.

Second line contains N numbers, the elements of the array. Each number will be -10^9 <= ai <= 10^9, 0 < N <= 10^5, 0 < Q <= 5*10^5
### Output

For each element in the query, print the elements 0 based location of its first occurence, if present, otherwise print -1.
### Example

+ Input:
5 4
2 4 7 7 9
7
10
4
2

+ Output:
2
-1
1
0
>>>>>>> 7937764 (README)

