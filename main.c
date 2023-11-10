#include <stdio.h>
#include <math.h>


void front()
{
    int n, choose;

    system("color A");

    printf("\n\n\n\n\n\n");
    printf("\t\t\t\t\t     >>*>>                     Bismillahir Rahmanir Rahim                   <<*<<\n\n");
    printf("\t\t\t\t\t     >>*>>                     Welcome to Our CSE Project                   <<*<<\n\n");
    printf("\t\t\t\t\t     >>*>>                 Project Name : Number Conversion                  <<*<<\n\n");


    printf("\n\n\n\t\t\t\t\t                               Press 1 to continue...");



    scanf("%d",&choose);
    system("cls");
    system("color B5");
    printf("\n\n\n\n");
    printf("\t\t\t\t\t>>*>>                            CHOOSE THE CONVERSION                           <<*<<\n\n");
    printf("\t\t\t\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    printf("\t\t\t\t\t::                               1: Binary to Octal.                                 ::\n");
    printf("\t\t\t\t\t::                               2: Binary to Decimal.                               ::\n");
    printf("\t\t\t\t\t::                               3: Binary to Hexadecimal.                           ::\n");
    printf("\t\t\t\t\t::                               4: Octal to Binary .                                ::\n");
    printf("\t\t\t\t\t::                               5: Decimal to Binary.                               ::\n");
    printf("\t\t\t\t\t::                               6: Hexadecimal to Binary.                           ::\n");
    printf("\t\t\t\t\t::                               7: Octal to Decimal.                                ::\n");
    printf("\t\t\t\t\t::                               8: Octal to Hexadecimal .                           ::\n");
    printf("\t\t\t\t\t::                               9:  Decimal to Hexadecimal.                         ::\n");
    printf("\t\t\t\t\t::                               10:  Decimal to Octal .                             ::\n");
    printf("\t\t\t\t\t::                               11: Hexadecimal to Decimal.                         ::\n");
    printf("\t\t\t\t\t::                               For system clear press = 0                          ::\n");
    printf("\t\t\t\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");


}



void binaryToOctal(long binarynum, long num, FILE *file)
{
    int octalnum = 0, decimalnum = 0, i = 0;
    while(binarynum != 0)
    {
        decimalnum = decimalnum + (binarynum%10) * pow(2,i);
        i++;
        binarynum = binarynum / 10;
    }
    i = 1;
    while (decimalnum != 0)
    {
        octalnum = octalnum + (decimalnum % 8) * i;
        decimalnum = decimalnum / 8;
        i = i * 10;
    }
    printf("\n \t\t\t\t\t                                Binary to Octal: (%ld)b = (%d)o\n",num, octalnum);
    fprintf(file,"Binary to Octal: (%ld)b = (%d)o\n",num, octalnum);
    fputs("\n",file);
    fclose(file);
}



void binaryToDecimal(long binarynum, long num, FILE *file)
{
    int decimalnum = 0, temp = 0, remainder;
    while (binarynum!=0)
    {
        remainder = binarynum % 10;
        binarynum = binarynum / 10;
        decimalnum = decimalnum + remainder*pow(2,temp);
        temp++;
    }
    printf("\n \t\t\t\t\t                                Binary to Decimal: (%ld)b = (%d)d\n",num,decimalnum);
    fprintf(file,"Binary to Decimal: (%ld)b = (%d)d\n",num,decimalnum);
    fputs("\n",file);
    fclose(file);
}



void binaryToHexadecimal(long binarynum, long num, FILE *file)
{
    int hexadecimalnum = 0, temp = 0, remainder;
    while (binarynum!=0)
    {
        remainder = binarynum % 10;
        binarynum = binarynum / 10;
        hexadecimalnum = hexadecimalnum + remainder*pow(2,temp);
        temp++;
    }
    printf("\n \t\t\t\t\t                                Binary to Hexadecimal: (%ld)b = (%X)hexa\n",num,hexadecimalnum);
    fprintf(file,"Binary to Hexadecimal: (%ld)b = (%X)hexa\n",num,hexadecimalnum);
    fputs("\n",file);
    fclose(file);
}



void octalToBinary(int octalnum, int num, FILE *file)
{
    int decimalnum = 0, i = 0;
    long binarynum = 0;
    while(octalnum != 0)
    {
        decimalnum = decimalnum + (octalnum%10) * pow(8,i);
        i++;
        octalnum = octalnum / 10;
    }
    i = 1;
    while (decimalnum != 0)
    {
        binarynum = binarynum + (decimalnum % 2) * i;
        decimalnum = decimalnum / 2;
        i = i * 10;
    }
    printf("\n \t\t\t\t\t                                Octal to Binary: (%d)o = (%ld)b\n", num, binarynum);
    fprintf(file,"Octal to Binary: (%d)o = (%ld)b\n", num, binarynum);
    fputs("\n",file);
    fclose(file);
}



void decimalToBinary(int decimalnum, int num, FILE *file)
{
    long binarynum = 0;
    int rem, temp = 1;

    while (decimalnum!=0)
    {
        rem = decimalnum%2;
        decimalnum = decimalnum / 2;
        binarynum = binarynum + rem*temp;
        temp = temp * 10;
    }
    printf("\n \t\t\t\t\t                                Decimal to Binary: (%d)d = (%ld)b\n",num, binarynum);
    fprintf(file,"Decimal to Binary: (%d)d = (%ld)b\n",num, binarynum);
    fputs("\n",file);
    fclose(file);
}



void hexadecimalToBinary(int hexadecimalnum, int num, FILE *file)
{
    long binarynum = 0;
    int rem, temp = 1;

    while (hexadecimalnum!=0)
    {
        rem = hexadecimalnum%2;
        hexadecimalnum = hexadecimalnum / 2;
        binarynum = binarynum + rem*temp;
        temp = temp * 10;
    }
    printf("\n \t\t\t\t\t                                Hexadecimal to Binary: (%X)hexa = (%ld)b\n",num, binarynum);
    fprintf(file,"Hexadecimal to Binary: (%X)hexa = (%ld)b\n",num, binarynum);
    fputs("\n",file);
    fclose(file);
}



void octalToDecimal(int octalnum, int num,FILE *file)
{
    int decimalnum = 0, temp = 0;
    while(octalnum != 0)
    {
        decimalnum = decimalnum + (octalnum%10) * pow(8,temp);
        temp++;
        octalnum = octalnum / 10;
    }
    printf("\n \t\t\t\t\t                                Octal to Decimal: (%d)o = (%ld)d\n",num,decimalnum);
    fprintf(file,"Octal to Decimal: (%d)o = (%ld)d\n",num,decimalnum);
    fputs("\n",file);
    fclose(file);
}



void octalToHexadecimal(int octal, FILE *file)
{
    printf("\n \t\t\t\t\t                                Octal to Hexadecimal: %oo = %Xhexa\n",octal,octal);
    fprintf(file,"Octal to Hexadecimal: (%o)o = (%X)hexa\n",octal,octal);
    fputs("\n",file);
    fclose(file);
}



void decimalToHexadecimal(int decimal, FILE *file)
{
    printf("\n \t\t\t\t\t                                Decimal to Hexadecimal: (%d)d = (%X)hexa\n",decimal,decimal);
    fprintf(file,"Decimal to Hexadecimal: (%d)d = (%X)hexa\n",decimal,decimal);
    fputs("\n",file);
    fclose(file);
}




void decimalTooctal(int decimal, FILE *file)
{
    printf("\n \t\t\t\t\t                                Decimal to Octal: (%d)d = (%o)o\n",decimal,decimal);
    fprintf(file,"Decimal to Octal: (%d)d = (%o)o\n",decimal,decimal);
    fputs("\n",file);
    fclose(file);
}



void hexadecimalTodecimal(int hexadecimal, FILE *file)
{
    printf("\n \t\t\t\t\t                                Hexadecimal to Decimal: (%X)hexa = (%d)d\n",hexadecimal,hexadecimal);
    fprintf(file,"Hexadecimal to Decimal: (%X)hexa = (%d)d\n",hexadecimal,hexadecimal);
    fputs("\n",file);
    fclose(file);
}





int main()
{
    int n,choose;
    front();
    while(1)
    {


        printf("\n\t\t\t\t\t\t\t\t\t  ENTER YOUR CHOICE: ");

        scanf("%d",&n);

        if(n==1)
        {
            long binarynum,num,i;

            FILE *file;
            file= fopen("ConversionFile.txt","a");
            if(binarynum==0)

                system("color A");
            printf("\n \t\t\t\t                                      Enter a binary number(1s & 0s): ");
            scanf("%ld", &binarynum);
            num=binarynum;
            binaryToOctal(binarynum,num,file);

        }


        if(n==2)
        {
            long binarynum,num,i;

                FILE *file;
                file= fopen("ConversionFile.txt","a");
                if(binarynum==0)

                    system("color B");
                printf("\n \t\t\t\t                                      Enter a binary number(1s & 0s): ");
                scanf("%ld", &binarynum);
                num=binarynum;
                binaryToDecimal(binarynum,num,file);

        }


        if(n==3)
        {
            long binarynum,num,i;


                FILE *file;
                file= fopen("ConversionFile.txt","a");
                if(binarynum==0)

                    system("color C");
                printf("\n \t\t\t\t                                      Enter a binary number(0-1): ");
                scanf("%ld", &binarynum);
                num=binarynum;
                binaryToHexadecimal(binarynum,num,file);

        }


        if(n==4)
        {
            int octalnum,num,i;


                FILE *file;
                file= fopen("ConversionFile.txt","a");
                if(octalnum==0)

                    system("color D");
                printf("\n \t\t\t\t                                      Enter an octal number(0-7): ");
                scanf("%d", &octalnum);
                num=octalnum;
                octalToBinary(octalnum,num,file);

        }


        if(n==5)
        {
            int decimalnum,num,i;


            FILE *file;
            file= fopen("ConversionFile.txt","a");
            if(decimalnum==0)

                system("color E");
            printf("\n \t\t\t\t                                      Enter a Decimal Number(0-9): ");
            scanf("%d", &decimalnum);
            num=decimalnum;
            decimalToBinary(decimalnum,num,file);
        }



        if(n==6)
        {
            int hexadecimalnum,num,i;

                FILE *file;
                file= fopen("ConversionFile.txt","a");
                if(hexadecimalnum==0)

                    system("color F");
                printf("\n \t\t\t\t                                      Enter a Hexadecimal Number(0-9): ");
                scanf("%X", &hexadecimalnum);
                num=hexadecimalnum;
                hexadecimalToBinary(hexadecimalnum,num,file);

        }



        if(n==7)
        {
            int octalnum,num,i;


                FILE *file;
                file= fopen("ConversionFile.txt","a");
                if(octalnum==0)

                    system("color E");
                printf("\n \t\t\t\t                                      Enter an octal number (0-7): ");
                scanf("%d", &octalnum);
                num=octalnum;
                octalToDecimal(octalnum,num,file);

        }



        if(n==8)
        {
            int octal,i;


                FILE *file;
                file= fopen("ConversionFile.txt","a");
                if(octal==0)

                    system("color D");
                printf("\n \t\t\t\t                                      Enter an Octal number (0-7): ");
                scanf("%o",&octal);
                octalToHexadecimal(octal,file);

        }



        if(n==9)
        {
            int decimal,i;


                FILE *file;
                file= fopen("ConversionFile.txt","a");
                if(decimal==0)

                    system("color C");
                printf("\n \t\t\t\t                                      Enter a Decimal number(0-9): ");
                scanf("%d",&decimal);
                decimalToHexadecimal(decimal,file);

        }



        if(n==10)
        {
            int decimal;


                FILE *file;
                file= fopen("ConversionFile.txt","a");
                system("color B");
                printf("\n \t\t\t\t                                      Enter a Decimal number(0-9): ");
                scanf("%d",&decimal);
                decimalTooctal(decimal,file);


        }



        if(n==11)
        {
            int hexadecimal;


            FILE *file;
            file= fopen("ConversionFile.txt","a");
            system("color A");
            printf("\n \t\t\t\t                                      Enter a Hexadecimal number:");
            scanf("%X",&hexadecimal);
            hexadecimalTodecimal(hexadecimal,file);


        }



        if(n==0)
        {
            system("cls");
            front();
            return 0;
        }

    }
    return 0;
}



