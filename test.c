#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main() {
		int input;
		char *buffer;
    scanf("%d",&input);
    if(input > 0) {
    	buffer = (char*)malloc(input * sizeof(char*));
    	for(int i = 0; i < input; i++){
    		printf("Arbitrary code \n");
    	}    
    }
    
    return 0;
}
