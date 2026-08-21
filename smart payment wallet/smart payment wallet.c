#include<stdio.h>
#include<string.h>
struct Payment{
    int transactionid;
    char name[39];
    float amount;
    
    int type;
union{
    char upiid[30];
    char cardnumber[20];
    float cashamount;
}payment;
};
int main(){
    struct Payment p;
    printf("***smart payment wallet***");
    
    printf("\nenter tranasctionid:");
    scanf("%d",&p.transactionid);
    
    printf("\nenter name:");
    scanf("%s",&p.name);
    
    printf("\n enter amount:");
    scanf("%f",&p.amount);
    
    printf("selected the payment method \n");
    printf("1.upi\n");
    printf("2.card\n");
    printf("3.cash\n");
    
    printf("enter choice:");
    scanf("%d",&p.type);
    
    switch(p.type){
         case 1:
             printf("enter upi id:");
             scanf("%s",&p.payment.upiid);
             break;
         
         case 2:
             printf("enter card number:");
             scanf("%d",&p.payment.cardnumber);
             break;
         
         case 3:
             p.payment. cashamount= p.amount;
             break;
         
         default:
             printf("invalid payment method \n");
         
    }
    
    printf("======payment receipt=======\n");   
    
    printf("transaction id:%d \n",p.transactionid);  
    printf("customer name:%s \n",p.name);
    printf("amount:%.2f",p.amount);
    
    switch(p.type) {
         case1:
         printf("payment type:upi");
         printf("upi id : %s\n",p.payment.upiid);
         break;
         
         case2:
         printf("payment type:card");
         printf("card number : %d\n",p.payment.cardnumber);
         break;
         
         case3:
         printf("payment type:cash");
         printf("amount : %.2f\n",p.payment.cashamount);
         break;
         
    }     
}