#include "../include/string.h"

int strcmp(const char *str1,const char *str2){
	if ((NULL == str1) && (NULL == str2)){
		return 0;
	}
    int rel=0;
	while (!( rel = *(unsigned char*)str1 - *(unsigned char*)str2 ) && *str1){
		str1++;
		str2++;
	}
	return rel;
}
int strlen(const char *str){
	if (NULL == str){
		return 0;
	}
	int num=0;
	while (str[i]!="\0")
		i++;
	return i;
}