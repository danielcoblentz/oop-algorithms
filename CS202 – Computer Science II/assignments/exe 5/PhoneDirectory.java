/**
 * This is an implementation of the PhoneDirectoryInterface
 * that uses an ArrayList to store the data.
 */
import java.util.ArrayList;

public class PhoneDirectory {

    // Data fields
    /** The ArrayList to contain the directory data */
    private ArrayList<DirectoryEntry> theDirectory = new ArrayList<>();

//implementing contact lsit

//methods
/** Add an entry to theDirectory or change an existing entry.
@param aName The name of the person being added or changed
@param newNumber The new number to be assigned
@return The old number, or if a new entry, null */
public String addOrChangeEntry(String aName, String newNumber) {

//check if aNanme is already in list or not
for(int i =0; i<theDirectory.size(); i++){
    if(theDirectory.get(i).getName().equals(aName)) //name is found just update entry
    {
        String number = theDirectory.get(i).getNumber(); //hold the old number
        theDirectory.get(i).setNumber(newNumber); //update new number
        return number;
    }
    
}
// name is aName is not found in list, add a new entry in the contact list
theDirectory.add(new DirectoryEntry(aName, newNumber));
return null;
}

//2nd method
/** Remove an entry.
@param aName The name of the person being removed
@return The entry removed, or null if there is no entry for aName */
public DirectoryEntry removeEntry(String aName) {

    for(int i =0; i<theDirectory.size(); i++){
        if(theDirectory.get(i).getName().equals(aName)) //name is found just remove the entry
        {
          // DirectoryEntry temp = theDirectory.get(i);
           return theDirectory.remove(i);
           //return temp;
        }
        
    }
    // aName is ont found, return null
    return null;
 }

 public void print(){
    for(int i=0; i<theDirectory.size(); i++){
        System.out.println(theDirectory.get(i).getName()+ " " + theDirectory.get(i).getNumber()); // helper function to see the array and methods created above
    }
 }
   
}
