#include<stdio.h>
#include<string.h>

char message[100], ch,c[50];;
int i, key;
void delay()
{
    int c,d;
      for (c = 1; c <= 32767; c++)
       for (d = 1; d <= 32767; d++)
       {}
}
void encrypt(char message[100],int key)
{
 
    for(i = 0; message[i] != '\0'; ++i)
        {
            ch = message[i];
            if(ch >= 'a' && ch <= 'z')
            {
                ch = ch + key;
                if(ch > 'z')
                {
                    ch = ch - 'z' + 'a' - 1;
                }
                message[i] = ch;
            }
            else if(ch >= 'A' && ch <= 'Z')
            {
                ch = ch + key;
                if(ch > 'Z')
                {
                    ch = ch - 'Z' + 'A' - 1;
                }
                message[i] = ch;
            }
        }
        printf("Encrypted message: %s", message);
        printf("\nwait 10 seconds the program will automatically close...");  
        delay(100000);
}
void decrypt(char message[100],int key)
{
    for(i = 0; message[i] != '\0'; ++i)
        {
            ch = message[i];
            if(ch >= 'a' && ch <= 'z')
            {
                ch = ch - key;
                if(ch > 'z')
                {
                    ch = ch + 'z' - 'a' + 1;
                }
                message[i] = ch;
            }
            else if(ch >= 'A' && ch <= 'Z')
            {
                ch = ch - key;
                if(ch > 'Z')
                {
                    ch = ch + 'Z' - 'A' + 1;
                }
                message[i] = ch;
            }
        }
        printf("decrypted message: %s", message); 
        printf("\nwait 10 seconds the program will automatically close...");  
        delay(100000);

}
void main()
{
    printf("   _   _ _____ _     _     ___");
    printf("\n| | | | ____| |   | |   / _ \\ ");
    printf("\n| |_| |  _| | |   | |  | | | |");
    printf("\n|  _  | |___| |___| |__| |_| |");
    printf("\n|_| |_|_____|_____|_____\\___/");
    printf("\n\n");
    printf("This is one cipher program for eg: if you give hello as message and key value as 3 and encrypt ");
    printf("\nAnd the message will be khoor");
    printf("\n\nEnter a message:");
    gets(message);
    printf("message:%s\n",message);
    printf("Enter key: ");
    scanf("%d", &key);
    printf("encrypt or decrypt:");
    scanf("%s",c);
    
    printf("you entered:%s\n",c);

    
    if(strcmp(c,"encrypt")==0)
    {
        encrypt(message,key);
       
    }
    else if(strcmp(c,"decrypt")==0)
    {
        decrypt(message,key); 
        
    }
    else
    {
      printf("enter the correct spelling ");
    }
   

}
