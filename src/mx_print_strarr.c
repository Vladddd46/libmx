#include "libmx.h"


void mx_print_strarr(char **arr, char *delim){


	int i = 0;
	while(arr[i]){
		mx_printstr(arr[i]);
		mx_printstr(delim);
		i++;
	}
	mx_printchar('\n');
}



