//strings are represented as arrays of characters terminated by a null character ('\0')
//without null arr2 can print twice 

/* 
#include<stdio.h>
int main(){
    char arr1[] = "Hello World!";
    char arr2[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!','\0'};
    printf("%s\n", arr1);              
    printf("%s\n", arr2);
    arr1[0]='s';        
    printf("%s\n", arr1);           //sello world!
    arr1[4]='\0';                   //terminate string at 4th index
    printf("%s\n", arr1);           //sell
    char arr3[]="it\'s world";
    printf("%s\n", arr3);           //it's world
 
}
 */

//__________use header of string to access its functions_______________________
//why string length is less than size of string by 1....
//diff in strlen and sizeof...
/* 
#include<stdio.h>
#include<string.h>
int main(){
    char arr1[] = "Hello World!";
    printf("%d\n", strlen(arr1));               //12
    printf("%d\n", sizeof(arr1));               //13
    
    char arr2[100] = "Hello World!";
    printf("%d\n", strlen(arr2));               //12
    printf("%d\n", sizeof(arr2));               //100


//error.........
    // char str1[] = "Hello ";
    // char str2[] = "World!";
    // char str3[];
    // char str4[]=strcat(str1, str2);      		//concatenate
    // printf("%s\n",str4);
    // strcpy(str3, str1);	  		                //copy str1 to str3
    // printf("%s\n",str4);
    // printf("%d\n", strcmp(str1, str2));	        //to compare returns 0 if equal
  
}

 */






//scanf() function has some limitations: it considers space (whitespace, tabs, etc) as a terminating character
//use the fgets() function to read a line of text


#include<stdio.h>
int main(){
    char str[100];
    printf("Enter string: ");

    // scanf("%s",&str);
    // printf("The entered string is: %s",str);

    fgets(str,sizeof(str),stdin);
    printf("The full string: %s",str);




}














