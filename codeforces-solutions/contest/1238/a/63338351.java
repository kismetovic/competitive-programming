import java.util.*;

public class prvi{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t>0){
			long a = sc.nextLong();
			long b = sc.nextLong();
			if((a-b)>1) System.out.println("YES");
			else System.out.println("NO");
			t--;
		}
	}
}
