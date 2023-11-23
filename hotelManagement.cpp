//here we have created project of HOTEL MANAGEMENT SYSTEM
//HERE we will have info of how many roms are there food any how many rooms are alloted
//sales and reamining food stalls 
//we will make this project in three parts 1: declared some varialbe
// 2:we will enter quantity of hotel like rooms and food
// 3: we will make list of items and rooms


#include<iostream>
using namespace std;



int main()
{
int quant;
int choice;

int Qrooms=0,Qpasta=0,Qburger=0,Qnoodles=0, Qshake=0, Qchicken=0; //these holds Quantity

int Srooms=0,Spasta=0,Sburger=0,Snoodles=0, Sshake=0, Schicken=0;  // These holds Sold items

int Total_rooms=0,Total_pasta=0,Total_burger=0,Total_noodles=0, Total_shake=0, Total_chicken=0; // these holds total of above


cout<<"\n\t *********SUSHANT HOTEL MANAGEMENT PROJECT C++**********";

cout<<"\n\t Quantity of items we have ";
cout<<"\n Rooms available ";
cin>>Qrooms;

cout<<"\n Quantity of Pasta ";
cin>>Qpasta;

cout<<"\n Quantity of burger ";      // here Quantity is present in output
cin>>Qburger;

cout<<"\n Quantity of noodles ";
cin>>Qnoodles;

cout<<"\n Quantity of shake ";
cin>>Qshake;

cout<<"\n Quantity of chicken Roll ";
cin>>Qchicken;


menu:
cout<<"\n\t  PLEASE SELECT FROM THE MENU FROM THE MENU OPTION ";
cout<<"\n\n 1) Rooms ";
cout<<"\n 2) Pasta ";
cout<<"\n 3) BURGER ";
cout<<"\n 4) NOODLES ";
cout<<"\n 5) SHAKE ";
cout<<"\n 6) CHICKEN ROLL ";
cout<<"\n 7) INFO REGARDING SALES AND COLLECTION ";
cout<<"\n 8) EXIT :)";

cout<<"\n\n Please Enter Your Choice ";
cin>>choice;


switch(choice)
{
   case 1:
       cout<<"\n\n Enter the No of Rooms you want: ";
       cin>>quant;
       if(Qrooms-Srooms >=quant)
       {
          Srooms=Srooms+quant;
          Total_rooms= Total_rooms+quant*1200;
          cout<<"\n\n "<<quant<<" Rooms have been alloted to you";

       }
       else
       {
           cout<<"\n ONLy "<<Qrooms-Srooms<<" Rooms remaining in hotel";
           break;   
       }

       goto menu;
       case 2:
       cout<<"\n\n Enter the Quantity of Pasta you want: ";
       cin>>quant;
       if(Qpasta-Spasta >=quant)
       {
          Spasta=Spasta+quant;
          Total_pasta= Total_pasta+quant*200;
          cout<<"\n\n\t\t "<<quant<<" Pasta has been order ! thank you";

       }
       else
       {
           cout<<"\n ONLy "<<Qpasta-Spasta<<" Pasta remaining in hotel";
           break;   
       }
         goto menu;

       case 3:
       cout<<"\n\n Enter Quantity of Burger you want: ";
       cin>>quant;
       if(Qburger-Sburger >=quant)
       {
          Sburger=Sburger+quant;
          Total_burger= Total_burger+quant*120;
          cout<<"\n\n\t\t "<<quant<<" Great Burger has been order!";

       }
       else
       {
           cout<<"\n ONLy"<<Qburger-Sburger<<"Burger remaing  in hotel";
           break;   
       }
          goto menu;

       case 4:
       cout<<"\n\n Enter the No of Noodles you want: ";
       cin>>quant;
       if(Qnoodles-Snoodles >=quant)
       {
          Snoodles=Snoodles+quant;
          Total_noodles= Total_noodles+quant*150;
          cout<<"\n\n\t "<<quant<<" Yamm ! Noodles have been order";

       }
       else
       {
           cout<<"\n ONLy "<<Qnoodles-Snoodles<<" Noodles plates remaining in hotel";
           break;   
       }
         goto menu;

       case 5:
       cout<<"\n\n Enter the No of Shake  you want: ";
       cin>>quant;
       if(Qshake-Sshake >=quant)
       {
          Sshake=Sshake+quant;
          Total_shake= Total_shake+quant*300;
          cout<<"\n\n\t\t "<<quant<<" Sip! Shake has been ordered";

       }
       else
       {
           cout<<"\n ONLy"<<Qshake-Sshake<<"Shake remaining in hotel";
           break;   
       }
          goto menu;

       case 6:
       cout<<"\n\n Enter the No of Chicken roll you want: ";
       cin>>quant;
       if(Qchicken-Schicken >=quant)
       {
          Schicken=Schicken+quant;
          Total_chicken= Total_chicken+quant*200;
          cout<<"\n\n\t\t "<<quant<<" CHICKEN! has been ordered Thank you ordering";

       }
       else
       {
           cout<<"\n ONLy "<<Qrooms-Srooms<<" CHicken remaining in hotel";
           break;   
       }
           goto menu;
       case 7:
       cout<<"\n\t\tDetails of sales and collection ";
       cout<<"\n\n NUmber of Rooms we had :"<<Qrooms;
       cout<<"\n\n Number of Rooms we sold :"<<Srooms;
       cout<<"\n\n Remaining Rooms:  "<<Qrooms-Srooms;
       cout<<"\n\n Total Rooms collection for the Day: "<<Total_rooms;

       //TO DISPLAY COLLECTION OF PASTA

       cout<<"\n\n NUmber of PASTAS we had :"<<Qpasta;
       cout<<"\n\n Number of PASTAS we sold :"<<Spasta;
       cout<<"\n\n Remaining PASTAS:  "<<Qpasta-Spasta;
       cout<<"\n\n Total PASTAS collection for the Day: "<<Total_pasta;

       // TO DISPLAY COLLECTION OF BURGER

       cout<<"\n\n NUmber of BURGER'S we had :"<<Qburger;
       cout<<"\n\n Number of BURGER'S we sold :"<<Sburger;
       cout<<"\n\n Remaining BURGER'S:  "<<Qburger-Sburger;
       cout<<"\n\n Total BURGER'S collection for the Day: "<<Total_burger;

       //TO DISPLAY COLLECTION OF NOODLES

       cout<<"\n\n NUmber of NOODLES'S we had :"<<Qnoodles;
       cout<<"\n\n Number of NOODLES'S we sold :"<<Snoodles;
       cout<<"\n\n Remaining NOODLES'S:  "<<Qnoodles-Snoodles;
       cout<<"\n\n Total NOODLES'S collection for the Day: "<<Total_noodles;

       //TO DISPLAY COLLECTION OF SHAKE

       cout<<"\n\n NUmber of SHAKE'S we had :"<<Qshake;
       cout<<"\n\n Number of SHAKE'S we sold :"<<Sshake;
       cout<<"\n\n Remaining SHAKE'S:  "<<Qshake-Sshake;
       cout<<"\n\n Total SHAKE'S collection for the Day: "<<Total_shake;

       //TO DISPLAY COLLECTION OF CHICKEN

       cout<<"\n\n NUmber of CHICKEN'S we had :"<<Qchicken;
       cout<<"\n\n Number of CHIKEN'S we sold :"<<Schicken;
       cout<<"\n\n Remaining CHICKEN'S:  "<<Qchicken-Schicken;
       cout<<"\n\n Total CHICKEN'S collection for the Day: "<<Total_chicken;

       //TO EXIT CASE
        
         

       case 8:
       exit(0);
       default:
       cout<<"Please select the number mentioned above thank you";

     
}



return 0;
} 