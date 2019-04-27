public class GetAvailableProcessors {
	
	public static void main(String args[])
	{
		/*
		 * get current Java Runtime using getRuntime()
		 * method of Runtime class.
		 */
		Runtime runtime = Runtime.getRuntime();
		
		/*
		 * use availableProcessors method to determine
		 * how many processors are available to the Java Virtual
		 * Machine (JVM).
		 */
		 
		 int numberOfProcessors = runtime.availableProcessors();
		 
		 System.out.println(numberOfProcessors + " processor available to JVM");
	}
}