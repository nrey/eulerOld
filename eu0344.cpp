#include"eu0344.h"

#include"principal.h"

void eu0344 :: solucion(){
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


void eu0344 :: printsolution(){
	cout << "Euler 0344\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
