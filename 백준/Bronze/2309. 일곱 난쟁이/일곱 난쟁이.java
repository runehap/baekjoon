import java.util.Scanner;
import java.util.Arrays;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int[] a = new int[9];
		int sum =0;
		int a1,a2;
		
		for(int i=0;i<9;i++) {
			a[i] = sc.nextInt();
			sum += a[i];
		}
		sum -= 100;
		for(int i=0;i<9;i++) {
			for(int j=i+1;j<9;j++) {
				if(a[i]+a[j] == sum) {
					a[i]=0;
					a[j]=0;
					break;
				}
			}
			if(a[i]==0)break;
		}
	 Arrays.sort(a);
		
		for(int i=0;i<9;i++) {
			if(a[i] == 0)continue;
			System.out.println(a[i]);
		}
		
	}

}