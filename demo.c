#include "mindbang.h"

int main() {
	mindbang_interpret("\
1 []><[][]><[][]><[][]><[][]><[][]><[][]><[][]><[][]><[][]><[]\
2 []>+>+>++>++<[>[->++++<<+++>]<<]>----.>->+.+++++++..+++.<+[]\
3 [ This is hellbox, a 104 command Hello World               ]\
4 [   >+>+>++>++<[>[->++++<<+++>]<<]>----.>>+.+++++++..+++   ]\
5 [   .>.<<<+++++++++++++++.>>.+++.------.--------.>+.>++.   ]\
6 [ -- Robert de Bath -- 2014                                ]\
7 []>>.<<<+++++++++++++++.>>.+++.------.--------.>+.+>++.<<<[]\
8 []><[][]><[][]><[][]><[][]><[][]><[][]><[][]><[][]><[][]><[]\
	\0");
	return 0;
}
