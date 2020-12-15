#include <iostream>
#include<locale.h>
using namespace std;


FindFirstCommon(int inArrayOne[],int inArrayTwo[])
{
	int Result=-1;
	
		for( int i = 0; i < sizeof(inArrayOne); i++ )
		{		
			for(int j = 0; j < sizeof(inArrayTwo); j++ )
			{	
				if( inArrayOne[ i ] == inArrayTwo[ j ] )
				{
					return inArrayOne[ i ];
				}
			}
		}

	//Program will return -1, if there is no match.
	return Result;
}





int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Turkish");
	int array1[] = {1,2,3,4,5};
	int array2[] = {55,6,7,8,4};
	cout<<"2 dizi arasýndaki ortak ilk eleman: "<<FindFirstCommon(array1,array2);
	return 0;
}
 // 15
 
