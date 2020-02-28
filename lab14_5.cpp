#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *); //Modify input arguments to pointer
void swap(int &, int &); 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); //Modify input arguments to pointer 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

//Write definition of shuffle() using pointer here 

void shuffle(int *a,int *b, int *c, int *d){
	for(int i=0; i<5; i++){
		int t=rand()%6+1;
		switch (t)
		{
		case 1:
			swap(*a,*b);
			break;
		case 2:
			swap(*a,*c);
			break;
		case 3:
			swap(*a,*d);
			break;
		case 4:
			swap(*b,*c);
			break;
		case 5:
			swap(*b,*d);
			break;
		default:
			swap(*c,*d);
			break;
		}
	}
}

void swap(int &x, int &y){
	int t=x;
	x=y;
	y=t; 
}
