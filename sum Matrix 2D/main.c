#include <stdio.h>
#include <stdlib.h>
#include "func.h"

int main()
{
		int **A,**B,**C,lines,cols;
		lines=line_value();
		cols=cols_value();
		A=matrix(lines,cols);
		B=matrix(lines,cols);
		add("A");
		fillup(A,lines,cols);
		add("B");
		fillup(B,lines,cols);
		add("A");
		display(A,lines,cols);
		add("B");
		display(B,lines,cols);
		C=sum(A,B,lines,cols);
		add("SUM A+B");
		display(C,lines,cols);
		free_matrix(A,lines);
		free_matrix(B,lines);
		free_matrix(C,lines);
		return (0);
}

