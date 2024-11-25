//Making a Meal -codechef(1214)
/*
We need to check how many times the word "codechef" can be made.
So, firstly they will give some number of strings, we need to combine them into one and traverse them for finding number of occurrences via a map.
We will initially declare the values of keys as 0, so that it is meaningful when we check .
Then we will increment if the characters are equal to the letters in the word "codechef".
We will check for the minimum number of occurence that some letter have.
if that minimum is 0, then we print 0
Otherwise, we will check whether the occurrences of 'c' and 'e' are more than twice of that of minimum.(because we have 2 c's and 2 e's and remaining as 1 occurrence in the word "codechef")
so if it true, we will print the minimum value
otherwise, in else block we will check the minimum of 'c' or 'e', and we print half of that value.
*/
