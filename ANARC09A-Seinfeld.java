import java.util.*;
import java.io.*;
class Seinfeld {
  private static int solve(String s){
    int op=0,open=0;
    for(int i=0;i<s.length();i++){
      if(s.charAt(i)=='{'){
        open++;
      }
      else if (open>0){
        open--;
      }
      else{
        open++;
        op++;
      }
    }
    op+=open/2;
    return op;
  }

  public static void main(String args[]) throws Exception{
   BufferedReader br=new BufferedReader(new InputStreamReader(System.in));  
   int zz=1;
   while(true){
      String s=br.readLine();
      if(s.charAt(0)=='-') break;
      System.out.println((zz++)+". "+solve(s));

    }
  }
}