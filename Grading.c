#include<stdio.h>
int main(){

    float marks;
    printf("Enter your marks: ");
    scanf("%f", &marks);

    if(marks >= 90){
        printf("Grade: A+  & Grade Point: 4.0\n");
    } else if(marks >= 75){
        printf("Grade: A  & Grade Point: 3.75\n");
    } else if(marks >= 70){
        printf("Grade: A-  & Grade Point: 3.50\n");
    } else if(marks >= 65){
        printf("Grade: B+  & Grade Point: 3.25\n");
    } else if (marks >= 60) {
        printf("Grade: B  & Grade Point: 3.00\n");
    }else if (marks >= 55) {
        printf("Grade: B-  & Grade Point: 2.75\n");
    }else if (marks >= 50) {
        printf("Grade: C+  & Grade Point: 2.50\n");
    }else if (marks >= 45) {
        printf("Grade: C  & Grade Point: 2.25\n");
    }else if (marks >= 40) {
        printf("Grade: D  & Grade Point: 2.00\n");
    }
    else 
      {
        printf("Grade: F  & Grade Point: 0.00\n");
    }
    return 0;
}