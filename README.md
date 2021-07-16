<h1 align="center">Push_swap</h1>

<h2 align="center">
Because Swap_push isn’t as natural
</h2> 

<p align="center">
  <img alt="Github top language" src="https://img.shields.io/github/languages/top/anolivei/Push_swap42?color=56BEB8">

  <img alt="Github language count" src="https://img.shields.io/github/languages/count/anolivei/Push_swap42?color=56BEB8">

  <img alt="Repository size" src="https://img.shields.io/github/repo-size/anolivei/Push_swap42?color=56BEB8">

</p>

<h2 align="center"> 
Status
</h2>

<h4 align="center"> 
	Push_swap: Under construction...  🚧
</h4> 

<p align="center">
  <a href="#about">About</a> &#xa0; | &#xa0;
  <a href="#technologies">Technologies</a> &#xa0; | &#xa0;
  <a href="#requirements">Requirements</a> &#xa0; | &#xa0;
  <a href="#starting">Starting</a> &#xa0; | &#xa0;
  <a href="https://github.com/anolivei" target="_blank">Author</a>
</p>

<br>

## About ##

- Push_swap is an algorithm project at school 42.
- We start with two stacks called A and B.
- A is filled with some random integers (without duplicates) and B is empty.
- We can perform a limited set of instructions on these stacks and the goal is to sort all these integers using the lowest possible number of actions.
- The limited set of instructions are:<br>
sa (swap a) : Swap the top two numbers in A<br>
sb (swap b) : Swap the top two numbers in B<br>
ss : sa + sb<br>
ra (rotate a) : Top number in A goes to bottom of A<br>
rb (rotate b) : Top number in B goes to bottom of B<br>
rr : ra + rb<br>
rra (reverse rotate a) : Bottom number in A goes to top of A<br>
rra (reverse rotate b) : Bottom number in B goes to top of B<br>
rrr : rra + rrb<br>
pa (push a) : Top number in B goes to top of A<br>
pb (push b) : Top number in A goes to top of B<br>
- [Notion](http://bit.ly/push_swap)
- [Subject](https://github.com/anolivei/Push_swap42/blob/main/en.subject.pdf)
## Technologies ##

The following tools were used in this project:


## Requirements ##

Before starting you need to have: [Git](https://git-scm.com)

## Starting ##

```shell
# Clone this project
$ git clone https://github.com/anolivei/Push_swap42

# Access
$ cd Push_swap42

# Compile the program
$ make

# Run the project
$ ./push_swap 5 8 7 2

```

To test (you must use bash terminal)
```bash
# on linux OS
ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker_linux $ARG

# on Mac OS
RG="4 67 3 87 23"; ./push_swap $ARG | ./checker_Mac $ARG
```

&#xa0;
<a href="#top">Back to top</a>
