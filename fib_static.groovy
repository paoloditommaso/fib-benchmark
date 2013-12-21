
@groovy.transform.CompileStatic
class fib
{
    public static void main(String[] args)
    {
        long t1 = System.currentTimeMillis();

        long n = Integer.parseInt(args[0]);
        long a = 1, b = 0, t;

        for(long i = 0; i < n; i++) {
            t = b;
            b = a+b;
            a = t;
        }
    
        long millis = (System.currentTimeMillis() - t1);
        // prints as a signed number in java - argh
        System.out.printf("%d - time: %d millis\n", b, millis);
    }
}