#include<iostream>
#include"Student.h"
#include<string.h>
using namespace std;

int main()
{
	Student S(0,"Abc");
	S.SetAttributes(2, "Ali");
	S.GetAttributes();
	system("pause");
	return 0;
}
