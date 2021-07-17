#!/bin/bash
echo " "
echo "----------------------"
echo "push_swap testing args"
echo "----------------------"
echo " "

make

echo "Testing char"
./push_swap 1 2 a 65 77
echo "Testing duplicate"
./push_swap 45 76 698 5 45
echo "Testing duplicate"
./push_swap 45 76 698 5 -5 25 848 54984 15165 55 7 996 0 -11 25 99 852 12556
echo "Testing ok"
./push_swap 45 76 698 5 -5 25 848 54984 15165 55 7 996 0 -11 -25
echo "Testing ok"
./push_swap 45 25 8 78 28
echo "Testing long_int_pos"
./push_swap 1 8 66 987 9999999999999
echo "Testing long_int_neg"
./push_swap 55 -985475555224445555 48 98 75

make fclean
