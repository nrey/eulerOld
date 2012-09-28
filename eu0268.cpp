#include"eu0268.h"

#include"principal.h"

void eu0268 :: solucion(){
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


void eu0268 :: printsolution(){
	cout << "Euler 0268\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
