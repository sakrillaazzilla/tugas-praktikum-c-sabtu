#include <stdio.h>

int main(){
	int N;
	
	printf ("masukan nilai N ");
	scanf ("%d" , &N );
	
	
	if(N > 50 ){
	   N= N - 25;
	   
	}
	
	N= N+10;
	printf("nilai N setelah pemrosesan: %d\n" , N);
	
    return 0;
	
}
