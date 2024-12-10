#include<stdio.h>
struct student {
    int  id;
    char name[58];
};
void dot( struct student ram){
    printf("student id %d\n", ram.id);
    printf("student name %s" ,ram.name);
    }
    int main()
    {
        struct student student1 ={101,"subham"};
        dot(student1);
        return 0;
    }