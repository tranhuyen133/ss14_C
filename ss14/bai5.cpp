#include <stdio.h>
#include <string.h> 

int main() {

    char chuoi[] = "hello world"; 
    
    int dem = 0;
    int trong_tu = 0; 
    
    printf("Chuoi hien tai la: %s\n", chuoi);
    
    for(int i = 0; i < strlen(chuoi); i++) {
        if(chuoi[i] != ' ') {
            if(!trong_tu) {
                dem++;
                trong_tu = 1; 
            }
        } else {
            trong_tu = 0; 
        }
    }
    
    printf("So tu trong chuoi la: %d\n", dem);
    
    return 0;
}

