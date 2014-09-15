#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include "string.h"

void main(void)
{

	int size = 10;
	char *buf = (char *)malloc(sizeof(char)*5);
        char temp[5];

	while(fgets(temp,5,stdin) != NULL){
		strcat(buf,temp);
		if(strlen(temp)>=4 && temp[3] != '\n' ){
			
			printf("length %d,%c\n",(int)strlen(temp), temp[4]);
			size += 5;
			buf = realloc(buf, size*sizeof(char));
		}
		else
			break;
		
	}





		printf("%d, %s\n",(int)strlen(buf),buf);
		char buf1[(int)strlen(buf)*2];
		for (p = 0; p < (int)strlen(buf); p++) {
			if (buf[p] == '|') {
				//is_pipe = 1;
				buf1[index++] = ' ';
				buf1[index++] = buf[p];
				buf1[index++] = ' ';
			} else
				buf1[index++] = buf[p];
		}
		buf1[(int)strlen(buf)] = '\0';
		printf("%d, %s\n",(int)strlen(buf1),buf1);
}
