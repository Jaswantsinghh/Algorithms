# Algorithms
The word Algorithm means “a process or set of rules to be followed in calculations or other problem-solving operations”. Therefore Algorithm refers to a set of rules/instructions that step-by-step define how a work is to be executed upon in order to get the expected results.
## Divide And Conquer Master Theorem:-
As the name suggests, this theorem breaks the original problem into subsets which are further investigated or malipulated as per the requirements. Merge sort is one of its examples.
This theorem can be used to calculate the running time of divide and conquer theorem.
For a given program (algorithm), first we try to find the recurrence relation for the
problem. If the recurrence is of the below form then we can directly give the answer without fully
solving it T(n)=aT(n/b)+Q(n^k.log^p(n)) where Q=theta, a>=1, b>=1, k>=0 and p is a real number.
### 1. If a>b^k, then T(n)=Q(n^(log(a/b)).

### 2. If a=b^k,
#### a. If p>-1, then T(n)=Q(n^(log(a/b)).log^(p+1)(n)).
#### b. If p=-1, then T(n)=Q(n^(log(a/b).log(log(n)))).
#### c. If p<-1, then T(n)=Q(n^(log(a/b))).

### 3. If a<b^k,
#### a. If p>=0 then T(n)=Q(n^k.log^p(n)).
#### b. If p<0 then T(n)=O(n^k).
