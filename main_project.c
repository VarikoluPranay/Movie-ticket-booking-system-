#include<stdio.h>
void cn(char *str)
{
    char b;
    printf("\nIf you want to cotinue booking(y/n) : ");
    fflush(stdin);
    scanf("%c",&b);
    if(b=='y')
    mn(str);
    else
    {
        if(b=='n')
        printf("\nThankyou %s for booking, Enjoy your cinema :)!!",str);
    }
    

}
void fn1(char *str)
{
    static int tickets = 90;
    int cat,nt;
     char a;
    if(tickets>0)
    {
    printf("\n Total tickets available %d \n",tickets);
    static int t1 = 30,t2 = 30, t3 = 30;
    printf("\n Tickets Category");
    printf("\n1.Premium : Tickets available %d - Per ticket 300/-\n2.Gold : Tickets available %d - Per ticket   - 250/-\n3.Silver : Tickets available %d - Per ticket - 200/-",t1,t2,t3);
    printf("\nSelect Category(1/2/3) : ");
    scanf("%d",&cat);
    switch(cat)
    {
        case 1 : 
        {
            if(t1>0)
           {
            printf("\n Premium Category Selected");
            printf("\n No.of tickets you want : ");
            scanf("%d",&nt);
            if(t1>=nt)
            {
            tickets -= nt;
            t1 -= nt;
            printf("\nTotal cost:%d/-",300*nt);
            printf("\n confirm booking (y/n) : ");
            fflush(stdin);
            scanf("%c",&a);
            if(a=='y')
            {
            printf("\nBooking confirmed");
            }
            else
             {
             if(a=='n')
             printf("\nBooking Cancled");
             else
             printf("\nInvalid Option"); 
             }
            }
            else
            printf("\nyou have exceeded the available tickets");
           }
           else
           printf("\n no tickets left in this category");
             break;           
        }
        case 2 : 
        {
            if(t2>0)
           {
            printf("\n Gold Category Selected");
            printf("\n No.of tickets you want : ");
            scanf("%d",&nt);
            if(t2>=nt)
            {
            tickets -= nt;
            t2 -= nt;
            printf("\nTotal cost:%d/-",250*nt);
            printf("\n confirm booking (y/n) : ");
            fflush(stdin);
            scanf("%c",&a);
            if(a=='y')
            {
            printf("\nBooking confirmed");
            }
            else
             {
             if(a=='n')
             printf("\nBooking Cancled");
             else
             printf("\nInvalid Option"); 
             }
            }
            else
            printf("\nyou have exceeded the available tickets");
           }
           else
           printf("\n no tickets left in this category");
             break;           
        }
        case 3 : 
        {
            if(t3>0)
           {
            printf("\n Silver Category Selected");
            printf("\n No.of tickets you want : ");
            scanf("%d",&nt);
            if(t3>=nt)
            {
            tickets -= nt;
            t3 -= nt;
            printf("\nTotal cost:%d/-",300*nt);
            printf("\n confirm booking (y/n) : ");
            fflush(stdin);
            scanf("%c",&a);
            if(a=='y')
            {
            printf("\nBooking confirmed");
            }
            else
             {
             if(a=='n')
             printf("\nBooking Cancled");
             else
             printf("\nInvalid Option"); 
             }
            }
            else
            printf("\nyou have exceeded the available tickets");
           }
           else
           printf("\n no tickets left in this category");
             break;           
        }
        default :
        printf("\n you have entered wrong option");
    }
    }
    else
    {
        printf("\n Sorry! No tickets available");
    
    }
    cn(str);
    
    
}
void fn2(char *str)
{
    static int tickets = 90;
    int cat,nt;
     char a;
    if(tickets>0)
    {
    printf("\n Total tickets available %d \n",tickets);
    static int t1 = 30,t2 = 30, t3 = 30;
    printf("\n Tickets Category");
    printf("\n1.Premium : Tickets available %d - Per ticket 300/-\n2.Gold : Tickets available %d - Per ticket   - 250/-\n3.Silver : Tickets available %d - Per ticket - 200/-",t1,t2,t3);
    printf("\nSelect Category(1/2/3) : ");
    scanf("%d",&cat);
    switch(cat)
    {
        case 1 : 
        {
            if(t1>0)
           {
            printf("\n Premium Category Selected");
            printf("\n No.of tickets you want : ");
            scanf("%d",&nt);
            if(t1>=nt)
            {
            tickets -= nt;
            t1 -= nt;
            printf("\nTotal cost:%d/-",300*nt);
            printf("\n confirm booking (y/n) : ");
            fflush(stdin);
            scanf("%c",&a);
            if(a=='y')
            {
            printf("\nBooking confirmed");
            }
            else
             {
             if(a=='n')
             printf("\nBooking Cancled");
             else
             printf("\nInvalid Option"); 
             }
            }
            else
            printf("\nyou have exceeded the available tickets");
           }
           else
           printf("\n no tickets left in this category");
             break;           
        }
        case 2 : 
        {
            if(t2>0)
           {
            printf("\n Gold Category Selected");
            printf("\n No.of tickets you want : ");
            scanf("%d",&nt);
            if(t2>=nt)
            {
            tickets -= nt;
            t2 -= nt;
            printf("\nTotal cost:%d/-",250*nt);
            printf("\n confirm booking (y/n) : ");
            fflush(stdin);
            scanf("%c",&a);
            if(a=='y')
            {
            printf("\nBooking confirmed");
            }
            else
             {
             if(a=='n')
             printf("\nBooking Cancled");
             else
             printf("\nInvalid Option"); 
             }
            }
            else
            printf("\nyou have exceeded the available tickets");
           }
           else
           printf("\n no tickets left in this category");
             break;           
        }
        case 3 : 
        {
            if(t3>0)
           {
            printf("\n Silver Category Selected");
            printf("\n No.of tickets you want : ");
            scanf("%d",&nt);
            if(t3>=nt)
            {
            tickets -= nt;
            t3 -= nt;
            printf("\nTotal cost:%d/-",300*nt);
            printf("\n confirm booking (y/n) : ");
            fflush(stdin);
            scanf("%c",&a);
            if(a=='y')
            {
            printf("\nBooking confirmed");
            }
            else
             {
             if(a=='n')
             printf("\nBooking Cancled");
             else
             printf("\nInvalid Option"); 
             }
            }
            else
            printf("\nyou have exceeded the available tickets");
           }
           else
           printf("\n no tickets left in this category");
             break;           
        }
        default :
        printf("\n you have entered wrong option");
    }
    }
    else
    {
        printf("\n Sorry! No tickets available");
    
    }
    cn(str);
}
void fn3(char *str)
{
    static int tickets = 90;
    int cat,nt;
     char a;
    if(tickets>0)
    {
    printf("\n Total tickets available %d \n",tickets);
    static int t1 = 30,t2 = 30, t3 = 30;
    printf("\n Tickets Category");
    printf("\n1.Premium : Tickets available %d - Per ticket 300/-\n2.Gold : Tickets available %d - Per ticket   - 250/-\n3.Silver : Tickets available %d - Per ticket - 200/-",t1,t2,t3);
    printf("\nSelect Category(1/2/3) : ");
    scanf("%d",&cat);
    switch(cat)
    {
        case 1 : 
        {
            if(t1>0)
           {
            printf("\n Premium Category Selected");
            printf("\n No.of tickets you want : ");
            scanf("%d",&nt);
            if(t1>=nt)
            {
            tickets -= nt;
            t1 -= nt;
            printf("\nTotal cost:%d/-",300*nt);
            printf("\n confirm booking (y/n) : ");
            fflush(stdin);
            scanf("%c",&a);
            if(a=='y')
            {
            printf("\nBooking confirmed");
            }
            else
             {
             if(a=='n')
             printf("\nBooking Cancled");
             else
             printf("\nInvalid Option"); 
             }
            }
            else
            printf("\nyou have exceeded the available tickets");
           }
           else
           printf("\n no tickets left in this category");
             break;           
        }
        case 2 : 
        {
            if(t2>0)
           {
            printf("\n Gold Category Selected");
            printf("\n No.of tickets you want : ");
            scanf("%d",&nt);
            if(t2>=nt)
            {
            tickets -= nt;
            t2 -= nt;
            printf("\nTotal cost:%d/-",250*nt);
            printf("\n confirm booking (y/n) : ");
            fflush(stdin);
            scanf("%c",&a);
            if(a=='y')
            {
            printf("\nBooking confirmed");
            }
            else
             {
             if(a=='n')
             printf("\nBooking Cancled");
             else
             printf("\nInvalid Option"); 
             }
            }
            else
            printf("\nyou have exceeded the available tickets");
           }
           else
           printf("\n no tickets left in this category");
             break;           
        }
        case 3 : 
        {
            if(t3>0)
           {
            printf("\n Silver Category Selected");
            printf("\n No.of tickets you want : ");
            scanf("%d",&nt);
            if(t3>=nt)
            {
            tickets -= nt;
            t3 -= nt;
            printf("\nTotal cost:%d/-",300*nt);
            printf("\n confirm booking (y/n) : ");
            fflush(stdin);
            scanf("%c",&a);
            if(a=='y')
            {
            printf("\nBooking confirmed");
            }
            else
             {
             if(a=='n')
             printf("\nBooking Cancled");
             else
             printf("\nInvalid Option"); 
             }
            }
            else
            printf("\nyou have exceeded the available tickets");
           }
           else
           printf("\n no tickets left in this category");
             break;           
        }
        default :
        printf("\n you have entered wrong option");
    }
    }
    else
    {
        printf("\n Sorry! No tickets available");
    
    }
    cn(str);
}
void fn4(char *str)
{
    static int tickets = 90;
    int cat,nt;
     char a;
    if(tickets>0)
    {
    printf("\n Total tickets available %d \n",tickets);
    static int t1 = 30,t2 = 30, t3 = 30;
    printf("\n Tickets Category");
    printf("\n1.Premium : Tickets available %d - Per ticket 300/-\n2.Gold : Tickets available %d - Per ticket   - 250/-\n3.Silver : Tickets available %d - Per ticket - 200/-",t1,t2,t3);
    printf("\nSelect Category(1/2/3) : ");
    scanf("%d",&cat);
    switch(cat)
    {
        case 1 : 
        {
            if(t1>0)
           {
            printf("\n Premium Category Selected");
            printf("\n No.of tickets you want : ");
            scanf("%d",&nt);
            if(t1>=nt)
            {
            tickets -= nt;
            t1 -= nt;
            printf("\nTotal cost:%d/-",300*nt);
            printf("\n confirm booking (y/n) : ");
            fflush(stdin);
            scanf("%c",&a);
            if(a=='y')
            {
            printf("\nBooking confirmed");
            }
            else
             {
             if(a=='n')
             printf("\nBooking Cancled");
             else
             printf("\nInvalid Option"); 
             }
            }
            else
            printf("\nyou have exceeded the available tickets");
           }
           else
           printf("\n no tickets left in this category");
             break;           
        }
        case 2 : 
        {
            if(t2>0)
           {
            printf("\n Gold Category Selected");
            printf("\n No.of tickets you want : ");
            scanf("%d",&nt);
            if(t2>=nt)
            {
            tickets -= nt;
            t2 -= nt;
            printf("\nTotal cost:%d/-",250*nt);
            printf("\n confirm booking (y/n) : ");
            fflush(stdin);
            scanf("%c",&a);
            if(a=='y')
            {
            printf("\nBooking confirmed");
            }
            else
             {
             if(a=='n')
             printf("\nBooking Cancled");
             else
             printf("\nInvalid Option"); 
             }
            }
            else
            printf("\nyou have exceeded the available tickets");
           }
           else
           printf("\n no tickets left in this category");
             break;           
        }
        case 3 : 
        {
            if(t3>0)
           {
            printf("\n Silver Category Selected");
            printf("\n No.of tickets you want : ");
            scanf("%d",&nt);
            if(t3>=nt)
            {
            tickets -= nt;
            t3 -= nt;
            printf("\nTotal cost:%d/-",300*nt);
            printf("\n confirm booking (y/n) : ");
            fflush(stdin);
            scanf("%c",&a);
            if(a=='y')
            {
            printf("\nBooking confirmed");
            }
            else
             {
             if(a=='n')
             printf("\nBooking Cancled");
             else
             printf("\nInvalid Option"); 
             }
            }
            else
            printf("\nyou have exceeded the available tickets");
           }
           else
           printf("\n no tickets left in this category");
             break;           
        }
        default :
        printf("\n you have entered wrong option");
    }
    }
    else
    {
        printf("\n Sorry! No tickets available");
    
    }
    cn(str);
}


void mn(char *str)
{
    int n;
    printf("    Cantilever Project ");
    printf("\n***********  Welcome to Geethanjali Cineams  ************");
    printf("\nMovies Playing Now : ");
    printf("\n1.Waltaire Veeraya  2.Veera Simha Reddy");
    printf("\n3.Varisu            4.Pathaan");
    printf("\n  Enter your choice(1/2/3/4) : ");
    scanf("%d",&n);

    switch(n)
    {
        case 1 : {
             printf("\n You have selected 'Waltaire Veeraya'");
             fn1(str);
             break;
             
        }
        case 2 : {
             printf("\n You have selected 'Veera Simha Reddy'");
             fn2(str);
             break;
             
        }
        case 3 : {
             printf("\n You have selected 'Varisu'");
             fn3(str);
             break;
             
        }case 4 : {
             printf("\n You have selected 'Pathaan'");
             fn4(str);
             break;
             
        }
        default :
        printf("\n you have entered wrong option");

    }
}



void main()
{
    long int j;
    char str[50];
    printf("\nEnter your name : ");
    scanf("%s",str);
    printf("\nEnter your mobile number : ");
    scanf("%ld",&j); 
    mn(str);
}