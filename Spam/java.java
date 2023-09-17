import java.util.*;

class Result {

    /*
     * Complete the 'findDay' function below.
     *
     * The function is expected to return a STRING.
     * The function accepts following parameters:
     *  1. INTEGER month
     *  2. INTEGER day
     *  3. INTEGER year
     */

    public static String findDay(int month, int day, int year) {
        //n = (ngày+2*tháng +(3*(tháng+1)) / 5 + năm + (năm / 4)) % 7
        int n = (day + 2*month + (3*(month+1))/5 + year + (year/4))%7;
        switch (n)
        {
            case 0: return "SUNDAY";
            //break;
            case 1: return "MONDAY";
            //break;
            case 2: return "TUESDAY";
            //break;
            case 3: return "WEDNESDAY";
            //break;
            case 4: return "THURSDAY";
            //break;
            case 5: return "FRIDAY";
            
        }
        return "SATURDAY";
    }
}

public class java {
    public static void main(String[] args)  {
        
        Scanner scan = new Scanner (System.in);

        int month = scan.nextInt();

        int day = scan.nextInt();

        int year = scan.nextInt();

        //String res = Result.findDay(month, day, year);

        int n = (day + ((153 * (month + 12 * ((14 - month) / 12) - 3) + 2) / 5) +
     (365 * (year + 4800 - ((14 - month) / 12))) +
     ((year + 4800 - ((14 - month) / 12)) / 4) - 
    ((year + 4800 - ((14 - month) / 12)) / 100) + 
    ((year + 4800 - ((14 - month) / 12)) / 400)  - 32045) % 7;;
        /*switch (n)
        {
            case 0: System.out.print("SUNDAY") ;
            break;
            case 1: System.out.print("MONDAY");
            break;
            case 2: System.out.print("TUESDAY");
            break;
            case 3: System.out.print("WEDNESDAY");
            break;
            case 4: System.out.print("THURSDAY");
            break;
            case 5: System.out.print("FRIDAY");
            break;
            case 6: System.out.print("SATURDAY");
            break;
        }*/
        System.out.println(n);
        scan.close();
    }
}