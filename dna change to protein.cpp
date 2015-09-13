#include <iostream>
#include <fstream>
#include <string>
using namespace std;

char change(string codon){
	char symbol;
	if (codon=="ATT" || codon=="ATC" || codon=="ATA")
	{
		symbol='I';
	}
	else if (codon=="CTT" || codon=="CTC" || codon=="CTA" || codon=="CTG" )
	{
		symbol='K';
	}
	else{
		symbol='L';
	}
	return symbol;
}

string aminoAcid (char symbol){
	string amino;
	if (symbol=='I'){
		amino="isoleucine";
	}
	else if (symbol=='K'){
		amino="leucine";
	}
	else {
		amino="potassium";
	}
	return amino;
}

/*
void symbol(char dna[codon][nucleotide])
{
	for (int i=0;)
}
*/

int main(){
ifstream inputfile;
ofstream outputfile;
//int codon=10;
int nucleotide=21;
//char dna[codon][nucleotide];
char dna[nucleotide],symbol;
string codon, amino;

cout<<"your dna sequence is: ";
inputfile.open("data.txt");
for (int i=0; i<21; i++)
{
	 inputfile>>dna[i];
	 cout<<dna[i];
}
cout<<endl;
for (int i=0; i<3; i++)
{
	 inputfile>>dna[i];
} 
	string str(dna);
	 symbol=change(str);
	 amino=aminoAcid(symbol);
	 cout<<symbol<<" - "<<amino;
/*
for (int i=3; i<6; i++)
{
	 inputfile>>dna[i];
}  
 string str(dna);
	 symbol=change(str);
	 amino=aminoAcid(symbol);
	 cout<<symbol<<" - "<<amino;*/
		 /*
 if (str=="aaa")
	 {
	 	codon="Q";
	 }
	 else if (str=="bbb"){
	 	codon="W";
	 }
cout<<codon;

for (int i=3; i<6; i++)
{
	 string str(dna);
	 if (str=="aaa")
	 {
	 	codon="Q";
	 }
	 else if (str=="bbb"){
	 	codon="W";
	 }
cout<<codon;
} 
*/
/*
cout<<"your dna sequence is: ";
for (int i=0; i<10;i++)
{
	for (int j=0;j<3;j++){
	inputfile>>dna[i][j];
	}
}
*/
inputfile.close();
/*
for (int i=0; i<10;i++)
{
	for (int j=0;j<3;j++){
cout<<dna[i][j];
	}
}
*/

//symbol (dna[codon][nucleotide]);

return 0;
}


