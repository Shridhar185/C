/* #include<stdio.h>
int main(){
    int myNumbers[] = {25, 50, 75, 100};
    printf("%lu", sizeof(myNumbers));    // Prints 20
    int length = sizeof(myNumbers) / sizeof(myNumbers[0]);  //prints 5
//___________OR__________________________
    int myNumbers[4];
    myNumbers[0] = 25;
    myNumbers[1] = 50;
    myNumbers[2] = 75;
    myNumbers[3] = 100;




// *******************************************
// //you can't do is directly assign a new set of values to the entire array after it has been declared. 
//     int array[5];
//     array = {1, 2, 3, 4, 5}; // This is not allowed in C
// //this is wrong______________
//     int arr1[5]={2,3,5,6,7}
//     int arr2[5]=arr1[5]
// ******************************************** 





//_________do this in this way______
    int arr1[6]={1,2,3,4,5,6}
    int arr2[6];
    for (int i = 0; i < 5; i++) {
        arr2[i] = arr1[i];

    }
//________or_______________________________
    // #include <string.h>
    // memcpy(arr2, arr1, sizeof(arr1)); 
//__________________________________________

}

 */






//________________multidimensional array is basically an array of arrays.
//______________________________________Patterns_________________________________________________
/* #include<stdio.h>
int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    for(int i=0;i<5;i++){
        for(int j=0;j<5-i;j++){
            printf("* ");
        }
        printf("\n");   
    }
    printf("\n");

    for(int i=0;i<5;i++){
        for(int j=0;j<5-i-1;j++){
            printf("  ");
        }
        for(int j=0;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    for(int i=0;i<5;i++){
        for(int j=0;j<i;j++){
            printf("  ");
        }
        for(int j=0;j<5-i;j++){
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("%d ",i);
        }
        printf("\n");
    }
    printf("\n");

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    printf("\n");

    int count=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(count<10){
                printf("%d  ",count);               //if used just to align wrt 1 and 2 digits
            }
            else{
                printf("%d ",count);
            } 
            count++;
        }
        printf("\n");
    }
    printf("\n");

    int count1=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            printf("%d ",count1);
            count1++;
        }
        printf("\n");
    }
    printf("\n");

    int count3=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5-i;j++){
            printf("%d ",count3);
            count3++;
        }
        printf("\n");
    }
    printf("\n");

    int count4=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5-i-1;j++){
            printf("  ");
        }
        for(int j=0;j<=i;j++){
            printf("%d ",count4);
            count4++;
        }
        printf("\n");
    }
    printf("\n");

    int count5=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<i;j++){
            printf("   ");
        }
        for(int j=0;j<5-i;j++){
            if(count5<10){
                printf("%d  ",count5);
                count5++;
            }
            else{
                printf("%d ",count5);
                count5++;
            }
        }
        printf("\n");
    }
    printf("\n");
} */








//_______________________________Adv Pattern_______________
#include<stdio.h>
int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            printf("* ");
        }
        for(int j=i+1;j<10-i-1;j++){
            printf("  ");
        }
        for(int j=10-i-1;j<10;j++){
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");



    for(int i=0;i<5;i++){
        for(int j=0;j<5-i;j++){
            printf("* ");
        }
        for(int j=5-i;j<5+i;j++){
            printf("  ");
        }
        
        for(int j=5+i;j<10;j++){
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");






    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i=5;i<10;i++){
        for(int j=0;j<10-i;j++){
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");





    for(int i=0;i<5;i++){
        for(int j=0;j<5-i-1;j++){
            printf("  ");
        }
        for(int j=5-i-1;j<5;j++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i=5;i<10;i++){
        for(int j=10-i;j<5;j++){
            printf("  ");
        }
        for(int j=0;j<10-i;j++){
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");



    

//--------------------------------------------------------------------------------
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            printf("* ");
        }
        for(int j=i+1;j<10-i-1;j++){
            printf("  ");
        }
        for(int j=10-i-1;j<10;j++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5-i;j++){
            printf("* ");
        }
        for(int j=5-i;j<5+i;j++){
            printf("  ");
        }
        for(int j=5+i;j<10;j++){
            printf("* ");
        }
        printf("\n");
    }
}




