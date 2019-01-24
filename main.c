#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv){
	
	if(argc < 2){
		printf("No command specified! Use fpm -S <packages> or fpm -R <packages>!\n");
		return 0;
	}
	
	if(strcmp(argv[1],"-S") == 0){
	
		if(argc < 3){
			printf("No packages specified! Use fpm -S <packages>!\n");
			return 0;
		}
		
		for(int i = 2; i < argc; i++){
			
			char *result = malloc(500);
			
			strcat(result,"cd /tmp && rm -rf ");
			strcat(result, argv[i]);
			strcat(result," && git clone https://aur.archlinux.org/");
			strcat(result,argv[i]);
			strcat(result,".git && cd ");
			strcat(result,argv[i]);
			strcat(result," && makepkg -si");
			
			system(result);
			
			free(result);
		}
	}else if(strcmp(argv[1],"-R") == 0){
		
		if(argc < 3){
                        printf("No packages specified! Use fpm -R <packages>!\n");
                        return 0;
                }
		
		char *names = malloc(1000);
		
		strcat(names, "sudo pacman -R ");
		
                for(int i = 2; i < argc; i++){
			
			strcat(names,argv[i]);
			strcat(names," ");
			
		}
		
		system(names);
		
		free(names);
		
	}else{
		printf("Command not found!");
	}
	return 0;
	
}
