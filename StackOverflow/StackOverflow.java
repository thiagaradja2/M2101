public class StackOverflow {
	public static int fonction( int n){
		if(n <= 0){
			return 0;
		}
		else{
			return 1+fonction(n-1);
		}

	}
	public static void main(String[] args){
			System.out.println(fonction(1000));
			System.out.println(fonction(1000000));
	
	} 

}


