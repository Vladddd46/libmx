#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdbool.h>
#include <string.h>

char *mx_strnew(int size);
char *mx_file_to_str(char *file){
	
	char buff[1];

	int fd = open(file, O_RDONLY);
	if (fd == -1) {
		return NULL;
	}

	//считаем количество символов в файле
	int c = 0;
	while (read(fd, buff, 1)){
		c++;
	}
	close(fd);

	//выделяю память под текст из файла
	char *str = mx_strnew(c);
	
	//читаю файл и записываю его значения в строку str
	int fd2 = open(file, O_RDONLY);
	int i = 0;
	while(c){
		read(fd2, buff, 1);
		str[i] = buff[0];
		i++;
		c--;
	}

	return str;
}


