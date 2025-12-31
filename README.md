# Anagrams
For s = "listen", t ="silent",

both have equal lengths so : 

  Consider s:
  
map_pair[l] = 1,
map_pair[i] = 1,
map_pair[s] = 1,
map_pair[t] = 1,
map_pair[e] = 1,
map_pair[n] = 1,


Then for t:

s : map_pair[s]-- => map_pair[s] = 0
i: map_pair[i]-- => map_pair[i] = 0
l:map_pair[l]-- => map_pair[l] = 0
e:map_pair[e]-- => map_pair[e] = 0
n:map_pair[n]-- => map_pair[n] = 0
t:map_pair[t]-- => map_pair[t] = 0

Now reviewing each value of map_pair: since none values are greater than 0, this results true


Another example:

For a = "rat", b ="cat",

both have equal lengths: 

  Consider a:
map_pair[r] = 1,
map_pair[a] = 1,
map_pair[t] = 1,

Then for b:

b : map_pair[b]++ => map_pair[b] = 1
a : map_pair[a]-- => map_pair[a] = 0
t : map_pair[t]-- => map_pair[t] = 0


Now reviewing each value of map_pair: since r and b have frequencies are greater than 0, this results false
