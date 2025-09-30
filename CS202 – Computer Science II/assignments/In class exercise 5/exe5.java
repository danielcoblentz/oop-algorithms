public class exe5{
    public static void main(String[] args) {
        PhoneDirectory contactlist = new PhoneDirectory();

        contactlist.addOrChangeEntry("Tom", "111"); //default list
        contactlist.addOrChangeEntry("Nick", "222");
        contactlist.addOrChangeEntry("Mary", "333");

        System.out.println();
        contactlist.print();                                        //print list
        contactlist.addOrChangeEntry("Tom", "444");
        System.out.println();
        contactlist.print();                                        //print updated list

        contactlist.removeEntry("Nick");
        System.out.println();
        contactlist.print();

        contactlist.removeEntry("John");                       //testing target not found case
        System.out.println();
        contactlist.print();
    }
}