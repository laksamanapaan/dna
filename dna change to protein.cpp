#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include<cstring>
using namespace std;

char changeSymbol (string codon){  													//function to declare all symbol
	char symbol;
	string str1, str2, str3, str4, str5, str6, str7, str8, str9, str10;
str1="AGG"; str2="AAA"; str3="AGC"; str4="AGA"; str5="ATT"; str6="ACT"; str7="AAT"; str8="TAC"; str9="CCT", str10="AGG";
	if (codon==str1 || codon==str4 || codon==str10){
		symbol='R';
		return symbol;
	}
	else if (codon==str2){
		symbol='K';
		return symbol;
	}
	else if (codon==str3){
		symbol='S';
		return symbol;
	}
	else if (codon==str5){
		symbol='I';
		return symbol;
	}
	else if (codon==str6){
		symbol='T';
		return symbol;
	}
	else if(codon==str7){
		symbol='N';
		return symbol;
	}
	else if (codon==str8){
		symbol='Y';
		return symbol;
	}
	else if (codon==str9){
		symbol='P';
		return symbol;
	}
	else{
		symbol='X';
		return symbol;
	}
}

string changeAmino(char symbol){							//function to declare all amino acid based on the symbol
	string amino;
	if (symbol=='R'){
		amino="Arginine";
		return amino;
	}
	else if(symbol=='K'){
		amino="Lysine";
		return amino;
	}
	else if(symbol=='S'){
		amino="Serine";
		return amino;
	}
	else if(symbol=='I'){
		amino="Isoleucine";
		return amino;
	}
	else if(symbol=='T'){
		amino="Threonine";
		return amino;
	}
	else if(symbol=='N'){
		amino="Asparagine";
		return amino;
	}
	else if(symbol=='Y'){
		amino="Tyrosine";
		return amino;
	}
	else if (symbol=='P'){
		amino="Proline";
		return amino;
	}
	else{
		amino="wrong amino";
		return amino;
	}
}

int main(){
ifstream inputfile;
ofstream outputfile;
string nucleotide, amino;
char symbol;

cout<<"your dna sequence is: ";
inputfile.open("data.txt");
inputfile>>nucleotide;															//input data from input file
cout<<nucleotide<<endl<<endl<<"you can open result.txt to view the result";
inputfile.close();

outputfile.open("result.txt");							
outputfile<<"your dna sequence is: "<<nucleotide<<endl;							//output data into output file
outputfile<<"codon"<<"\t"<<"symbol"<<"\t"<<"amino acid"<<endl;					
for (int j=0; j<nucleotide.length(); j+=3){
	string codon = nucleotide.substr(j,3);										//verify 3 codon in dna sequence
	symbol=changeSymbol(codon);
	amino=changeAmino(symbol);
	outputfile<<codon<<"\t"<<symbol<<"\t"<<amino<<endl;
}
outputfile.close();
return 0;
}


