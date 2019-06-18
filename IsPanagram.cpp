#include <string>
#include <iostream>
#include <ctype.h>

public class IsPanagram {
    void sortString (String input){
		int len = input.length();
		  for ( int i = 0; i <  len; i ++){
                for  ( int j =  0;  j < len; j ++) {
                        if (strcmp(input [ j - 1 ],  input [ j ]) > 0){
                                strcpy (sortInputString, input [ j - 1 ]);
                                strcpy (input [ j - 1 ], input [ j ] );
                                strcpy ( input [ j ], sortInputString);
                        }
                }
        }
		panagram(input, len);
	}
	boolean panagram(String Array, int len){
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

	int main() {
		String input = argsv[0];
                tolower(input);
		sortString (input);
	}

}
