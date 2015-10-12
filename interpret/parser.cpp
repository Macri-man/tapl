#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <sstream>
#include <cstring>

enum terms{
	zero,
	succ,
	pred,
	iszero,
	conditional
};

enum values{
	T,
	F,
	nv
};

enum nv{
	zero,
	succ,
};



bool iszero(int num){(num==0) return true: return false;}

int pred(int num){ (num==0) return --num;}

int succ(int num){ (num==0) return ++num;}