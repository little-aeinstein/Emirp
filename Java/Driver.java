public class Driver{
    public static void main(String[] args){
        Prime p = new Prime();
        Reverse r = new Reverse();

        for(int num = 1; num <= 100; num++){
            if(p.isPrime(num)){
                int revNum = r.getReverse(num);
                if(p.isPrime(revNum)) System.out.println(num);
            }
        }
    }
}