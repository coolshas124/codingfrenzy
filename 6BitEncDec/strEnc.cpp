#include <iostream>
#include <string>
#include <stdio.h>
#include <sstream>

using namespace std;

string charToBin(char c){
	string s = "";
	
	for(int i = 7; i >= 0; i--){	
		stringstream ss;
		ss << ((c>>i)&1);
		s = s + ss.str();
	}
	return s;
}

string strToBin(string s){
	int length = s.length();

	string tempString = "";

	for (int i=0; i<length; i++){
		tempString = tempString + charToBin(s[i]);
	}

	return tempString;
}

string encode(string s){
	string sCopy = "";
	string tempString = "";
	string outputString = "";

	int suffix = s.length()%6;


	int extra = 0;

	if (suffix > 0){
		extra = 6 - suffix;	
	} 

	sCopy = sCopy + s;

	for (int i=0; i<extra; i++){
		sCopy = sCopy + "0";
	}

	int iterations = sCopy.length()/6;

	for (int i=0; i<iterations; i++){
		tempString = tempString + sCopy.substr(i*6,6);
		
		if (tempString.compare("000000")==0){
			outputString = outputString + "A";
		}

		else if (tempString.compare("000001")==0){
			outputString = outputString + "B";
		}

		else if (tempString.compare("000010")==0){
			outputString = outputString + "C";
		}
		else if (tempString.compare("000011")==0){
			outputString = outputString + "D";
		}
		else if (tempString.compare("000100")==0){
			outputString = outputString + "E";
		}
		else if (tempString.compare("000101")==0){
			outputString = outputString + "F";
		}
		else if (tempString.compare("000110")==0){
			outputString = outputString + "G";
		}
		else if (tempString.compare("000111")==0){
			outputString = outputString + "H";
		}
		else if (tempString.compare("001000")==0){
			outputString = outputString + "I";
		}
		else if (tempString.compare("001001")==0){
			outputString = outputString + "J";
		}
		else if (tempString.compare("001010")==0){
			outputString = outputString + "K";
		}
		else if (tempString.compare("001011")==0){
			outputString = outputString + "L";
		}
		else if (tempString.compare("001100")==0){
			outputString = outputString + "M";
		}
		else if (tempString.compare("001101")==0){
			outputString = outputString + "N";
		}
		else if (tempString.compare("001110")==0){
			outputString = outputString + "O";
		}
		else if (tempString.compare("001111")==0){
			outputString = outputString + "P";
		}

		else if (tempString.compare("010000")==0){
			outputString = outputString + "Q";
		}

		else if (tempString.compare("010001")==0){
			outputString = outputString + "R";
		}

		else if (tempString.compare("010010")==0){
			outputString = outputString + "S";
		}
		else if (tempString.compare("010011")==0){
			outputString = outputString + "T";
		}
		else if (tempString.compare("010100")==0){
			outputString = outputString + "U";
		}
		else if (tempString.compare("010101")==0){
			outputString = outputString + "V";
		}
		else if (tempString.compare("010110")==0){
			outputString = outputString + "W";
		}
		else if (tempString.compare("010111")==0){
			outputString = outputString + "X";
		}
		else if (tempString.compare("011000")==0){
			outputString = outputString + "Y";
		}
		else if (tempString.compare("011001")==0){
			outputString = outputString + "Z";
		}
		else if (tempString.compare("011010")==0){
			outputString = outputString + "a";
		}
		else if (tempString.compare("011011")==0){
			outputString = outputString + "b";
		}
		else if (tempString.compare("011100")==0){
			outputString = outputString + "c";
		}
		else if (tempString.compare("011101")==0){
			outputString = outputString + "d";
		}
		else if (tempString.compare("011110")==0){
			outputString = outputString + "e";
		}
		else if (tempString.compare("011111")==0){
			outputString = outputString + "f";
		}

		else if (tempString.compare("100000")==0){
			outputString = outputString + "g";
		}

		else if (tempString.compare("100001")==0){
			outputString = outputString + "h";
		}

		else if (tempString.compare("100010")==0){
			outputString = outputString + "i";
		}
		else if (tempString.compare("100011")==0){
			outputString = outputString + "j";
		}
		else if (tempString.compare("100100")==0){
			outputString = outputString + "k";
		}
		else if (tempString.compare("100101")==0){
			outputString = outputString + "l";
		}
		else if (tempString.compare("100110")==0){
			outputString = outputString + "m";
		}
		else if (tempString.compare("100111")==0){
			outputString = outputString + "n";
		}
		else if (tempString.compare("101000")==0){
			outputString = outputString + "o";
		}
		else if (tempString.compare("101001")==0){
			outputString = outputString + "p";
		}
		else if (tempString.compare("101010")==0){
			outputString = outputString + "q";
		}
		else if (tempString.compare("101011")==0){
			outputString = outputString + "r";
		}
		else if (tempString.compare("101100")==0){
			outputString = outputString + "s";
		}
		else if (tempString.compare("101101")==0){
			outputString = outputString + "t";
		}
		else if (tempString.compare("101110")==0){
			outputString = outputString + "u";
		}
		else if (tempString.compare("101111")==0){
			outputString = outputString + "v";
		}

		else if (tempString.compare("110000")==0){
			outputString = outputString + "w";
		}

		else if (tempString.compare("110001")==0){
			outputString = outputString + "x";
		}

		else if (tempString.compare("110010")==0){
			outputString = outputString + "y";
		}
		else if (tempString.compare("110011")==0){
			outputString = outputString + "z";
		}
		else if (tempString.compare("110100")==0){
			outputString = outputString + "0";
		}
		else if (tempString.compare("110101")==0){
			outputString = outputString + "1";
		}
		else if (tempString.compare("110110")==0){
			outputString = outputString + "2";
		}
		else if (tempString.compare("110111")==0){
			outputString = outputString + "3";
		}
		else if (tempString.compare("111000")==0){
			outputString = outputString + "4";
		}
		else if (tempString.compare("111001")==0){
			outputString = outputString + "5";
		}
		else if (tempString.compare("111010")==0){
			outputString = outputString + "6";
		}
		else if (tempString.compare("111011")==0){
			outputString = outputString + "7";
		}
		else if (tempString.compare("111100")==0){
			outputString = outputString + "8";
		}
		else if (tempString.compare("111101")==0){
			outputString = outputString + "9";
		}
		else if (tempString.compare("111110")==0){
			outputString = outputString + "+";
		}
		else if (tempString.compare("111111")==0){
			outputString = outputString + "/";
		}
		tempString = "";
	}

	return outputString;
}

int main(int argc, char const *argv[])
{
	/* code */
	string s;
	cin>>s;

	cout<<encode(strToBin(s));
	return 0;
}

