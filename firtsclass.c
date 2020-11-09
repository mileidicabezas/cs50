#include <cs50.h>
#include <stdio.h>

void sportItems(void){
    float priceOne = 4.32;
    float priceTwo = 7.77;
    float priceThree = 12.44;
    string item1 = "Leggins";
    string item2 = "T-shert";
    string item3 = "Shirt";
    printf("**************Menu**************");
    printf("\n         1. %s %s%.2f", item1, "$",priceOne );
    printf("\n         2. %s %s%.2f", item2, "$",priceTwo);
    printf("\n         3. %s %s%.2f", item3, "$",priceThree);
    int userInput = get_int("\nChoose a section\n");

    if(userInput == 1){
        printf("Your charge is for $ %.2f",priceOne);
        printf("\n");
    }
        else  
    if(userInput == 2){
        printf("Your charge is for $ %.2f",priceTwo);  
        printf("\n");
    }
        else  
    if(userInput == 3){
        printf("Your charge is for $ %.2f",priceThree); 
        printf("\n"); 
    }
}


void UnderwearItems(void){
    float priceOne = 4.32;
    float priceTwo = 7.77;
    float priceThree = 12.44;
    string item1 = "Control Briefs";
    string item2 = "Hipsters";
    string item3 = "French-Cut Panties";
    printf("**************Menu**************");
    printf("\n         1. %s %s%.2f", item1, "$",priceOne );
    printf("\n         2. %s %s%.2f", item2, "$",priceTwo);
    printf("\n         3. %s %s%.2f", item3, "$",priceThree);
    int userInput = get_int("\nChoose a section\n");

    if(userInput == 1){
        printf("Your charge is for $ %.2f",priceOne);
        printf("\n");
    }
        else  
    if(userInput == 2){
        printf("Your charge is for $ %.2f",priceTwo);  
        printf("\n");
    }
        else  
    if(userInput == 3){
        printf("Your charge is for $ %.2f",priceThree); 
        printf("\n"); 
    }
}

void pantsItems(void){
    float priceOne = 34.00;
    float priceTwo = 45.00;
    float priceThree = 86.00;
    string item1 = "Skinny jeans";
    string item2 = "Boot Cut";
    string item3 = "Baggy jeans";
    printf("**************Menu**************");
    printf("\n         1. %s %s%.2f", item1, "$",priceOne );
    printf("\n         2. %s %s%.2f", item2, "$",priceTwo);
    printf("\n         3. %s %s%.2f", item3, "$",priceThree);
    int userInput = get_int("\nChoose a section\n");

    if(userInput == 1){
        printf("Your charge is for $ %.2f",priceOne);
        printf("\n");
    }
        else  
    if(userInput == 2){
        printf("Your charge is for $ %.2f",priceTwo);  
        printf("\n");
    }
        else  
    if(userInput == 3){
        printf("Your charge is for $ %.2f",priceThree); 
        printf("\n"); 
    }
}

int main (void)
{
    printf("**************Menu**************\n      1. Sport\n      2. Underwear\n      3. Pants\n");
    int userInput = get_int("Choose a section\n");
    switch (userInput)
    {
    case 1: 
        printf("***************************************************\n");
        printf(" ________________________________________________\n");
        printf("|                                                |\n");
        printf("|       Sport chothes an special offers          |\n");
        printf("|   Haf price in your second running shoues      |\n");
        printf("|________________________________________________|\n\n");
        sportItems();
        break;
    case 2:
        printf("***************************************************\n");
        printf(" ________________________________________________\n");
        printf("|                                                |\n");
        printf("|        Underwear in special offers             |\n");
        printf("|         Haf price in all panties               |\n");
        printf("|________________________________________________|\n\n");
        UnderwearItems();
        break;
    case 3:
        printf("***************************************************\n");
        printf(" ________________________________________________\n");
        printf("|                                                |\n");
        printf("|             Pants in special offers            |\n");
        printf("|    Buy one and take the second a haf price     |\n");
        printf("|________________________________________________|\n\n");
        pantsItems();

        break;
    default:
        break;
    }
}