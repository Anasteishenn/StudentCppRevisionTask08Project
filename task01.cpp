﻿#include "tasks.h"

/*	Task 01. The same Numbers [совпадающие числа]
 *
 *	Даны четыре целых числа. Определите, сколько из них совпадающих.
 *	Если числа не совпадают, то необходимо возвратить ноль.
 *
 *	Формат входных данных [input]
 *	На вход даётся четыре целых числа в диапазоне типа int.
 *
 *	Формат выходных данных [output]
 *	Возвратите количество совпадающих чисел или ноль, если таких чисел нет.
 *
 *	[ input 1]: 7 7 7 7
 *	[output 1]: 4
 *
 *	[ input 2]: 7 7 7 8
 *	[output 2]: 3
 *
 *	[ input 3]: 7 7 8 9
 *	[output 3]: 2
 *
 *	[ input 4]: 6 7 8 9
 *	[output 4]: 0
 */

int task01(int a, int b, int c, int d) {
	if (a > b) {
		swap(a, b);
	}
	if (b > c) {
		swap(c, b);
	}
	if (c > d) {
		swap(c, d);
	}
	if (a > b) {
		swap(a, b);
	}
	if (b > c) {
		swap(c, b);
	}
	if (a > b) {
		swap(a, b);
	}

	return a == b and b == c and c == d ? 4 :
		a == b and b == c ? 3 :
		a == b ? 2 : 0;
}


