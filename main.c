#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv){
	
	if(argc < 2){
		printf("No command specified! Use fpm -S <package>!\n");
		return 0;
	}
	
	if(strcmp(argv[1],"-S") == 0){
	
	if(argc < 3){
		printf("No package specified! Use fpm -S <package>!\n");
		return 0;
	}
	
	char result[150];
	
	strcat(result,"cd /tmp && git clone https://aur.archlinux.org/");
	strcat(result,argv[2]);
	strcat(result,".git && cd ");
	strcat(result,argv[2]);
	strcat(result," && makepkg -si");
	
	system(result);
	}else{
		printf("Command not found!");
	}
	return 0;
	
}
