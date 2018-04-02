#include <stdio.h> 
#include <math.h>
#define MAX_INPUTS 4
#define MAXINT 8

#define NODES 8 // total number of nodes 
#define LEVELS 4 //number of levels in the tree 
#define STATIONS 3 // Number of ready stations 

int RandomNumberGenerator()
{
	int seed = 12345;
	int randint = 0;
	srandom(seed);
	while(randint == 0)
	{
		randint = random();	
		randint = randint % (MAXINT + 1)
	}

int main()
{
	// k 
	// sending stations 
	//starting level 
	// Go from starting level to sending station 

	
	for( int l = 0 ; l < LEVELS; l++ )
	{
		int array[ pow(2,LEVELS - 1) ];
		int kValues = pow(2,l);
		for( int j = 0; j < LEVELS; j += 2 )
		{
			int startingLevel = pow(2,j);
			for( int i = 0;i < STATIONS; i++ )
			{
				int sendingStation = RandomNumberGenerator();
				array[i] = sendingStation;
				//Calculate the success rate of it  	
				//Function here to calculate success 
			}
			RecursiveFunction(startingLevel);			
		}				
	}
	return 0;
}

//Take in my array of 0's and 1's and try and isolate my 1's with 0's
 RecursiveFunction( int startingLevel)
{
	numberOfProbes = 2^ startingLevel
	//I need to calculate the first and last Node of the probe...
	//Bascially where does the probe start and where does the probe end???
	
} 

Probe(first,last)
{
	
	
}