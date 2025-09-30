import java.util.Date;

public class Account {
    // data fields
    private int id = 0;
    private double balance = 0.0;
    private double annualInterestRate = 0.0;
    private Date dateCreated;

    // methods
    public Account() {
        dateCreated = new Date();
    }

    public Account(int initid, double initbalance) {
        id = initid;
        balance = initbalance;
        dateCreated = new Date();
    }

    // mutator
    public void set_id(int newid) {
        id = newid;
    }

    // accessor
    public int get_id() {
        return id;
    }

    // mutator
    public void set_balance(double newbalance) {
        balance = newbalance;
    }

    // accessor
    public double get_balance() {
        return balance;
    }

    public Date get_dateCreated() {
        return dateCreated;
    }

    public double getMonthlyInterestRate() {
        return annualInterestRate / 12;
    }

    public double getMonthlyInterest() {
        return balance * getMonthlyInterestRate();
    }

    public double withdraw(double amount) {
        balance = balance - amount;
        return amount;
    }

    public double deposit(double amount) {
        balance = balance + amount;
        return balance;
    }
}
