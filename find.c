#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#define MAXLINE 1000
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int getline (char *line, int max);

int main(int argc, char *argv[]) {
	char line[MAXLINE];
	int found = 0;
	
	if (argc != 2){
		printf("Usage: find pattern\n");
	}
	else{
		while (getline(line, MAXLINE)>0){
			if(strstr(line, argv[1])!=NULL){
				printf("%s", line);
				found++;
			}
		}	
	}
	return found;
}
int getline (char *line,int max){
	int c;
	char *t=line;
	
	while(--max>0&&(c=getchar())!=EOF&&c!='\n'){
		*line++ = c;
	}
	if(c=='\n'){
		*line++ = c;
	}
	*line = '\0';
	return line - t;
}
