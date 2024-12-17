#include<iostream>
using namespace std;

int main(){
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	string grade;
	int student = 1;
	cout << "Please input grade of each student (A-F) or input 0 to exit. \n";
	do{
		cout << "Student [" << student << "]: ";
		cin >> grade; 
		
		if(grade == "0") {
		    break;
		} //The loop must be terminated when grade = '0'
		
		if(grade == "A"){ // if grade is A
			count [0] ++;
			student ++ ;//Do something
		}else if(grade == "B"){ // if grade is B
			count [1] ++;
			student ++ ;//Do something
		}else if(grade == "C"){
		    count [2] ++;
			student ++ ;
		}else if(grade == "D"){
		    count [3] ++;
			student ++ ;
		}else if(grade == "F"){
		    count [4] ++;
			student ++ ;
		//and so on ... for grade = C, D, F	
		}else{ // grade is wrong input
			cout << "Wrong input. Please input again.\n";//Do something
		} 
	
	}while(true);{
	    
	}
	
	
	cout << "In total " << student-1 <<" students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4];
	//	and so on ... for grade = C, D, F	
	
	return 0;
}
