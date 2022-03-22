#include<stdio.h>
int main()
{
    printf("Holiday Hotel Welcomes You!");
    int idly = 12,dosa = 18,parotta = 15,chickenkothu = 70,roti = 7,briyani = 120,id,ds,pa,ck,ro,bri;
    float cost;
    printf("\nSelect the dishes quantity you had: \nIf you didnt had an item enter zero there\n");
    printf("enter in the below order:\nIdly\nDosa\nParotta\nChicken kothu\nRoti\nBriyani\n");
    scanf("%d %d %d %d %d %d",&id,&ds,&pa,&ck,&ro,&bri);
    cost= ((id*idly)+(ds*dosa)+(pa*parotta)+(ck*chickenkothu)+(ro*roti)+(bri*briyani));
    printf("\nThe bill amount you have to pay is:\t%.2f",cost);
}