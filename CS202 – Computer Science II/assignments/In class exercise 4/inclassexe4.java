import java.util.*;
public class inclassexe4 {
    public static void main(String[] args) {
//main program

Scanner keyboard = new Scanner(System.in);
System.out.println("Enter a seq of integer (ends with 0): ");

ArrayList<Integer> list = new ArrayList<Integer>();

int i=0;
int temp = keyboard.nextInt();
while(true){
    if(temp==0) break;
    list.add(temp);
    temp=keyboard.nextInt();

}
System.out.println(list);
//testing other methods from instruction
System.out.println("The max value in the list is: "+ max(list));
System.out.println("The total vlaue in the list is: "+ sum(list));
System.out.println(nodup(list));
    }

    //Part A)
    public static int max(ArrayList<Integer> List){ // int[] a

        int max = List.get(0);
        for(int i =0;i<List.size();i++){
            if(List.get(i)>max)
            max=List.get(i);
        }
return max;
    }

    public static int sum(ArrayList<Integer> list)
    {
        int sum=0;
        for(int i=0;i<list.size();i++)
        {
            sum += list.get(i);
        }
        return sum;
    }

    public static ArrayList<Integer> nodup (ArrayList<Integer> list)
    {
        ArrayList<Integer> result = new ArrayList<Integer>();
        for(int i = 0; i<list.size();i++)
        {
            if( result.indexOf(list.get(i))==-1) //result.index is the result of line 49 (array) refrence lecture sldies
                result.add(list.get(i));        //add value into the result list  //if the vlaue is not found in the result list
        }
        return result;
    }
    
    
}
