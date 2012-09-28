#include"eu0017.h"

#include"principal.h"

void eu0017 :: solucion(){
	// ---------------------------------------------------- //
	tstart = (double)clock()/CLOCKS_PER_SEC;
	// ---------------------------------------------------- //
	
	output = 0;
	
	// ---------------------------------------------------- //
	
	cout<<endl<<"Este lo hice en papel";
	
	// ---------------------------------------------------- //
	tstop = (double)clock()/CLOCKS_PER_SEC;
	ttime= tstop-tstart;
	// ---------------------------------------------------- //
}


void eu0017 :: printsolution(){
	cout << "Euler 0017\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
