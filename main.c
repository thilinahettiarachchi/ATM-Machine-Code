#include <stdio.h>

//PIN=1234    Account No=12345678

int accountnumber=12345678;
double amount=24500;
double *pamount=&amount; //Pointer

//Function Declaration

   void balance1(double *pointer)  //Check balance
        {
            int r=1;
            char receipt;
			printf("\n YOUR ACCOUNT BALANCE IS : Rs %.2lf \n", *pointer);

			while(r==1)
            {
			 printf("\n Do you want receipt? (y/n)\n");
			 scanf(" %c",&receipt);
			   switch(receipt)
                {
			     case 'y': printf("\n PLEASE COLLECT YOUR RECEIPT....");
			               r=0;
			               break;
			     case 'n': r=0;
			               break;
			     default : printf("\n PLEASE MAKE YOUR DECISION....");
			               break;
			    }
            }
            return;
        }


   void withdraw1(double *pointer)  //Withdraw cash
        {
           int cash;
           int x;
		   printf("\n Select Your Choice \n \n");
		   printf("\n\n 1 - Rs 100 \n\n 2 - Rs 500 \n\n 3 - Rs 1000 \n\n 4 - Rs 2000 \n\n 5 - Rs 5000 \n\n 6 - Other \n \n");
		   scanf("%d",&cash);
		   if(cash==1)
            {
               if (100 >(*pointer - 500))
			    {
				    printf("\n INSUFFICENT ACCOUNT BALANCE");
			    }
			    else
			    {
				    *pointer = *pointer - 100;
                    printf("\n\n PLEASE COLLECT YOUR MONEY . . .");
				    printf("\n YOUR CURRENT ACCOUNT BALANCE IS : Rs %.2lf",*pointer);
			    }
            }

           else if(cash==2)
            {
                if (500 >(*pointer - 500))
			    {
				    printf("\n INSUFFICENT ACCOUNT BALANCE");
			    }
			    else
			    {
				    *pointer = *pointer - 500;
                    printf("\n\n PLEASE COLLECT YOUR MONEY . . .");
				    printf("\n YOUR CURRENT ACCOUNT BALANCE IS : Rs %.2lf", *pointer);
			    }
            }

           else if(cash==3)
            {
                if (1000 >(*pointer - 500))
			    {
				    printf("\n INSUFFICENT ACCOUNT BALANCE");
			    }
			    else
			    {
                    *pointer = *pointer - 1000;
                    printf("\n\n PLEASE COLLECT YOUR MONEY . . .");
				    printf("\n YOUR CURRENT ACCOUNT BALANCE IS : Rs %.2lf", *pointer);
			    }
            }

           else if(cash==4)
            {
			    if (2000>(*pointer - 500))
			    {
				    printf("\n INSUFFICENT ACCOUNT BALANCE");
			    }
			    else
			    {
				    *pointer = *pointer - 2000;
                    printf("\n\n PLEASE COLLECT YOUR MONEY . . .");
				    printf("\n YOUR CURRENT ACCOUNT BALANCE IS : Rs %.2lf", *pointer);
			    }
            }

           else if(cash==5)
            {
                if (5000 >(*pointer - 500))
			    {
				    printf("\n INSUFFICENT ACCOUNT BALANCE");
			    }
			    else
			    {
				    *pointer = *pointer - 5000;
                    printf("\n\n PLEASE COLLECT YOUR MONEY . . .");
				    printf("\n YOUR CURRENT ACCOUNT BALANCE IS : Rs %.2lf", *pointer);
			    }
            }

           else if(cash==6)
		    {
			    printf("\n ENTER THE AMOUNT TO WITHDRAW : Rs ");
			    scanf("%d",&x);

			    if (x % 100 != 0)
			    {
				    printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");
			    }
			    else if (x >(*pointer - 500))
			    {
				    printf("\n INSUFFICENT ACCOUNT BALANCE");
			    }
			    else
			    {
				    *pointer = *pointer - x;
                    printf("\n\n PLEASE COLLECT YOUR MONEY . . .");
				    printf("\n YOUR CURRENT ACCOUNT BALANCE IS : Rs %.2lf", *pointer);
			    }
		    }


           else
            {
                printf("\n PLEASE ENTER CORRECT CHOICE");
            }

             int r=1;
             char receipt;

            while(r==1)
            {

			printf("\n \n Do you want receipt? (y/n)\n");
			scanf(" %c",&receipt);
			 switch(receipt)
			    {
			     case 'y': printf("\n PLEASE COLLECT YOUR RECEIPT....");
			               r=0;
			               break;
			     case 'n': r=0;
			               break;
			     default : printf("\n PLEASE MAKE YOUR DECISION....");
			               break;
			    }
            }
            return;
        }


   void deposit1(double *pointer)  //Deposit cash
        {
            int accnum;
            int x;
		    printf("\n  ENTER YOUR ACCOUNT NUMBER : ");
            scanf("%d",&accnum);


		    while(accountnumber!=accnum)
		    {
             printf("\n\n PLEASE ENTER VALID ACCOUNT NUMBER\n\n");
             printf("\n ENTER YOUR ACCOUNT NUMBER : \n");
             scanf("%d",&accnum);
		    }

			printf("\n ENTER THE AMOUNT TO DEPOSIT : Rs ");
			scanf("%d", &x);
                        *pointer = *pointer + x;
			printf("\n YOUR ACCOUNT BALANCE IS : Rs %.2lf \n", *pointer);

			int r=1;
            char receipt;

			while(r==1)
            {

			printf("\n Do you want receipt? (y/n)\n");
			scanf(" %c",&receipt);
			 switch(receipt)
			 {
			     case 'y': printf("\n PLEASE COLLECT YOUR RECEIPT....");
			               r=0;
			               break;
			     case 'n': r=0;
			               break;
			     default : printf("\n PLEASE MAKE YOUR DECISION....");
			               break;
			 }
            }


             return;
        }





   void balance2(double *pointer)  //Check balance
        {
            int r=1;
            char receipt;

			printf("\n Ginum Sheshaya : Rs %.2lf \n", *pointer);

			while(r==1)
            {

			printf("\n OBATA RESIT PATHAK AWASHYADA ? (y/n)\n");
			scanf(" %c",&receipt);
			 switch(receipt)
			 {
			     case 'y': printf("\n OBAGE RESIT PATHA LABAA GANNA....");
			               r=0;
			               break;
			     case 'n': r=0;
			               break;
			     default : printf("\n KARUNAAKARA NIWERADI THEEREEMAK SIDU KARANNA....");
			               break;
			 }
            }


                        return;
        }

   void withdraw2(double *pointer)  //Withdraw cash
        {
           int cash;
           int x;
           printf("\n Obata Awashya Mudal Pramanaya Thooranna \n-");
		   printf("\n\n 1 - Rs 100 \n\n 2 - Rs 500 \n\n 3 - Rs 1000 \n\n 4 - Rs 2000 \n\n 5 - Rs 5000 \n\n 6 - Wenath Agayak \n \n");
		   scanf("%d",&cash);
		   if(cash==1)
           {
               if (100 >(*pointer - 500))
			    {
				    printf("\n Kanagaatui...! Obage Sheshaya Pramaanawath Nowe");
			    }
			    else
			    {
				    *pointer = *pointer - 100;
                   printf("\n\n Obage Mudal Labaa Ganna . . . .");
				printf("\n Obage Nawa Ginum Sheshaya : Rs %.2lf", *pointer);
			    }
           }

           else if(cash==2)
           {
                if (500 >(*pointer - 500))
			    {
				    printf("\n Kanagaatui...! Obage Sheshaya Pramaanawath Nowe");
			    }
			    else
			    {
				    *pointer = *pointer - 500;
               printf("\n\n Obage Mudal Labaa Ganna . . . .");
				printf("\n Obage Nawa Ginum Sheshaya : Rs %.2lf", *pointer);
			    }
           }

            else if(cash==3)
            {
                if (1000 >(*pointer - 500))
			    {
				    printf("\n Kanagaatui...! Obage Sheshaya Pramaanawath Nowe");
			    }
			    else
			    {
				    *pointer = *pointer - 1000;
                   printf("\n\n Obage Mudal Labaa Ganna . . . .");
				printf("\n Obage Nawa Ginum Sheshaya : Rs %.2lf", *pointer);
			    }
            }
            else if(cash==4)
            {
			    if (2000>(*pointer - 500))
			    {
				    printf("\n Kanagaatui...! Obage Sheshaya Pramaanawath Nowe");
			    }
			    else
			    {
				    *pointer = *pointer - 2000;
                   printf("\n\n Obage Mudal Labaa Ganna . . . .");
				printf("\n \nObage Nawa Ginum Sheshaya : Rs %.2lf", *pointer);
			    }
            }
            else if(cash==5)
            {
			     if (5000 >(*pointer - 500))
			    {
				    printf("\n \n Kanagaatui...! Obage Sheshaya Pramaanawath Nowe");
			    }
			    else
			    {
				    *pointer = *pointer - 5000;
                    printf("\n\n Obage Mudal Labaa Ganna . . . .");
				printf("\n\n Obage Nawa Ginum Sheshaya : Rs %.2lf", *pointer);
			    }
            }
		    else if(cash==6)
		    {
			    printf("\n Ganeemata Awashya Mudal Pramaanaya Athulath Karanna : Rs ");
			    scanf("%d",&x);

			    if (x % 100 != 0)
			    {
				    printf("\n \n Karunaakara 100 Gunithayak Lesa Agaya Athul Karanna");
			    }
			    else if (x >(*pointer - 500))
			    {
				    printf("\n \n Kanagaatui...! Obage Sheshaya Pramaanawath Nowe");
			    }
			    else
			    {
				    *pointer = *pointer - x;
                    printf("\n\n Obage Mudal Labaa Ganna . . . .");
				printf("\n \n Obage Nawa Ginum Sheshaya : Rs %.2lf", *pointer);
			    }
		    }

		    else
            {
                printf("\n\n Karunaakara Niwaradi Theerimak Athulath Karanna . . . \n");
            }

            int r=1;
            char receipt;

			while(r==1)
            {
			  printf("\n OBATA RESIT PATHAK AWASHYADA ? (y/n)\n");
			  scanf(" %c",&receipt);
			    switch(receipt)
			     {
			       case 'y': printf("\n OBAGE RESIT PATHA LABAA GANNA....");
			               r=0;
			               break;
			       case 'n': r=0;
			               break;
			       default : printf("\n KARUNAAKARA NIWERADI THEEREEMAK SIDU KARANNA....");
			               break;
			     }
            }
          return;
        }


   void deposit2(double *pointer)  //Deposit cash
        {
            int accnum;
            int x;
		    printf("\n Obage Ginum Ankaya Athulath Karanna : ");
            scanf("%d",&accnum);


		    while(accountnumber!=accnum)
		    {
              printf("\n\n Karunakara Niwaradi Ginum Ankaya Athulath Karanna\n\n");
              printf("\n Ginum Ankaya : \n");
              scanf("%d",&accnum);
		    }

			printf("\n Thanpath Kirimata Awashya Mudala : Rs ");
			scanf("%d", &x);
			*pointer = *pointer + x;

			printf("\n Obage Ginum Sheshaya : Rs %.2lf \n", *pointer);

			int r=1;
            char receipt;

			while(r==1)
            {

			  printf("\n OBATA RESIT PATHAK AWASHYADA ? (y/n)\n");
			  scanf(" %c",&receipt);
			    switch(receipt)
			      {
			       case 'y': printf("\n OBAGE RESIT PATHA LABAA GANNA....");
			               r=0;
			               break;
			       case 'n': r=0;
			               break;
			       default : printf("\n KARUNAAKARA NIWERADI THEEREEMAK SIDU KARANNA....");
			               break;
			      }
            }
            return;
        }


int main()
{
int select, pin;
int transaction;
int language;
int lan=1;
int card;

LOOP: do
  {

    card=0;
    transaction=1;

    printf("\n \n \n");         //Main Interface of ATM

    printf("   *****       ****  *************  *************     ****               ****\n");
    printf("   ******      ****  *************  **************    *****             *****\n");
    printf("   *******     ****      *****      ****      *****   ******           ******\n");
    printf("   ********    ****      *****      ****      *****   *******         *******\n");
    printf("   *********   ****      *****      **************    ********       ********\n");
    printf("   **** *****  ****      *****      ***************   **** ****     **** ****\n");
    printf("   ****  ***** ****      *****      ****      ******  ****  ****   ****  ****\n");
    printf("   ****    ********      *****      ****      ******  ****   **** ****   ****\n");
    printf("   ****     *******  *************  ***************   ****    *******    ****\n");
    printf("   ****      ******  *************  **************    ****     *****     ****\n");

    printf("\n  \n \n \t \t \t!!___NIBM ATM SERVICE___!! \n ");
    printf("_______________________________________________________________________________\n");

    printf("-------------------------------------------------------------------------------\n");
    printf("N I B M  N I B M  N I B M  N I B M  N I B M  N I B M  N I B M  N I B M  N I B M\n");
    printf("-------------------------------------------------------------------------------\n \n");

    while(card!=1)
    {
        printf("PLEASE INSERT THE CARD AND ENTER NUMBER 1 ....\n\n");  //Insert the card
        scanf(" %d",&card);
    }

    printf("       Select Language\n\n       1 - English \n       2 - Sinhala \n");  //selecting language
    scanf("%d",&language);

    if(language==1)
      {
        printf("\n ENTER YOUR PIN NUMBER : ");  //Enter the pin number
        scanf("%d", &pin);

     while(pin!=1234)
          {
           printf("\n INVALID PIN...!   PLEASE ENTER VALID PIN NUMBER\n \n\n");
           printf("\n ENTER YOUR PIN NUMBER :  ");
           scanf("%d", &pin);
          }
        printf("\n\n________________________________________________________________________________\n\n\n");

                    //Main menu
     while(transaction==1)
       {
        printf("       ********************* Welcome to ATM Service *********************\n\n\n");
		printf("       *              1 - Check Balance                                  *\n\n");
		printf("       *              2 - Withdraw Cash                                  *\n\n");
		printf("       *              3 - Deposit Cash                                   *\n\n");
		printf("       *              4 - Quit                                           *\n\n\n");
		printf("       ******************************************************************       \n");
		printf("________________________________________________________________________________\n\n");
		printf(" Enter your choice: ");
		scanf("%d", &select);


		switch (select)
		{
		case 1:
			balance1(pamount);
			break;

		case 2:
		   withdraw1(pamount);
		   break;

		case 3:

		    deposit1(pamount);

			break;

		case 4:
			printf("\n \n\n \n  \t \t ...THANKS FOR USING NIBM ATM SERVICE... \n \t \t     ---------------NIBM-----------\n \n \n \n \n \n \n \n \n\n");
            goto LOOP;
			break;

		default:
			printf("\n INVALID CHOICE");
        }

      transaction=0;

     while(transaction!=1 && transaction!=2)
       {
         printf("\n________________________________________________________________________________\n");
         printf("\n \n Do you want to do another transaction . . ? \n  1 - YES \n  2 - NO \n");            //Another transaction
	     scanf("%d",&transaction);
	   }

      }
    }

    else if(language==2)
    {
      printf(" \n Rahas Ankaya Athulath Karanna : ");  //Enter the pin number
      scanf("%d", &pin);



     while(pin!=1234)
        {
         printf("\n Rahas Ankaya Waradi..! \n Karunakara Niwaradi Ankaya Athulath Karanna\n\n");
         printf("\n Rahas Ankaya :  ");
         scanf("%d", &pin);
        }
        printf("\n\n________________________________________________________________________________\n\n\n");

                      //Main Menu
     while(transaction==1)
       {
        printf("       ********************* Welcome to ATM Service *********************\n\n\n");
		printf("       *              1 - Ginum Sheshaya                                  *\n\n");
		printf("       *              2 - Mudal Apasu Ganeema                             *\n\n");
		printf("       *              3 - Mudal Thanpath Kireema                          *\n\n");
		printf("       *              4 - Iwath Veema                                     *\n\n\n");
		printf("       ******************************************************************       \n");
		printf("________________________________________________________________________________\n\n");
		printf(" Obage Therima Athulath Karanna : ");
		scanf("%d", &select);


		switch (select)
		{
		case 1:
			balance2(pamount);
			break;

		case 2:
		    withdraw2(pamount);
            break;

		case 3:
            deposit2(pamount);
			break;

		case 4:
			printf("\n Sthuthi...! \n \n");
			goto LOOP;
			break;

		default:
			printf("\n Niwaradi Nowana Thereemaki");
		}

      transaction=0;
    while(transaction!=1 && transaction!=2)
      {
        printf("\n________________________________________________________________________________\n");
        printf("\n \n Obata Thawath Ganudenuwak Kireemata Awshyada? \n  1 - Ow \n  2 - Natha \n");      //Another transaction
	    scanf("%d",&transaction);
	  }

     }
    }

      else
         {
            while(language!=1 && language!=2)
            {
              printf("Please select language : 1 - English\n 2 - Sinhala ");
              scanf("%d",&language);
            }
         }

  }while(lan==1);

  printf("\n\n \n  \t \t ...THANKS FOR USING OUR ATM SERVICE... \n \t \t     ---------------NIBM-----------\n \n \n \n \n \n ");

 return 0;
}




