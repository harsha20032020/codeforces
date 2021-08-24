#include <stdio.h> 


int main ( ) { 

    char arr[60] = { 0};
    int i = 0 ;

    for ( int i = 0 ; i < 52 ; i++) { 
        scanf ( "%d" , &arr[i]);
    }
    printf ("\n");
    
    for ( int i = 0 ; i < 52 ; i++ ) { 
        printf ( "%c", arr[i]);
    }
    printf ( "\n[yes\\no]\n\nif yes, then type ''yes i crie'' in the terminal after this program ends\n"); 
    

    return 0;
}