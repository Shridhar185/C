/* *short-hand if else, which is known as the ternary operator because it consists of three operands.
*When you know exactly how many times you want to loop through a block of code, use the for loop instead of a while loop:
 
unsigned is a keyword-->datatype can hold only positive values with 0
Data Type	        Size (bytes)	Format Specifier  	    range
char			        1		        %c		        -128 to 127 
unsigned char		    1		        %c		        0 to 255
int			            4		    %d or %i	        -2,147,483,648 to 2,147,483,647
unsigned int		    4		        %u		        0 to 4,294,967,295 
short			        2		        %hd		        -32,768 to 32,767
unsigned short		    2		        %hu		        0 to 65,535
long			     4 or 8		    %ld or %lu
unsigned long		 4 or 8		        %lu
long long		        8		        %lld		    -(2^63) to (2^63)-1
unsigned long long	    8		        %llu		    0 to (2^64)-1
float			        4		        %f		        6 decimal digits precision
double			        8		        %lf		        10 decimal digits of precision.
long double		    12 or 16	        %Lf
void			        N/A		        N/A
 */




/* #include<stdio.h>
#include <limits.h>         //FOR LIMITS
#include <stdbool.h>        //FOR BOOLEANS
int main(){
    printf("Range of char: %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("Range of int: %d to %d\n", INT_MIN, INT_MAX);
    printf("Range of long: %ld to %ld\n", LONG_MIN, LONG_MAX);
    bool flag=true;
    printf("%d\n",flag);
    flag=false;
    printf("%d\n",flag);
} */






//..............................Character....................................
//('')for character and ("")for character array
/* 
#include<stdio.h>
int main(){
    char a1='hello';
    char a2=65;
    char a3=97;
    char arr[]="hello";             //character array
    printf("%c\n",a1);              //a
    printf("%hd\n",a1);             //97(short)
    printf("%d\n",a1);              //97(int)
    printf("%f\n",a1);              //0.000000(float)
    printf("%c\n",a2);              //A
    printf("%d\n",a2);              //65
    printf("%c\n",a3);              //a  
    printf("%c\n",arr[0]);          //h
    printf("%c\n",arr);             //random char
    printf("%s\n",arr);             //hello
    printf("%d\n",arr);             //random number

}
 */







//..............................Integer.............................................
#include<stdio.h>
int main(){
    int a1=10;
    printf("%d\n",a1);          //10
    printf("%hd\n",a1);         //10
    printf("%f\n",a1);          //random decimal

    printf("%d\n", sizeof(a1));  //4
    printf("%hd\n",sizeof(a1));
    printf("%ld\n",sizeof(a1));
    printf("%lu\n",sizeof(a1));


    int     i1=1e6;             //e or E
    float   f1=1e2;
    double  d1=1e3;
    printf("%d\n",i1);          //1000000
    printf("%f\n",f1);          //100.000000
    printf("%lf\n",d1);         //1000.000000



}