// Arnav Chandla 
// 1024170259
// (a) Write a program to concatenate one string to another string.

#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;
int main()
{	char arr1[4] = {'N', 'O', 'T', ' '};
	char arr2[10] = {'Y', 'O', 'U', 'R',' ','T', 'Y', 'P', 'E'};
	int n, m;
	n= sizeof(arr1)/sizeof(arr1[0]);
	
	m= sizeof(arr2)/sizeof(arr2[0]);


	char arr_final[n + m + 1];
	for (int i = 0; i < n; i++)
	{
	   arr_final[i] = arr1[i];
	}
	
	for (int i = 0; i < m; i++)
	{
	   arr_final[n + i] = arr2[i];
	}
	
	   arr_final[n+m] = '\0';
	   cout<<"Concatenated string:\t"<< arr_final <<endl;
	return 0;
}
