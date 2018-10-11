import java.io.*;
public class NQueens {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
    static int a[] = new int[13], cont;
    public static void main(String[] args) throws IOException {
        String n;
        while((n = br.readLine()) != null){
            int num = Integer.parseInt(n);
            cont = 0;
            solve(1,num);
            if(cont == 0){
                bw.write("No Solution.");
                bw.newLine();
            }
            bw.flush();
        }
    }
    static boolean isSafe(int col, int fil){
        int ant;
        for(ant = 1; ant <= col - 1; ant++){
            if(a[ant] == fil || (Math.abs(a[ant] - fil) == Math.abs(ant - col)))
                return false;
        }
        return true;
    }
    
    static void solve(int col, int n)throws IOException{
        int fil;
        for(fil = 1; fil <= n; fil++){
            if(isSafe(col,fil)){
                a[col] = fil;
                if(col == n){
                    bw.write(++cont + " : " );
                    for(int x=1;x<=n;x++){
                        bw.write(a[x] + " ");
                    }
                    bw.newLine(); bw.flush();
                }else
                    solve(col + 1, n);
            }
        }
    }
}