

<h1 align="center">Push_swap</h1>

<h2 align="center">
Because Swap_push isn’t as natural
</h2> 

<p align="center">
  <img alt="Github top language" src="https://img.shields.io/github/languages/top/anolivei/Push_swap42?color=3de069">

  <img alt="Github language count" src="https://img.shields.io/github/languages/count/anolivei/Push_swap42?color=3de069">

  <img alt="Repository size" src="https://img.shields.io/github/repo-size/anolivei/Push_swap42?color=3de069">

  <img alt="Norminette" src="https://github.com/anolivei/Push_swap42/actions/workflows/linter.yaml/badge.svg?event=push">

<p align="center">
  <a href="#about">About</a> &#xa0; | &#xa0;
  <a href="#links">Links</a> &#xa0; | &#xa0;
  <a href="#functions">Functions</a> &#xa0; | &#xa0;
  <a href="#starting">Starting</a> &#xa0; | &#xa0;
  <a href="#testing">Testing</a> &#xa0; | &#xa0;
  <a href="https://github.com/anolivei" target="_blank">Author</a>
</p>

<br>

## About ##

- Push_swap is an algorithm project at school 42 and the instructions were given in the [subject](https://github.com/anolivei/Push_swap42/blob/main/en.subject.pdf).
- We start with two stacks called A and B.
- A is filled with some random integers (without duplicates) and B is empty.
- We can perform a limited set of instructions on these stacks and the goal is to sort all these integers using the lowest possible number of actions.
- The limited set of instructions are:

| Operation | Description |
| ------------ | ------------ |
| `sa` | swap A - swap the first 2 elements at the top of stack A |
| `sb` | swap B - swap the first 2 elements at the top of stack B |
| `ss` | `sa` and `sb` at the same time |
| `pa` | push A - take the first element at the top of b and put it at the top of A |
| `pb` | push B - take the first element at the top of a and put it at the top of B |
| `ra` | rotate A - shift up all elements of stack A by 1. The first element becomes the last one |
| `rb` | rotate B - shift up all elements of stack B by 1. The first element becomes the last one |
| `rr` | `ra` and `rb` at the same time |
| `rra` | reverse rotate A - shift down all elements of stack A by 1. The last element becomes the first one |
| `rrb` | reverse rotate B - shift down all elements of stack B by 1. The last element becomes the first one |
| `rrr` | `rra` and `rrb` at the same time |


## Links ##

- [Notion](http://bit.ly/push_swap)

- [Lfrasson Tester](https://github.com/laisarena/push_swap_tester) (thank you for this amazing tester!)

- [Push_swap Visualizer](https://github.com/o-reo/push_swap_visualizer) (you will need python3)

- [Radix Sort](https://medium.com/nerd-for-tech/push-swap-tutorial-fa746e6aba1e) (I used this algorithm in my project)

## Functions ##
Only the following functions are allowed to be used in this project:
- write
- read
- malloc
- free
- exit

## Starting ##

```bash
# Clone this project
$ git clone https://github.com/anolivei/Push_swap42

# Access
$ cd Push_swap42

# Compile the program
$ make

# Run the project
$ ./push_swap 5 8 7 2

```

## Testing ##

obs: you must use bash terminal
```bash
# on linux OS
ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker_linux $ARG

# on Mac OS
ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker_Mac $ARG

# lfrasson tester
bash lfrasson_tester.sh

# push_swap visualizer
python3 python_visualizer.py `ruby -e "puts (-50..50).to_a.shuffle.join(' ')"`
```

<img width="500px" src="./images/push_swap.gif?raw=true" />

&#xa0;
<a href="#top">Back to top</a>
