# Editorial

For each boy, create a vector of pair<int, int> and store the index of the girl and the corresponding love quotient. Now sort the vector based on the love quotient. Maintain two sets to check whether a boy or a girl has already got a date, and first store all the input indices of boys and girls. As we assign a girl and a boy, remove the index from the set. So before checking for any boy or girl, first check whether it is present in the set or not. If absent, move to the next boy/girl until either of the sets is empty or we reach the end.

## Algorithm:

1. For each boy:
   - Create a vector of pair<int, int> to store girl index and love quotient.
   - Calculate the love quotient for each girl.
   - Sort the vector based on the love quotient.

2. Initialize two sets to store available boys and girls.
   - Store all input indices of boys and girls in their respective sets.

3. Iterate through the sorted vectors of boys:
   - For each boy, iterate through his preference order of girls.
   - Check if the girl is available (present in the set).
   - If available, assign the girl to the boy and remove both boy and girl indices from their respective sets.
   - If the girl is not available, continue to the next girl in the preference order.

4. After processing all boys, check if any boys or girls are left in their respective sets.
   - If yes, print "Better luck next time" for each remaining boy or girl.

## Time Complexity:

- Let `n` be the number of boys and `m` be the number of girls.
- Calculating love quotient for each pair of boy and girl takes O(n * m) time.
- Sorting the vector of girls' preference orders for each boy takes O(m * log(m)) time.
- Overall, the time complexity is O(n * m * log(m)).

