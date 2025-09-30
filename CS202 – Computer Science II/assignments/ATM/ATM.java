import java.util.*;

public class ATM {

    public static void main(String[] args){

        //create and initialize 10 accounts
        Account[] accounts = new Account[10];

        for(int i=0; i<accounts.length; i++)
        accounts[i] = new Account(i,100.0);

        //Display menu
        Scanner keyboard = new Scanner(System.in);
        //keep ATM running

        while(true)
        {
            System.out.println("Enter an ID: ");
            int id = keyboard.nextInt();

            if(id<0 || id>9) //input validation on user ID
            {
                System.out.println("Wrong ID entered!");
                continue;
            }
//start to serrve an individual customer
            while(true)
            {
            int choice = menu();
            if(choice==1)
            {
                System.out.println("The balence is: " + accounts[id].get_balance());
            }
            else if(choice==2)
            {
                System.out.print("Enter amount to withdraw: ");
                double amount = keyboard.nextDouble();
                accounts[id].withdraw(amount);
            }

            else if (choice==3) {
                System.out.println("How much would you like to deposit? ");
                double amount = keyboard.nextDouble();
                accounts[id].deposit(amount);
                
            }

            else if(choice==4) {
                System.out.println("have a great day!");
                break;
            }
            else{
                System.out.println("wrong option entered");
            }
            }

        }
    }

    public static int menu()    //to display menu for ATM and recieve user input
    {
        System.out.println("\n Main Menu");
        System.out.println("\n1. check balance");
        System.out.println("\n2. withdraw");
        System.out.println("\n3. deposit");
        System.out.println("\n4. 3exit");

        System.out.print("enter a choice: ");
        Scanner keyboard = new Scanner(System.in);
        int choice = keyboard.nextInt();
        return choice;
    }
    
}
