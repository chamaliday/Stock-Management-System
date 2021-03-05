#include <stdio.h>
#include <stdlib.h>
const int SIZE1=3;


int getDetail(int choice,int trcIdArr[SIZE1],int codeArr[SIZE1],int saleAmountArr[SIZE1],char nameArr[SIZE1][20],float uPriceArr[SIZE1],float dRateArr[SIZE1],int dLevelArr[SIZE1],int cStockArr[SIZE1]);
void addItemAndDisplay(int codeArr[SIZE1],char nameArr[SIZE1][20],float uPriceArr[SIZE1],float dRateArr[SIZE1],int dLevelArr[SIZE1],int cStockArr[SIZE1]);
void salesAndDisplay(int trcIdArr[SIZE1],int codeArr[SIZE1],int saleAmountArr[SIZE1]);
void purchaseAndDisplay(int trcIdArr[SIZE1],int codeArr[SIZE1],int purchAmountArr[SIZE1]);
void displaySales();



int main()
{

    char nameArr[SIZE1][20];
    int choice,codeArr[SIZE1], dLevelArr[SIZE1], cStockArr[SIZE1], trcIdArr[SIZE1], saleAmountArr[SIZE1], purchAmountArr[SIZE1];
    float dRateArr[SIZE1],uPriceArr[SIZE1];

    getDetail(choice,trcIdArr,codeArr,saleAmountArr,nameArr,uPriceArr,dRateArr,dLevelArr,cStockArr);

    return 0;
}



int getDetail(int choice,int trcIdArr[SIZE1],int codeArr[SIZE1],int saleAmountArr[SIZE1],char nameArr[SIZE1][20],float uPriceArr[SIZE1],float dRateArr[SIZE1],int dLevelArr[SIZE1],int cStockArr[SIZE1])
{
    printf("-----------------------------------------\n");
    printf("     ***enter suitable number***         \n");
    printf("-----------------------------------------\n");
    printf("if you want to update stock and display detail     :  press 1\n");
    printf("if you want to update sale and display detail      :  press 2\n");
    printf("if you want to update purchase and display detail  :  press 3\n");

    printf("\nenter relevant number:  ");
    scanf("%d",&choice);
    if(choice==1)
    {
        addItem(codeArr,nameArr,uPriceArr,dRateArr,dLevelArr,cStockArr);
    }
    else
    {
        if(choice==2)
        {
            sale(trcIdArr,codeArr,saleAmountArr);
        }
        else
        {
            if(choice==3)
            {
                purchase(trcIdArr,codeArr,saleAmountArr);
            }

                        else
                        {
                            printf("\nInvalid number");
                        }

        }
    }
}


void addItem(int codeArr[SIZE1],char nameArr[SIZE1][20],float uPriceArr[SIZE1],float rateArr[SIZE1],int levelArr[SIZE1],int cStockArr[SIZE1])
{
    int i;
    for(i=1;i<=SIZE1;i++)
    {
        printf("\n\nitem code:");
        scanf("%d",&codeArr[i]);
        printf("\nitem name:");
        scanf("%s",&nameArr[i]);
        printf("\nunit price:");
        scanf("%f",&uPriceArr[i]);
        printf("\ndiscount rate:");
        scanf("%f",&rateArr[i]);
        printf("\ndiscount level:");
        scanf("%d",&levelArr[i]);
        printf("\ncurrent stock:");
        scanf("%d",&levelArr[i]);
        }
        printf("\n                     ***** STOCK DETAIL ****                           \n ");
        printf("-------------------------------------------------------------------------\n");
        printf("Item Code|Item Name|Unit Price|Discount Rate|Discount Level|Current Stock\n");
        printf("-------------------------------------------------------------------------\n");


        for(i=1;i<=SIZE1;i++)
        {
        printf("%d         %s         %.2f        %.2f          %d            %d\n",codeArr[i],nameArr[i],uPriceArr[i],rateArr[i],levelArr[i],levelArr[i]);
        }




}

void sale(int trcIdArr[SIZE1],int codeArr[SIZE1],int saleAmountArr[SIZE1])
{
    void inputsaleData(int trcIdArr[SIZE1],int codeArr[SIZE1],int saleAmountArr[SIZE1]);
    {int i=0;
        for(i=1;i<=SIZE1;i++)
        {
            printf("\n\ntransaction id:");
            scanf("%d",&trcIdArr[i]);
            printf("\nitem code:");
            scanf("%d",&codeArr[i]);
            printf("\nsale amount:");
            scanf("%d",&saleAmountArr[i]);
        }
        printf("\n                     ***** SALES DETAIL ****                           \n ");
        printf("-------------------------------------------------------------------------\n");
        printf("    Transaction ID  |   Item Code   |   Sale Amount     \n");
        printf("-------------------------------------------------------------------------\n");

        for(i=1;i<=SIZE1;i++)
        {
            printf("     %d                %d                %d              \n",trcIdArr[i],codeArr[i],saleAmountArr[i]);
        }
    }

}

void purchase(int trcIdArr[SIZE1],int codeArr[SIZE1],int purchAmountArr[SIZE1])
{
    void inputpurchData(int trcIdArr[SIZE1],int codeArr[SIZE1],int purchAmountArr[SIZE1]);
    {int i=0;
        for(i=1;i<=SIZE1;i++)
        {
            printf("\n\ntransaction id:");
            scanf("%d",&trcIdArr[i]);
            printf("\nitem code:");
            scanf("%d",&codeArr[i]);
            printf("\npurchase amount:");
            scanf("%d",&purchAmountArr[i]);
        }

        printf("\n                     ***** PURCHASE DETAIL ****                       \n ");
        printf("-------------------------------------------------------------------------\n");
        printf("    Transaction ID  |   Item Code   |   Purchase Amount     \n");
        printf("-------------------------------------------------------------------------\n");

        for(i=1;i<=SIZE1;i++)
        {
            printf("     %d                %d                %d              \n",trcIdArr[i],codeArr[i],purchAmountArr[i]);
        }
    }
}
