#include <stdio.h>
#include<math.h>


int decimalToOctal(int decimalnum)
{
    int octalnum = 0, temp = 1;

    while (decimalnum != 0)
    {
    	octalnum = octalnum + (decimalnum % 8) * temp;
    	decimalnum = decimalnum / 8;
        temp = temp * 10;
    }
    return octalnum;
}



int main()
{
    char binarynum[100], hexa[100];
    long int i = 0,j=0;
    int bin[500];

    printf("Enter the value for hexadecimal ");
    scanf("%s", hexa);
    while (hexa[i])
    {
        switch (hexa[i])
        {
        case '0':
            {
                bin[j]=0;
                j++;
                bin[j]=0;
                j++;
                bin[j]=0;
                j++;
                bin[j]=0;
                j++;
                break;
            }
        case '1':
            {
                bin[j]=0;
                j++;
                bin[j]=0;
                j++;
                bin[j]=0;
                j++;
                bin[j]=1;
                j++;
                break;
            }
        case '2':
            {
                bin[j]=0;
                j++;
                bin[j]=0;
                j++;
                bin[j]=1;
                j++;
                bin[j]=0;
                j++;
                break;
            }
        case '3':
            {
                bin[j]=0;
                j++;
                bin[j]=0;
                j++;
                bin[j]=1;
                j++;
                bin[j]=1;
                j++;
                break;
            }
        case '4':
            {
                bin[j]=0;
                j++;
                bin[j]=1;
                j++;
                bin[j]=0;
                j++;
                bin[j]=0;
                j++;
                break;
            }
        case '5':
            {
                bin[j]=0;
                j++;
                bin[j]=1;
                j++;
                bin[j]=0;
                j++;
                bin[j]=1;
                j++;
                break;
            }
        case '6':
            {
                bin[j]=0;
                j++;
                bin[j]=1;
                j++;
                bin[j]=1;
                j++;
                bin[j]=0;
                j++;
                break;
            }
        case '7':
            {
                bin[j]=0;
                j++;
                bin[j]=1;
                j++;
                bin[j]=1;
                j++;
                bin[j]=1;
                j++;
                break;
            }
        case '8':
            {
                bin[j]=1;
                j++;
                bin[j]=0;
                j++;
                bin[j]=0;
                j++;
                bin[j]=0;
                j++;
                break;
            }
        case '9':
            {
                bin[j]=1;
                j++;
                bin[j]=0;
                j++;
                bin[j]=0;
                j++;
                bin[j]=1;
                j++;
                break;
            }
        case 'A':
            {
                bin[j]=1;
                j++;
                bin[j]=0;
                j++;
                bin[j]=1;
                j++;
                bin[j]=0;
                j++;
                break;
            }
        case 'B':
            {
                bin[j]=1;
                j++;
                bin[j]=0;
                j++;
                bin[j]=1;
                j++;
                bin[j]=1;
                j++;
                break;
            }
        case 'C':
            {
                bin[j]=1;
                j++;
                bin[j]=1;
                j++;
                bin[j]=0;
                j++;
                bin[j]=0;
                j++;
                break;
            }
        case 'D':
            {
                bin[j]=1;
                j++;
                bin[j]=1;
                j++;
                bin[j]=0;
                j++;
                bin[j]=1;
                j++;
                break;
            }
        case 'E':
            {
                bin[j]=1;
                j++;
                bin[j]=1;
                j++;
                bin[j]=1;
                j++;
                bin[j]=0;
                j++;
                break;
            }
        case 'F':
            {
                bin[j]=1;
                j++;
                bin[j]=1;
                j++;
                bin[j]=1;
                j++;
                bin[j]=1;
                j++;
                break;
            }
        default:
            printf("\n Invalid hexa digit %c ", hexa[i]);
            return 0;
        }
        i++;
    }
    int decimal=0,k=0,octal;
    j=j-1;
    for(j;j>=0;j--,k++)
    {
        decimal+=(bin[j]*pow(2,k));
    }
    octal=decimalToOctal(decimal);
    printf("Octal number is %d",octal);
    return 0;
}
