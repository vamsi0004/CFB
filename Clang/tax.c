 #include <stdio.h>
  int main() {
        float income, tax;

        
        printf("Enter your income:");
        scanf("%f", &income);


        if (income > 800000) {
                tax = 92000 + ((income - 180000) * 30)/100;
        } else if (income > 500000) {
                tax = 32000 + ((income - 180000) * 20)/100;
        } else if (income > 180000) {
                tax = ((income - 180000) * 10)/100;
        } else {
                tax = 0;
        }

       
        printf("Income tax for %fis %f\n", income, tax);
        return 0;
  }