package LP3_JAVA;

public class Temperatura {
    
    public static double converter( double Temperatura){
        return (Temperatura * 9/5) + 32;
    }
    public static void main (String[]args){
        double c= 25;

        System.out.println(converter(c));
    }
}
