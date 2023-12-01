<h1 id="-push-swap">📊 Push_Swap</h1>
<p>This C project was coded during my schooling at 42 Perpignan.<br>
It consists of creating a sorting algorithm in ascending order in a minimum of steps.<br>
The rules are as follows :<br>
- I am limited to 2 stacks, a and b.<br>
- There is a limited number of authorized instructions:
<dd>• sa (swap a): Swaps the first 2 elements at the top of stack a.<br>
Does nothing if there is only one or none.<br>
• sb (swap b): Swaps the first 2 elements at the top of stack b.<br>
Does nothing if there is only one or none.<br>
• ss: sa and sb at the same time.<br>
• pa (push a): Takes the first element at the top of b and puts it on a.<br>
Does nothing if b is empty.<br>
• pb (push b): Takes the first element at the top of a and puts it on b.<br>
Does nothing if a is empty.<br>
• ra (rotate a): Shifts all the elements of stack a by one position.<br>
The first element becomes the last.<br>
• rb (rotate b): Shifts all the elements of stack b by one position.<br>
The first element becomes the last.<br>
• rr: ra and rb at the same time.<br>
• rra (reverse rotate a): Shifts all elements of the<br>
the battery a. The last element becomes the first.<br>
• rrb (reverse rotate b): Shifts all elements of the<br>
the pile b. The last element becomes the first.<br>
• rrr: rra and rrb at the same time.</dd><br>
For more information, I invite you to consult the repo.</p>

<h2 id="-algorithm">🧮 Algorithm</h2>
<p>To succeed in this project, I reproduced the radix algorithm, which consists of sorting by unit. For this I used bit shift.<br>
However, this algorithm is too slow to get more than 84 points in the project rating system. In addition, to not exceed the maximum number of moves for stacks of 5 or less, I created an algorithm that sorts the numbers situationally.</p>

<p align="center"><a href="https://github.com/Coday-meric/badge42"><img src="https://badge42.coday.fr/api/v2/clp5m5snf023301t6xzuyuuls/project/3293029" alt="hbaduel's 42 push_swap Score" /></a></p>
