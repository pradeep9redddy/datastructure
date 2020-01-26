# datastructure
enQueue(q, x):

1)While stack1 is not empty, push everything from stack1 to stack2.
2)Push x to stack1 (assuming size of stacks is unlimited).
3)Push everything back to stack1.
4)Here time complexity will be O(n)

deQueue(q):

1)If stack1 is empty then error
2)Pop an item from stack1 and return it
3)Here time complexity will be O(1)

Applications of Stacks:

A more complex task is recursive descent (top-down depth first) parsing in Natural Language Processing. In this task, the program traverses a tree following a path starting from the top most node all the way down to a terminal node trying to match a path in a given grammar. As it traverses, the tree the path is saved in a stack which records each movement that is made.

Applications of Queues:
Queues are used in breadth-first search.

https://upload.wikimedia.org/wikipedia/commons/4/46/Animated_BFS.gif
In breadth-first search, the program starts at the top node then moves down a level in the tree and searches across all sister nodes before continuing to the next level of depth.
