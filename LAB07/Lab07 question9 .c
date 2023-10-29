#include<stdio.h>

int main() {
	int X;
    int Y;
    printf("How many branches are there?\n");
    scanf("%d", &X);
    printf("How many phones are there per branch?\n");
    scanf("%d", &Y);

    double bills[X][Y];	
    double totalBill = 0.0;
    double maxBill = 0.0;
    int maxBillBranchID = -1;
    int maxBillMobileID = -1;
	int branch;
	int mobile;
	for (branch = 0; branch < X; branch++) {
    	printf("Enter bills for branch %d:\n", branch);
    	for (mobile = 0; mobile < Y; mobile++) {
            printf("Enter bill for mobile phone %d: ", mobile);
            scanf("%lf", &bills[branch][mobile]);
            totalBill += bills[branch][mobile];
            if (bills[branch][mobile] > maxBill) {
                maxBill = bills[branch][mobile];
                maxBillBranchID = branch;//id of the branch is just the number 
                maxBillMobileID = mobile;//id of the phone is just the number of the phone
            }//end if
        }//end for loop of mobile phones
    }//end for loop
    printf(" Bill of all branches: %.1lf\n", totalBill);
    printf(" Bill of each branch:\n");
//check for branch bill and phone bill with the greatest number
    for (branch = 0; branch < X; branch++) {
        double branchTotal = 0.0;
        for (mobile = 0; mobile < Y; mobile++) {
            branchTotal += bills[branch][mobile];
        }//end for loop
        printf("Branch %d: %.1lf\n", branch, branchTotal);
    }//end for loop 
    printf("Branch ID where maximum bill arrived: %d\n", maxBillBranchID);
    printf("Branch and Mobile Phone IDs with the highest bill:\n");
    printf("Branch: %d\n", maxBillBranchID);
    printf("Mobile Phone: %d\n", maxBillMobileID);
    
    return 0;	
}//end main
