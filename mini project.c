#include<stdio.h>
void display();
void load(int a);
int main()
{
    int i=0,a,b,mc,z=0;
    long long int p,phone;
    char items[15][14]={"RICE    ","WHEAT   ","YELLOW PULSE","GREEN PLUSE","BLACK PULSES","SALT    ","RED CHILLI","BISCUITS","DALMOT  ","CHIPS   ","KETCHUP ","SHAMPOO ","SOAP    ","DETERGENT","TOILET CLEANER"};
    float c=1.0,y=0.0;
float rt [15][2];
for(i=0;i<15;i++)
{ rt[i][0]=c;
     c=c+1;
    }
rt[0][1]=50;
rt[1][1]=30;
rt[2][1]=60;
rt[3][1]=55;
rt[4][1]=45;
rt[5][1]=30;
rt[6][1]=15;
rt[7][1]=30;
rt[8][1]=20;
rt[9][1]=15;
rt[10][1]=100;
rt[11][1]=55;
rt[12][1]=25;
rt[13][1]=65;
rt[14][1]=75;
    char na[100];

    int d[15];int e[15];
    for(int j=0;j<15;j++)
    {d[j]=20;}

    printf("Press 0 for new bill and press enter\nPress 1 to show the last bill and press enter\n\n");
    scanf("%d",&a);
    printf("LOADING");
    for(int j=0;j<11;j++)
    {
        load(9999999);
        printf(" .");}
    printf("\n\n");
    system("cls");
    if(a==1)
    {printf("----------------------------------------------------------------------\n");
    printf("\n\n\t\tJIIT DEPARTMENTAL STORE\n\n");
    printf("BILL N0: 233\t\tCOSTUMER NAME: Shivam Arora\t\tCONTACT NUMBER: 8769223456\n\n\nSR.NO.\t\tITEM\t\tQUANTITY\t\tPRICE/UNIT\t\tAMT\n\n1\t\tRICE\t\t2\t\t\t50\t\t\t100\n2\t\tSalt\t\t2\t\t\t20\t\t\t40\n\n\t\tTOTAL:\t\t\t\t\t\t\t\t140\n\t\tMEMBER DISCOUNT:\t\t\t\t\t\tNA\n\t\tAMT INCL. GST(18 perc.):\t\t\t\t\t165.20000\n\n----------------------------------------------------------------------\nPAID BY CARD[58xx xxxx xx76](APPROVED)\n\nTHANKYOU FOR SHOPPING FROM JIIT STORE!!!\n");
    printf("----------------------------------------------------------------------\n");
    }
    else
    {printf("\nEnter your name\n");
      getchar();
      gets(na);
    printf("\nEnter contact number\n");
    scanf("%lld",&phone);
    printf("\nEnter membership code\n");
    scanf("%d",&mc);
    printf("LOADING");
    for(int j=0;j<11;j++)
    {
        load(9999999);
        printf(" .");}
    printf("\n\n");
    system("cls");
    printf("----------------------------------------------------------------------\n");
    display( );
    printf("----------------------------------------------------------------------\n");

    for(int j=0;d[j]!=0;j++)
    {printf("\nEnter Product Code:");
    scanf("%d",&d[j]);
    if(d[j]>=1&&d[j]<=6)
    {printf("Enter quantity in kgs:");
    scanf("%d",&e[j]);
    z++;}
    else if(d[j]>=7&&d[j]<=15)
    {printf("Enter the no. of units:");
    scanf("%d",&e[j]);
    z++;}
    else
    {break;}}
    printf("LOADING");
    for(int j=0;j<11;j++)
    {
        load(9999999);
        printf(" .");}
    printf("\n\n");
    system("cls");
    printf("----------------------------------------------------------------------\n");
    printf("\n\n\t\tJIIT DEPARTMENTAL STORE\n\nBILL NO.: 234\tCOSTUMER NAME: %s\tContact Number: %lld\n\n\n",na,phone);
    printf("SR.NO.\tITEM\t\t\t\t\tQUANTITY\tPRICE/UNIT\tAMT.\n\n");
    for(int j=0;j<z;j++)
    {
        printf("%d\t%s\t\t\t\t\t%d\t%f\t%f\n",j+1,items[d[j]-1],e[j],rt[j][1],e[j]*rt[j][1]);
        y=y+(e[j]*rt[j][1]);
    }
    printf("\n\t\t\t\tTOTAL AMT.:                  \t\t\t%f\n",y);
    if((mc>=110&&mc<=127)||(mc>=207&&mc<=230))
    {
        printf("\t\t\t\tMEMBER DISCOUNT:             \t\t\tApplicable(5percent)\n");
        y=y-(0.05*y);
        printf("\t\t\t\tPRICE AFTER DISCOUNT:        \t\t\t%f\n",y);
    }
    else
    {
        printf("\t\t\t\tMEMBER DISCOUNT:             \t\t\tNot Applicable\n");
        printf("\t\t\t\tPRICE AFTER DISCOUNT:        \t\t\t%f\n",y);
    }
    printf("\t\t\t\tPRICE PAYABLE INCL. GST(18per.): \t\t%f\n",1.18*y);
    int ch;
    printf("\n\n----------------------------------------------------------------------\n");
    printf("PRESS 1 FOR PAYMENT THROUGH CASH.\nPRESS 2 FOR PAYMENT THROUGH DEBIT/CREDIT CARD\n");
    scanf("%d",&ch);
    switch(ch){
    case 1:printf("YOU HAVE CHOSEN CASH PAYMENT PLEASE PAY TO THE CASHIER\n");
    break;
    case 2:printf("YOU HAVE CHOSEN PAYMENT THROUGH CARD PLEASE ENTER YOUR CREDIT/DEBIT CARD\n");
    scanf("%lld",&p);
    printf("LOADING");
    for(int j=0;j<11;j++)
    {
        load(9999999);
        printf(" .");}
    printf("\n");

    int che=0;
    while(che==0)
    {
        che=valid(p);
    if(che==1)
    {printf("-----------------------------------\nPAYMENT THROUGH CARD XXXX XXXX XXXX %lld(APPROVED)\n",p%10000);}
    else
    {printf("\n------------------ENTER A VALID CARD NUMBER------------------\n");
    scanf("%lld",&p);
    printf("LOADING");
    for(int j=0;j<11;j++)
    {
        load(9999999);
        printf(" .");}
    printf("\n");}}
    break;
    default:printf("Wrong choice\n");
    break;}
    printf("-----------------------------------\nTHANKYOU FOR SHOPPING FROM JIIT STORE!!!\n\n");
}
    printf("\nPRESS ANY NUMBER TO GO MAIN MENU\n");
    scanf("%d",&b);
    printf("LOADING");
    for(int j=0;j<11;j++)
    {
        load(9999999);
        printf(" .");}
    printf("\n\n");
    system("cls");
    main();
   return 0;
}
void display( )

{
    printf("RICE          \t(PRODUCT CODE:1)\tPRICE PER KG:50\n");

    printf("WHEAT         \t(PRODUCT CODE:2)\tPRICE PER KG:30\n");

    printf("YELLOW PULSES \t(PRODUCT CODE:3)\tPRICE PER KG:60\n");

    printf("GREEN PULSES  \t(PRODUCT CODE:4)\tPRICE PER KG:55\n");

    printf("BLACK PULSES  \t(PRODUCT CODE:5)\tPRICE PER KG:45\n");

    printf("SALT          \t(PRODUCT CODE:6)\tPRICE PER KG:30\n");

    printf("RED CHILLI    \t(PRODUCT CODE:7)\tPRICE PER KG:15\n");

    printf("BUISCUIT      \t(PRODUCT CODE:8)\tPRICE PER PACKET:30\n");

    printf("DALMOT        \t(PRODUCT CODE:9)\tPRICE PER PACKET:20\n");

    printf("CHIPS         \t(PRODUCT CODE:10)\tPRICE PER PACKET:15\n");

    printf("KETCHUP       \t(PRODUCT CODE:11)\tPRICE PER PACKET:100\n");

    printf("SHAMPOO       \t(PRODUCT CODE:12)\tPRICE PER PACKET:55\n");

    printf("SOAP          \t(PRODUCT CODE:13)\tPRICE PER PACKET:25\n");

    printf("DETERGENT     \t(PRODUCT CODE:14)\tPRICE PER PACKET:65\n");

    printf("TOILET CLEANER\t(PRODUCT CODE:15)\tPRICE PER PACKET:75\n");

    printf("TO EXIT ENTER CODE 0\n");
}
void load(int a)
{
    int v;
    for(int h=0;h<a;h++)
    {v=0;}
}
int valid(long long int n)
{   long long int g;
    int cdi=0;
    for(g=n;g>0;g=g/10)
        cdi++;
    if(cdi==16)
        return 1;
    else
        return 0;
}
