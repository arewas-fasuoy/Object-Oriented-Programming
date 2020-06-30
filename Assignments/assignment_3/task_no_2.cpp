#include <iostream>
#include <stdio.h>
using namespace std;

class stringType{
public:
	stringType(string str1="",string str2="");
	void setValues(string str1, string str2);
	void printValues();
	int maxLength();
	int compare(string s1, string s2);
	void copy(string source, string destination);
	string concatenate(string s1, string s2);
	int searchWord(string word);
	int searchChar(char ch);
private:
	string first,second;
	
};
void stringType::setValues(string str1, string str2){
	first=str1;
	second=str2;
}
void stringType::printValues(){
	cout<<"String one is : "<<first<<endl;
	cout<<"-----------------------------------"<<endl;
	cout<<"String two is : "<<second<<endl;
	cout<<"-----------------------------------"<<endl;
}
stringType::stringType(string str1,string str2){
	setValues( str1, str2);
	
}
int stringType::maxLength(){
	int i,j;
	for ( i=0;first[i]!='\0';++i){

	}
	for ( j=0;second[j]!='\0';++j){

	}
	if(i>j)
		cout<<"Max length is"<<i<<endl;
	else if(j>i)
		cout<<"Max length is"<<j<<endl;
	else if(j==i)
		cout<<"Both are equal"<<endl;
}
int stringType::compare(string s1, string s2){
	int k,j;
	for ( k=0;k<s1.size();k++){
			if (s1[k]==s2[k])
				k++;
	}
	return k;}
string stringType::concatenate(string s1, string s2){
	string product;
	product=s1+" + "+s2;
	return product;
}
void stringType::copy(string source, string destination){
	cout<<"The source "<<source<<" has been copied to destination "<<destination<<endl;
	destination=source;
	cout<<"The result after copying is: "<<destination<<endl;

}
int stringType::searchChar(char ch){
	int c;
	for (int l=0;l<10;l++){
	if(first[l]==ch )
		c=1;
	else
		c=0;
}
	return c;
}
int stringType::searchWord(string word){
	  for(int i=0;i<first.size();i++)
	   {
	    if(first[i]!=' '){
	     word[i] = first[i];
	        return 1;
	    }

	        else 
	        	 return 0;

	    }
	}

int main(){
	int i;
	stringType S;
	string destination_1="1";
	string destination_2="2";
	char a;
	string b;
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	S.setValues(s1,s2);
	S.printValues();
	S.maxLength();
	cout<<"the number of repeated characters is:"<<S.compare(s1,s2);
	cout<<"The product after concatenating : "<<S.concatenate(s1,s2)<<endl;
	S.copy(s1,destination_1);
	S.copy(s2,destination_2);
	cout<<"Enter the character you want to search"<<endl;
	cin>>a;
	cout<<S.searchChar(a)<<endl;
	cout<<"Enter the word you want to search"<<endl;
	cin>>b;
	cout<<S.searchWord(b)<<endl;
	return 0;


}
