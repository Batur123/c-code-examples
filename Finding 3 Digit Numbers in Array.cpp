#include<iostream>
#include<string>
#include <stdio.h>
#include <string.h>
using namespace std;


//Find Char in String
bool find(string line, string sWord)
{
    bool flag = false;
    int index = 0, i, helper = 0;
    for (i = 0; i < line.size(); i++)
    {
        if (sWord.at(index) == line.at(i))
        {
            if (flag == false)
            {
                flag = true;
                helper = i;
            }
            index++;
        }
        else
        {
            flag = false;
            index = 0;
        }
        if (index == sWord.size())
        {
            break;
        }
    }
    if ((i+1-helper) == index)
    {
        return true;
    }
    return false;
}

/*
* @param1 = array 
* @param2 = array size
* @param3 = solve method 
* @param4 = Temp Value 0
* @return type = int
*/
int Test(int array[], int arraySize, int Option, int Temp)
{	
	switch(Option)
	{
		case 1:
		{
			for(int i=0;i<=arraySize;i++)
			{
				if((array[i] < 1000 && array[i] > 99) || (array[i] > -1000 && array[i] < -99))
				{
					Temp++;
				}
			}	
			return Temp;
			break;
		}
		case 2:
		{
			
			for(int i=0;i<=arraySize;i++)
			{
				if(to_string(array[i]).length() == 3 || (find(to_string(array[i]),"-") == true && to_string(array[i]).length() == 4))
				{
					Temp++;
				}
			}	
			return Temp;
			break;
		}
		case 3:
		{
			for(int i=0;i<=arraySize;i++)
			{
				if((array[i]/100 > 1 && array[i]/100 < 10) || (array[i]/100 > -10 && array[i]/100 < -1))
				{
					cout<<array[i]/100<<endl;
					Temp++;
				}
			}	
			return Temp;
			break;
		}
		default:
		{
			return -1;
			break;
		}
	}
	
	

}

int main()
{
	git:
	int Choice;
	int Ans = 0;
	int arr[8] = {12,333,261,-231,44,88,99,101};
	
	cout<<"Press 1,2 or 3 for Algorithms."<<endl;
 	cout<<"Your choice: ";
 	cin>>Choice;
 	switch(Choice)
	 {
 		case 1:
		 {
 			Ans = Test(arr,sizeof(arr),1,0);
			break;
		 }
		 case 2:
		 {
		 	Ans = Test(arr,sizeof(arr),2,0);
			break;
		 }
		 case 3:
		 {
		 	Ans = Test(arr,sizeof(arr),3,0);
			break;
		 }
		 default:
		 {
		 	cout<<"Wrong choice.";
		 	goto git;
			break;
		 }
	 }
	
	cout<<Ans;
}
