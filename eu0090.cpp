#include"eu0090.h"

#include"principal.h"

void eu0090 :: solucion(){
	// ---------------------------------------------------- //
	tstart = (double)clock()/CLOCKS_PER_SEC;
	// ---------------------------------------------------- //
	
	output = 0;
	
	// ---------------------------------------------------- //
	
	
	
	// ---------------------------------------------------- //
	tstop = (double)clock()/CLOCKS_PER_SEC;
	ttime= tstop-tstart;
	// ---------------------------------------------------- //
}


void eu0090 :: printsolution(){
	cout << "Euler 0090\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
