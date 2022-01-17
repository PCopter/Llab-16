#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *); 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);  
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}


void shuffle(int *w,int *x,int *y,int *z){
	int a[4];
	int b[4];
	int q = 0;
	int p = 0;
	int e = 0;
	int r = 0;
	a[0] = *w;
	a[1] = *x;
	a[2] = *y;
	a[3] = *z;
	q = rand()%4;
	b[0]= a[q];
	a[q]=0;

		do{
			p = rand()%4;
		}while(a[p]==0);
		b[1] = a[p];
		a[p] = 0;

		do{
			e = rand()%4;
		}while(a[e]==0);
		b[2] = a[e];
		a[e] = 0;

		do{
			r = rand()%4;
		}while(a[r]==0);
		b[3] = a[r];
		

		*w=b[0];
		*x=b[1];
		*y=b[2];
		*z=b[3];	
	
}