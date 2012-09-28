#include"eu0025.h"

#include"principal.h"

void eu0025 :: solucion(){
	// ---------------------------------------------------- //
	tstart = (double)clock()/CLOCKS_PER_SEC;
	// ---------------------------------------------------- //
	
	output = 0;
	infivar_1 = new infinite_precition(1001);
	infivar_2 = new infinite_precition(1001);
	
	// ---------------------------------------------------- //
	
	infivar_1->setvalue(1,1);
	infivar_2->setvalue(1,1);
	temp_1 = 2;
	while(1)
	{
		infivar_2->add(infivar_2,infivar_1);
		temp_1 = temp_1 + 1;
		if( infivar_2->numdig() == 1000 ){
			output = temp_1;
			break;
		}
		infivar_1->add(infivar_2,infivar_1);
		temp_1 = temp_1 + 1;
		if( infivar_1->numdig() == 1000 ){
			output = temp_1;
			break;
		}
		
	}
	
	// ---------------------------------------------------- //
	tstop = (double)clock()/CLOCKS_PER_SEC;
	ttime= tstop-tstart;
	// ---------------------------------------------------- //
}


void eu0025 :: printsolution(){
	cout << "Euler 0025\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
