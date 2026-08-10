#include <stdio.h>

int main(void)
{
	int num;
	
	printf("N*N 배열, N 입력 : ");
	scanf("%d", &num);
	
	int arr[num][num];

	int limit = num;
	int val = 1;
	
	int Dy = 0, Dx = 0;
	int Sy = 1, Sx = num-1;
	int Ay = num-1, Ax = num-2;
	int Wy = num-2, Wx = 0;
	
	while(val<=num*num){
		for(int i=0; i<limit; i++){ // D
			arr[Dy][Dx+i] = val++;
		}
		++Dy && ++Dx;
		
		--limit;
		
		for(int i=0; i<limit; i++){ // S
			arr[Sy+i][Sx] = val++;
		}
		++Sy && --Sx;
		
		for(int i=0; i<limit; i++){ // A
			arr[Ay][Ax-i] = val++;
		}
		--Ay && --Ax;
		
		--limit;
		
		for(int i=0; i<limit; i++){ // W
			arr[Wy-i][Wx] = val++;
		}
		--Wy && ++Wx;
	}
	
	for(int i=0; i<num; i++){
		for(int j=0; j<num; j++){
		printf("%-6d", arr[i][j]);
		}
		printf("\n");
	}
}	