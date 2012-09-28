#include"eu0208.h"

#include"principal.h"

void eu0208 :: solucion(){
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


void eu0208 :: printsolution(){
	cout << "Euler 0208\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
