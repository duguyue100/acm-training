// UVa 10013 Super long sums

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.PrintWriter;
import java.io.StreamTokenizer;

class Main{

	static StreamTokenizer input;
	static PrintWriter output;
	public static void main(String[] args) throws IOException
	{
		input=new StreamTokenizer(new BufferedReader(new InputStreamReader(System.in)));
		output = new PrintWriter(new OutputStreamWriter(System.out));

        int T=nextInt();
		
        for (int t=1; t<=T; t++)
        {
            int n=nextInt();
            
            int[] a=new int[1000050];
            int[] b=new int[1000050];
            
            for (int i=1;i<=n;i++)
            {
                a[i]=nextInt();
                b[i]=nextInt();
            }
            
            for (int i=n;i>=0;i--)
            {
                a[i]=a[i]+b[i];
                if (a[i]>=10)
                {
                    a[i-1]++;
                    a[i]%=10;
                }
            }
            
            if (a[0] != 0) output.print(a[0]);
            for (int i=1;i<=n;i++)
            {
                output.print(a[i]);
            }
            output.println();
            
            if (t != T)
                output.println();

            output.flush();
        }
	}
	
	public static int nextInt() throws IOException
	{
		input.nextToken();
		return (int)input.nval;
	}

}
