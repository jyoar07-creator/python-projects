#include <stdio.h>

int main(){
    char sem;
    int ts, ss;
    

    printf("Which semester you are now?(Ex. 1/1st/First)\n");
    scanf("%c", &sem);

    if (sem == '1' || sem == "First" || sem == "1st") {
        printf("How many theoritical subjects you have in this semester?\n");
        scanf("%d", &ts);
        printf("How many practical subjects you have in this semester?\n");
        scanf("%d", &ss);
        total_sub = ts + ss;

        while(total_sub > 0){
            printf("Enter the Name of subject 01 %c: ", sub_name_01);
            scanf("%c", &sub_name_01);
            printf("Enter the Subject Code of subject 01 %c: ", sub_code_01);
            scanf("%c", &sub_code_01);
            printf("Enter the CG of subject 01 %d: ", CG_01);
            scanf("%d", &CG_01);
            printf("Enter the Credit of subject 01 %d: ", credit_01);
            scanf("%d", &credit_01);
            total_sub--;
        }
    }

    
    }