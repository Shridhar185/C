//Structures (also called structs) are a way to group several related variables into one place.
// Structure declaration by struct keyword and it contain members(int char ...variables)
//structure end with semicolon not have (=) like intialize

//why structure writien outside of int 

#include<stdio.h>
struct mystr{
    char name[25];
    int usn;
    char div;
    float fee;
};
int main(){
     
    struct mystr s1;
    //s1.name="ram";  ....why error
    s1.usn=1;
    s1.div='a';
    //here fee is same for all students how make that access to each students
    s1.fee=100000;
    printf("details of student 1\nName: %s\nUSN:%d\nDivision:%c\nFees:%f",s1.name,s1.usn,s1.div,s1.fee);
}