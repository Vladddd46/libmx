#include "libmx.h"

int mx_get_char_index(char *str, char c){
	
	
	if (!(str)|| !(c)){
		return -2;
	}

	int i = 0;
	while(str[i]){
		if (str[i] == c){
			return i;
		}
		i++;
	}

	return -1;
}

