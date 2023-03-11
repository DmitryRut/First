// Copyright 2022 UNN-IASR
#include "fun.h"
#include <iostream>

int main() {
	char str[] = { " M 4R Kq4 vbim " };
	int n1, n2, n3;
	n1 = faStr1(str);
	n2 = faStr2(str);
	n3 = faStr3(str);
	printf("%d\n", n1);
	printf("%d\n", n2);
	printf("%d", n3);
	return 0;
}
