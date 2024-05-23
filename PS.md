# Dating in IITK

As you know the crunch situation of gender ratio in IITK that is 1:3 girls to boys ratio. It becomes very difficult for the boys to get a girl they like as “Jo ladki humey chahiye use ham nhi chahiye or jise hum chahiye vo kisko chahiye”. For example  In the Batti department Y23 there are 155 boys and 38 girls. Of which 100 boys and 25 girls are interested in dating. Now everyone has their preferences on which boy or girl they want to date.
At a particular time you are given the data of preferences of boys and girls, you have to get which boy will get which girl and which unfortunate ones will remain single.
To quantify the preference you will be given the preference number of each girl for a boy and vice versa. The probability of a boy getting a girl will depend upon the “Love Quotient” which is the product of preference number of the pair.
For each boy you will be given a list of girls in the order of preference i.e the girl appearing first will have the highest preference  and so on . The preference number of a girl is equal to the number of girls behind her in the preference order.
The preference order of girls is simple, and depends on the week number of the year , on a particular week x for gn, preference order is  ,  b(n+x), b(n+1+x),……b(100),b1,b2…..b(n+x-1).
NOTE: No one is allowed to date more than one person .

## Input

The first line of input contains an integer t the number of test cases.

For each test case:

- The first line of each test case contains 3 integers nb(1≤nb≤100),ng(1≤k≤25),x(1≤x≤52), where nb is number of boys , ng is number of girls and x is the week number .
- The second line of each test case contains nb integers which is the index of the boys
- Following nb number of lines contains preference order of each boy each containing ng integers.

## Output

For each boy you have to print the index of girl he gets in the same order the boys appear in the input, and for the unfortunate ones who didn’t get any print ”Better luck next time” .

