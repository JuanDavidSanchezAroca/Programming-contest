/*
Problem: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=96&page=show_problem&problem=1819 
accepted.
runtime: 0.024
*/

using namespace std;
#include<iostream>
#include<string>
#include<cstdio>

int main(){
	string str;
	int c=0,i,len;
	getline(cin,str);
	while(getline(cin,str)){
		len=str.length();
		c=0;
		if(str.find("_")!=string::npos)break;
		for(i=0;i<len;i++){
			if(str[i]=='o')c=(c*2)+1;
			if(str[i]==' ')c*=2;
		}
		printf("%c",c);
	}
	return 0;
}
