//Author: Md Marsad Zoardar
//August 14, 2026
//Structures Quiz - 15


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Question 1
//struct student{
//    int no;
//    char name[20];
//};
//
////Question 2
//struct p{
//    int k;
//    char c;
//    float f;
//};

//Question 3
//struct temp{
//    int a;
//    int b;
//    int c;
//};
    //Question 7
//struct student{
//        char *name;
//};
//
//struct student s[2];    

//Question 8
//struct point{
//    int x;
//    int y;
//};
//
//void foo(struct point p[]){
//    printf("%d\n", p->x);
//}

//Question 9
//struct student{
//    int no;
//    char name[20];
//};

//Question 13
//struct student{
//    char *c;
//};

//Question 15
//struct temp{
//    int a;
//}s;
//
//void func(struct temp s){
//    s.a = 10;
//    printf("%d\t", s.a);
//}

//Question 17
//struct student{
//    char *name;
//};
//
//struct student s;
//
//struct student fun(void){
//    s.name = "John";
//    printf("%s\n", s.name);
//    s.name = "Jason";
//    return s;
//}

//Question 18
struct point{
    int x;
    int y;
};

void foo(struct point *p){
    p->x++;
    printf("%d\n", p->x);
}

int main(int argc, char **argv)
{
	//Question 1
//    struct student s;
//    s.no = 8;
//    printf("%d\n",s.no);
//    
//    //Question 2
//    struct p x = {.c = 97, .f = 3, .k = 1};
//    printf("%f\n", x.f);
    
    //Question 3
//    struct temp p[] = {{1,2,3}, {4,5,6}, {7,8,9}};
    //Question 7
//    s[0].name = "Jason";
//    s[1] = s[0];
//    
//    printf("%s%s", s[0].name, s[1].name);
//    s[1].name = "Fedin";
//    printf("%s%s", s[0].name, s[1].name);
//    
	//Question 8
//    struct point p1[] = {1,2,3,4};
//    foo(p1);

    //Question 9
//    struct student s = {10, {'J', 'a', 's', 'o', 'n'}};
//    printf("%s",s.name);
    
    //Question 13
//    struct student m;
//    struct student *s = &m;
//    
//    s->c = "hello";
//    printf("%s\n", s->c);

    //Question 14
//    struct car{
//        int km;
//    }*p1[2];
//    
//    struct car c1 = {1234};
//    p1[0] = &c1;
//    
//    printf("%d ", p1[0]->km);
    
    //Question 15
//    func(s);
//    printf("%d\t", s.a);
    
    //Question 17
//    struct student m = fun();
//    printf("%s\n", m.name);
//    m.name = "Fedin";
//    printf("%s\n", s.name);
    
    //Question 18
    struct point p1 = {1,2};
    foo(&p1);
    
    return 0;
}
