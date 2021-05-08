import java.util.*;

public class A1277 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		for (int i = 0; i < n; i++) {
			int a = sc.nextInt();
			System.out.println(jest(a));
		}
	}

	public static int jest(int a) {
		if (a < 10) return a;
		int rez = 9;
		if (a > 10) {
			if (a < 100)
				for (int i = 11; i <= a; i+= 11)
					rez++;
			else
				rez+=9;
		}
		if (a >= 100) {
			if (a < 1000) {
				for (int i = 111; i <= a; i += 111)
				      rez++;	
			}
			else
				rez += 9;
		}
		if (a >= 1000) {
			if (a < 10000) {
				for (int i = 1111; i <= a; i += 1111)
				      rez++;	
			}
			else
				rez += 9;
		}
		if (a >= 10000) {
			if (a < 100000) {
				for (int i = 11111; i <= a; i += 11111)
				      rez++;	
			}
			else
				rez += 9;
		}
		if (a >= 100000) {
			if (a < 1000000) {
				for (int i = 111111; i <= a; i += 111111)
				      rez++;	
			}
			else
				rez += 9;
		}
		if (a >= 1000000) {
			if (a < 10000000) {
				for (int i = 1111111; i <= a; i += 1111111)
				      rez++;	
			}
			else
				rez += 9;
		}
		if (a >= 10000000) {
			if (a < 100000000) {
				for (int i = 11111111; i <= a; i += 11111111)
				      rez++;	
			}
			else
				rez += 9;
		}
		if (a >= 100000000) {
			if (a <= 1000000000) {
				for (int i = 111111111; i <= a; i += 111111111)
				      rez++;	
			}
			else
				rez += 9;
		}
	//	if (a == 1000000000) {
	//		rez += 1;
	//	}
		return rez;
	}
}
