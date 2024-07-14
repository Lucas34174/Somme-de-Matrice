#include <stdio.h>
#include <stdlib.h>
#include "func.h"


int line_value(void)
{
		int value;
		printf("Enter line's number: ");
		do
		{
				scanf("%d",&value);
		}while(value<=0);
		return (value);
}

int cols_value(void)
{
		int value;
		printf("Enter col's number: ");
		do
		{
				scanf("%d",&value);
		}while(value<=0);
		return (value);
}

int **matrix(int lines,int cols)
{
		int i;
		int **tab;
		tab=(int**)malloc(lines*sizeof(int*));
		if(tab==NULL)
		{
				fprintf(stdout,"Error allocation memory\n");
				exit (1);
		}
		for(i=0;i<lines;i++)
		{
				tab[i]=(int*)malloc(cols*sizeof(int));
				if(tab[i]==NULL)
				{
						fprintf(stdout,"Error allocation memory\n");
						exit (1);
				}
		}
		return (tab);
}

void fillup(int **tab,int lines,int cols)
{
		int i,j;
		for(i=0;i<lines;i++)
		{
				printf("[%d]: ",i);
				for(j=0;j<cols;j++)
				{		
						scanf("%d",&tab[i][j]);
				}
		}
}

void display(int **tab,int lines,int cols)
{
		int i,j;
		for(i=0;i<lines;i++)
		{
				printf("[");
				for(j=0;j<cols;j++)
				{
						printf("%3d%s",tab[i][j],(j==cols-1)?"]\n":" ");
				}
		}
}

int **sum(int **A,int **B,int lines,int cols)
{
		int **C;
		int i,j;
		C=matrix(lines,cols);
		for(i=0;i<lines;i++)
		{
				for(j=0;j<cols;j++)
				{
						C[i][j]=A[i][j]+B[i][j];
				}
		}
		return (C);
}

void free_matrix(int **tab,int line)
{
		int i;
		for(i=0;i<line;i++)
		{
				free(tab[i]);
		}
		free(tab);
}

void add(char *phrase)
{
		printf("\n\n\tMatrix ==> %s <==\n\n",phrase);
}
