# include <stdio.h>

int main(){
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	int A, B, C, D;
	scanf("%d %d %d %d", &A, &B, &C, &D);
	int S;
	S = a + b + c + d;
	int T;
	T = A + B + C + D;
	if(S>T){
		printf("%d\n",S);
	}
	if(T>S){
		printf("%d\n",T);
	}
	else if(T == S){
		printf("%d\n",S);
	}
}