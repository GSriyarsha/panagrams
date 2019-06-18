import java.io.*;
import java.util.Arrays;

public class IsPanagram {
	public static void sortString (String input){
		int len = input.length();
		char[] inputArray = input.toCharArray();
		Arrays.sort(inputArray);
		 panagram(inputArray, len);
	}
	public static boolean panagram(char[] inputArray, int len){
		int count = 0;
		for ( int  i = 0; i < len; i ++){
			if ((i != len - 1) && (((int)(inputArray[i] + 1)) == ((int)inputArray[i + 1]))){
				count ++;
			}
			else {
				break;
			}
		}
		if (count == 26){
			return true;
		}
		return false;

	}

	public static void main(String[] args) {
		String input = args[0];
                input.toLowerCase();
  	        sortString (input);
	}

}
