#include"eu0087.h"

#include"principal.h"

void eu0087 :: solucion(){
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


void eu0087 :: printsolution(){
	cout << "Euler 0087\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
