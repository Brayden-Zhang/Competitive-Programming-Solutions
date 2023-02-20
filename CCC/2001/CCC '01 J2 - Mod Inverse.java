import java.io.*;
import java.util.*;

public class Main {
   public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int x = in.nextInt();
        int m = in.nextInt();
        System.out.println(modInverse(x,m));
    }
    public static String modInverse(int x, int m){
      for(int i = 1; i<m; i++){
          if((i*x)%m==1){ 
            return Integer.toString(i);
          }
      }
      return "No such integer exists.";
    }
}
