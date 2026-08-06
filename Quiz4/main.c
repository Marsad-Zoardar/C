#include <stdio.h>

/*
int main()
{
	int a = 0, i = 0;
    for(i = 0; i < 5; i++){
        a++;
        if(i==3)
            break;
    }
    
    printf("%d\n", a);
        
}


void foo();

int main(){
    printf("1 ");
    foo();
}

void foo(){
    printf("2 ");
}


void m();

void main(){
    m();
}

void m(){
    printf("hi");
    m();
}

*/

int x = 5;
void main(){
    int x = 3;
    m();
    printf("%d", x);
}

void m(){
    x = 8;
    n();
}
void n(){
    printf("%d", x);
}