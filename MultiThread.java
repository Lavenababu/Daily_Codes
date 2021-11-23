class Thread1 extends Thread{

    public void run(){
        try{
            System.out.println("Thread "+ Thread.currentThread().getId()+" is running " + Thread.currentThread().getName());
        } catch(Exception e){
            System.out.println("Exception caught");
        }
    }
}

public class MultiThread {
    public static void main(String[] args) {
        
        int n = 5;
        for (int i=0; i<n; i++){
            Thread1 t1 = new Thread1();

            t1.start();
        }
    }
}
