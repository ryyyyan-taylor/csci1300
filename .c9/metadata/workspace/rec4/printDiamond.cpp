{"filter":false,"title":"printDiamond.cpp","tooltip":"/rec4/printDiamond.cpp","ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":31,"column":3},"end":{"row":31,"column":3},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"hash":"b35c3b96db9660b23e0579321b8f95c741b8b97a","undoManager":{"mark":32,"position":32,"stack":[[{"start":{"row":0,"column":0},"end":{"row":37,"column":1},"action":"insert","lines":["#include <iostream>","using namespace std;","int main()","{","  int n, c, k, space = 1;","  cout<<\"\\n\\nEnter number of rows: \";","  cin>>n;","  space = n - 1;"," ","  for (k = 1; k<=n; k++)","  {","    for (c = 1; c<=space; c++)","      cout<<\" \";"," ","    space--;"," ","    for (c = 1; c<= 2*k-1; c++)","      cout<<\"*\";"," ","    cout<<\"\\n\";","  }"," ","  space = 1;"," ","  for (k = 1; k<= n - 1; k++)","  {","    for (c = 1; c<= space; c++)","      cout<<\" \";"," ","    space++;"," ","    for (c = 1 ; c<= 2*(n-k)-1; c++)","      cout<<\"*\";"," ","    cout<<\"\\n\";","  }","  return 0;","}"],"id":1}],[{"start":{"row":36,"column":1},"end":{"row":36,"column":11},"action":"remove","lines":[" return 0;"],"id":2},{"start":{"row":36,"column":0},"end":{"row":36,"column":1},"action":"remove","lines":[" "]},{"start":{"row":35,"column":3},"end":{"row":36,"column":0},"action":"remove","lines":["",""]}],[{"start":{"row":2,"column":10},"end":{"row":3,"column":0},"action":"remove","lines":["",""],"id":3}],[{"start":{"row":9,"column":1},"end":{"row":9,"column":2},"action":"remove","lines":[" "],"id":4},{"start":{"row":9,"column":0},"end":{"row":9,"column":1},"action":"remove","lines":[" "]},{"start":{"row":8,"column":24},"end":{"row":9,"column":0},"action":"remove","lines":["",""]}],[{"start":{"row":23,"column":1},"end":{"row":23,"column":2},"action":"remove","lines":[" "],"id":5},{"start":{"row":23,"column":0},"end":{"row":23,"column":1},"action":"remove","lines":[" "]},{"start":{"row":22,"column":29},"end":{"row":23,"column":0},"action":"remove","lines":["",""]}],[{"start":{"row":2,"column":0},"end":{"row":3,"column":0},"action":"insert","lines":["",""],"id":6}],[{"start":{"row":3,"column":7},"end":{"row":3,"column":8},"action":"remove","lines":["n"],"id":7},{"start":{"row":3,"column":6},"end":{"row":3,"column":7},"action":"remove","lines":["i"]},{"start":{"row":3,"column":5},"end":{"row":3,"column":6},"action":"remove","lines":["a"]},{"start":{"row":3,"column":4},"end":{"row":3,"column":5},"action":"remove","lines":["m"]}],[{"start":{"row":3,"column":4},"end":{"row":3,"column":5},"action":"insert","lines":["p"],"id":8},{"start":{"row":3,"column":5},"end":{"row":3,"column":6},"action":"insert","lines":["r"]},{"start":{"row":3,"column":6},"end":{"row":3,"column":7},"action":"insert","lines":["i"]},{"start":{"row":3,"column":7},"end":{"row":3,"column":8},"action":"insert","lines":["n"]},{"start":{"row":3,"column":8},"end":{"row":3,"column":9},"action":"insert","lines":["t"]},{"start":{"row":3,"column":9},"end":{"row":3,"column":10},"action":"insert","lines":["D"]},{"start":{"row":3,"column":10},"end":{"row":3,"column":11},"action":"insert","lines":["i"]}],[{"start":{"row":3,"column":11},"end":{"row":3,"column":12},"action":"insert","lines":["a"],"id":9},{"start":{"row":3,"column":12},"end":{"row":3,"column":13},"action":"insert","lines":["m"]},{"start":{"row":3,"column":13},"end":{"row":3,"column":14},"action":"insert","lines":["o"]},{"start":{"row":3,"column":14},"end":{"row":3,"column":15},"action":"insert","lines":["n"]},{"start":{"row":3,"column":15},"end":{"row":3,"column":16},"action":"insert","lines":["d"]}],[{"start":{"row":3,"column":17},"end":{"row":3,"column":18},"action":"insert","lines":["i"],"id":10},{"start":{"row":3,"column":18},"end":{"row":3,"column":19},"action":"insert","lines":["n"]},{"start":{"row":3,"column":19},"end":{"row":3,"column":20},"action":"insert","lines":["t"]}],[{"start":{"row":3,"column":20},"end":{"row":3,"column":21},"action":"insert","lines":[" "],"id":11},{"start":{"row":3,"column":21},"end":{"row":3,"column":22},"action":"insert","lines":["n"]}],[{"start":{"row":3,"column":21},"end":{"row":3,"column":22},"action":"remove","lines":["n"],"id":12},{"start":{"row":3,"column":21},"end":{"row":3,"column":22},"action":"insert","lines":["n"]}],[{"start":{"row":4,"column":8},"end":{"row":4,"column":9},"action":"remove","lines":[" "],"id":13},{"start":{"row":4,"column":7},"end":{"row":4,"column":8},"action":"remove","lines":[","]},{"start":{"row":4,"column":6},"end":{"row":4,"column":7},"action":"remove","lines":["n"]}],[{"start":{"row":6,"column":9},"end":{"row":6,"column":10},"action":"insert","lines":["\\"],"id":14}],[{"start":{"row":6,"column":9},"end":{"row":6,"column":10},"action":"remove","lines":["\\"],"id":15},{"start":{"row":6,"column":8},"end":{"row":6,"column":9},"action":"remove","lines":[";"]},{"start":{"row":6,"column":7},"end":{"row":6,"column":8},"action":"remove","lines":["n"]},{"start":{"row":6,"column":6},"end":{"row":6,"column":7},"action":"remove","lines":[">"]},{"start":{"row":6,"column":5},"end":{"row":6,"column":6},"action":"remove","lines":[">"]},{"start":{"row":6,"column":4},"end":{"row":6,"column":5},"action":"remove","lines":["n"]},{"start":{"row":6,"column":3},"end":{"row":6,"column":4},"action":"remove","lines":["i"]}],[{"start":{"row":6,"column":2},"end":{"row":6,"column":3},"action":"remove","lines":["c"],"id":16},{"start":{"row":6,"column":1},"end":{"row":6,"column":2},"action":"remove","lines":[" "]},{"start":{"row":6,"column":0},"end":{"row":6,"column":1},"action":"remove","lines":[" "]},{"start":{"row":5,"column":37},"end":{"row":6,"column":0},"action":"remove","lines":["",""]},{"start":{"row":5,"column":36},"end":{"row":5,"column":37},"action":"remove","lines":[";"]},{"start":{"row":5,"column":35},"end":{"row":5,"column":36},"action":"remove","lines":["\""]},{"start":{"row":5,"column":34},"end":{"row":5,"column":35},"action":"remove","lines":[" "]},{"start":{"row":5,"column":33},"end":{"row":5,"column":34},"action":"remove","lines":[":"]},{"start":{"row":5,"column":32},"end":{"row":5,"column":33},"action":"remove","lines":["s"]},{"start":{"row":5,"column":31},"end":{"row":5,"column":32},"action":"remove","lines":["w"]},{"start":{"row":5,"column":30},"end":{"row":5,"column":31},"action":"remove","lines":["o"]},{"start":{"row":5,"column":29},"end":{"row":5,"column":30},"action":"remove","lines":["r"]},{"start":{"row":5,"column":28},"end":{"row":5,"column":29},"action":"remove","lines":[" "]},{"start":{"row":5,"column":27},"end":{"row":5,"column":28},"action":"remove","lines":["f"]},{"start":{"row":5,"column":26},"end":{"row":5,"column":27},"action":"remove","lines":["o"]},{"start":{"row":5,"column":25},"end":{"row":5,"column":26},"action":"remove","lines":[" "]},{"start":{"row":5,"column":24},"end":{"row":5,"column":25},"action":"remove","lines":["r"]},{"start":{"row":5,"column":23},"end":{"row":5,"column":24},"action":"remove","lines":["e"]},{"start":{"row":5,"column":22},"end":{"row":5,"column":23},"action":"remove","lines":["b"]}],[{"start":{"row":5,"column":21},"end":{"row":5,"column":22},"action":"remove","lines":["m"],"id":17},{"start":{"row":5,"column":20},"end":{"row":5,"column":21},"action":"remove","lines":["u"]},{"start":{"row":5,"column":19},"end":{"row":5,"column":20},"action":"remove","lines":["n"]},{"start":{"row":5,"column":18},"end":{"row":5,"column":19},"action":"remove","lines":[" "]},{"start":{"row":5,"column":17},"end":{"row":5,"column":18},"action":"remove","lines":["r"]},{"start":{"row":5,"column":16},"end":{"row":5,"column":17},"action":"remove","lines":["e"]},{"start":{"row":5,"column":15},"end":{"row":5,"column":16},"action":"remove","lines":["t"]},{"start":{"row":5,"column":14},"end":{"row":5,"column":15},"action":"remove","lines":["n"]},{"start":{"row":5,"column":13},"end":{"row":5,"column":14},"action":"remove","lines":["E"]},{"start":{"row":5,"column":12},"end":{"row":5,"column":13},"action":"remove","lines":["n"]},{"start":{"row":5,"column":11},"end":{"row":5,"column":12},"action":"remove","lines":["\\"]},{"start":{"row":5,"column":10},"end":{"row":5,"column":11},"action":"remove","lines":["n"]},{"start":{"row":5,"column":9},"end":{"row":5,"column":10},"action":"remove","lines":["\\"]},{"start":{"row":5,"column":8},"end":{"row":5,"column":9},"action":"remove","lines":["\""]},{"start":{"row":5,"column":7},"end":{"row":5,"column":8},"action":"remove","lines":["<"]},{"start":{"row":5,"column":6},"end":{"row":5,"column":7},"action":"remove","lines":["<"]},{"start":{"row":5,"column":5},"end":{"row":5,"column":6},"action":"remove","lines":["t"]},{"start":{"row":5,"column":4},"end":{"row":5,"column":5},"action":"remove","lines":["u"]},{"start":{"row":5,"column":3},"end":{"row":5,"column":4},"action":"remove","lines":["o"]},{"start":{"row":5,"column":2},"end":{"row":5,"column":3},"action":"remove","lines":["c"]},{"start":{"row":5,"column":1},"end":{"row":5,"column":2},"action":"remove","lines":[" "]},{"start":{"row":5,"column":0},"end":{"row":5,"column":1},"action":"remove","lines":[" "]},{"start":{"row":4,"column":22},"end":{"row":5,"column":0},"action":"remove","lines":["",""]}],[{"start":{"row":32,"column":1},"end":{"row":33,"column":0},"action":"insert","lines":["",""],"id":18},{"start":{"row":33,"column":0},"end":{"row":34,"column":0},"action":"insert","lines":["",""]},{"start":{"row":34,"column":0},"end":{"row":34,"column":1},"action":"insert","lines":["i"]},{"start":{"row":34,"column":1},"end":{"row":34,"column":2},"action":"insert","lines":["n"]},{"start":{"row":34,"column":2},"end":{"row":34,"column":3},"action":"insert","lines":["t"]}],[{"start":{"row":34,"column":3},"end":{"row":34,"column":4},"action":"insert","lines":[" "],"id":19},{"start":{"row":34,"column":4},"end":{"row":34,"column":5},"action":"insert","lines":["m"]},{"start":{"row":34,"column":5},"end":{"row":34,"column":6},"action":"insert","lines":["i"]},{"start":{"row":34,"column":6},"end":{"row":34,"column":7},"action":"insert","lines":["a"]}],[{"start":{"row":34,"column":6},"end":{"row":34,"column":7},"action":"remove","lines":["a"],"id":20},{"start":{"row":34,"column":5},"end":{"row":34,"column":6},"action":"remove","lines":["i"]}],[{"start":{"row":34,"column":5},"end":{"row":34,"column":6},"action":"insert","lines":["a"],"id":21},{"start":{"row":34,"column":6},"end":{"row":34,"column":7},"action":"insert","lines":["i"]},{"start":{"row":34,"column":7},"end":{"row":34,"column":8},"action":"insert","lines":["n"]}],[{"start":{"row":34,"column":8},"end":{"row":34,"column":10},"action":"insert","lines":["()"],"id":22}],[{"start":{"row":34,"column":10},"end":{"row":34,"column":11},"action":"insert","lines":["{"],"id":23}],[{"start":{"row":34,"column":11},"end":{"row":36,"column":1},"action":"insert","lines":["","    ","}"],"id":24}],[{"start":{"row":35,"column":4},"end":{"row":35,"column":5},"action":"insert","lines":["i"],"id":25},{"start":{"row":35,"column":5},"end":{"row":35,"column":6},"action":"insert","lines":["n"]},{"start":{"row":35,"column":6},"end":{"row":35,"column":7},"action":"insert","lines":["t"]}],[{"start":{"row":35,"column":7},"end":{"row":35,"column":8},"action":"insert","lines":[" "],"id":26},{"start":{"row":35,"column":8},"end":{"row":35,"column":9},"action":"insert","lines":["t"]},{"start":{"row":35,"column":9},"end":{"row":35,"column":10},"action":"insert","lines":["e"]},{"start":{"row":35,"column":10},"end":{"row":35,"column":11},"action":"insert","lines":["s"]},{"start":{"row":35,"column":11},"end":{"row":35,"column":12},"action":"insert","lines":["t"]}],[{"start":{"row":35,"column":12},"end":{"row":35,"column":13},"action":"insert","lines":[" "],"id":27},{"start":{"row":35,"column":13},"end":{"row":35,"column":14},"action":"insert","lines":["="]}],[{"start":{"row":35,"column":14},"end":{"row":35,"column":15},"action":"insert","lines":[" "],"id":28},{"start":{"row":35,"column":15},"end":{"row":35,"column":16},"action":"insert","lines":["4"]}],[{"start":{"row":35,"column":16},"end":{"row":36,"column":0},"action":"insert","lines":["",""],"id":29},{"start":{"row":36,"column":0},"end":{"row":36,"column":4},"action":"insert","lines":["    "]},{"start":{"row":36,"column":4},"end":{"row":36,"column":5},"action":"insert","lines":["p"]},{"start":{"row":36,"column":5},"end":{"row":36,"column":6},"action":"insert","lines":["r"]},{"start":{"row":36,"column":6},"end":{"row":36,"column":7},"action":"insert","lines":["i"]}],[{"start":{"row":36,"column":4},"end":{"row":36,"column":7},"action":"remove","lines":["pri"],"id":30},{"start":{"row":36,"column":4},"end":{"row":36,"column":18},"action":"insert","lines":["printDiamond()"]}],[{"start":{"row":36,"column":17},"end":{"row":36,"column":18},"action":"insert","lines":["t"],"id":31},{"start":{"row":36,"column":18},"end":{"row":36,"column":19},"action":"insert","lines":["e"]},{"start":{"row":36,"column":19},"end":{"row":36,"column":20},"action":"insert","lines":["s"]},{"start":{"row":36,"column":20},"end":{"row":36,"column":21},"action":"insert","lines":["t"]}],[{"start":{"row":35,"column":16},"end":{"row":35,"column":17},"action":"insert","lines":[";"],"id":32}],[{"start":{"row":36,"column":22},"end":{"row":36,"column":23},"action":"insert","lines":[";"],"id":33}]]},"timestamp":1538155638289}