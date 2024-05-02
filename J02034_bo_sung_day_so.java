import java.util.*;
public class J02034_bo_sung_day_so {
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    boolean xh[] = new boolean[201];
    int a[] = new int[101];
    for(int i = 1; i <= 200; i++){
        xh[i] = false;
    }
    int max = a[1];
    for(int i = 2;i <= n ; i++){
        if(a[i] > max){
            max = a[i];
        }
    }
    for(int i =1; i<=n;i++){
        a[i] = sc.nextInt();
        xh[a[i]] = true;
    }
    for(int i = 1; i <= max; i++){
        if(xh[i] == false){
            System.out.println(i);
        }
    }
}
