#include"euler.h"



// CREATE A FILE WITH ALL THE PRIMERS NUMBERS UP TO SOMETHING

// ################################################################################################################# //

euler :: euler(){
}

// ################################################################################################################# //

euler :: ~euler(){
}

// ################################################################################################################# //

void euler :: write_primefile( unsigned long long input ){

	myfile_writ_2_.open ("PrimeTable/prime_counting_function.txt");
	myfile_writ_1_.open ("PrimeTable/Primes_Table.txt");
	myfile_writ_1_ << input <<"\n";
	
	temp_1_ = 1;
	temp_2_ = 1; // Para los tamanos
	temp_3_ = 1;
	myfile_writ_1_ << 2 <<"\n";
	temp_3_ ++;
	myfile_writ_1_ << 3 <<"\n";
	temp_3_ ++;
	myfile_writ_1_ << 5 <<"\n";
	temp_3_ ++;
	myfile_writ_1_ << 7 <<"\n";
	
// 	myfile_writ_2_ << temp_3_ << " " << temp_2_ << "\n";
	
	temp_1_ = 1;
	temp_2_ = 1; // Para los tamanos
	
	for( unsigned long long i=11; i<=input; i=i+2 ){
		if( isprime(&i) ){
			temp_3_ ++;
			myfile_writ_1_ << i <<"\n";
		ostvar_1_<<i;
		strvar_1_ = ostvar_1_.str();
		temp_1_=strvar_1_.length();
		if( temp_2_ != temp_1_ ){
			cout<<endl<<"tamano: "<<temp_1_;
			temp_2_ = temp_1_;
			myfile_writ_2_ << temp_3_-1 << " " << temp_2_ << "\n";
		}
		ostvar_1_.str( std::string() );
		}
	}
	myfile_writ_1_.close();
	myfile_writ_2_.close();
}

// ################################################################################################################# //

bool euler :: isprime( unsigned long long* input ){
	
// 	Este es el metodo base, donde simplemente se evita probar por los numeros multiplos de 2
// 	if( input[0] == 0 ){
// 		return false;
// 	}
// 	if( input[0] == 1 ){
// 		return false;
// 	}
// 	if( input[0] == 2 ){
// 		return true;
// 	}
// 	if( input[0] % 2 == 0 ){
// 		return false;
// 	}
// 	for( unsigned long long i=3; i*i<=input[0]; i = i + 2 ){
// 		if( input[0] % i == 0 )
// 			return false;
// 	}
// 	return true;
	
// En este se evitan las multiplicidades por 2, 3 y 5
// las de 2 se evitan haciendo los tests de 2 en 2
// las de 3 se evitan usando la variable temp_1_
// las de 5 se evitan haciendo sumas de 2 en 2, y en otros casos sumando de a 4, para saltar los numeros multiplos de 5
	if( input[0] == 0 ){
		return false;
	}
	if( input[0] == 1 ){
		return false;
	}
	if( input[0] == 2 ){
		return true;
	}
	if( input[0] % 2 == 0 ){
		return false;
	}
	if( input[0] == 3 ){
		return true;
	}
	if( input[0] % 3 == 0 ){
		return false;
	}
	if( input[0] == 5 ){
		return true;
	}
	if( input[0] % 5 == 0 ){
		return false;
	}
	if( input[0] == 7 ){
		return true;
	}
	if( input[0] % 7 == 0 ){
		return false;
	}
	temp_1_ = 1;	// con esta variable se controlan la multiplicidad por 3
	for( unsigned long long i=11; i*i<=input[0]; i = i + 2 ){
		if( temp_1_ == 1 ){
			if( input[0] % i == 0 ) //11
				return false;
			i = i+2;
			if( input[0] % i == 0 ) //13
				return false;
			i = i+4;
			if( input[0] % i == 0 ) //17
				return false;
			i = i+2;
			if( input[0] % i == 0 ) //19
				return false;
			temp_1_++;
		}
		else if( temp_1_ == 2 ){
			i = i+2;
			if( input[0] % i == 0 ) //23
				return false;
			i = i+6;
			if( input[0] % i == 0 ) //29
				return false;
			temp_1_++;
		}
		else if( temp_1_ == 3 ){
			if( input[0] % i == 0 ) //31
				return false;
			i = i+6;
			if( input[0] % i == 0 ) //37
				return false;
			i = i+2;
			temp_1_ = 1;
		}
	}
	return true;
}


void euler :: isprime_readfile_open( ){
	
	// Comprobado algo, leyendo de archivo los numeros primos, es muchisimo mas lento, que si corriera todo el test completo
	// de cada uno de los numeros primos
	myfile_read_1_.open("PrimeTable/Primes_Table_2.txt");
// 	myfile_read_1_.setf( ios::fixed );

}

bool euler :: isprime_readfile( unsigned long long* input ){
	// Me habia puesto ha hacer mil formas de obtner los valore, y resulta qu la mas facil es utilizar el operador >> y ya lo probe
	// y sirve hasta para el maximo rango de unsigned long long

	if( input[0] == 0 ){
		return false;
	}
	if( input[0] == 1 ){
		return false;
	}
	if( input[0] == 2 ){
		return true;
	}
	if( input[0] % 2 == 0 ){
		return false;
	}
	if( input[0] == 3 ){
		return true;
	}
	if( input[0] % 3 == 0 ){
		return false;
	}
	if( input[0] == 5 ){
		return true;
	}
	if( input[0] % 5 == 0 ){
		return false;
	}
	if( input[0] == 7 ){
		return true;
	}
	if( input[0] % 7 == 0 ){
		return false;
	}
	myfile_read_1_.seekg (0, ios::beg); // Retorna al inicio
	myfile_read_1_ >> temp_1_;// Descarta la primera
	
	myfile_read_1_ >> temp_1_; // 2
	myfile_read_1_ >> temp_1_; // 3
	myfile_read_1_ >> temp_1_; // 5
	myfile_read_1_ >> temp_1_; // 7
	myfile_read_1_ >> temp_1_; // 11
	
	while ( temp_1_*temp_1_ <= input[0] ){
		
		if( input[0] % temp_1_ == 0 ){
			return false;
		}
		myfile_read_1_ >> temp_1_; // 3
		
	}
	return true;
}


	
	

// ################################################################################################################# //

bool euler :: ispalin( unsigned long long* input ){
	
	ostvar_1_.str(std::string()); // Erase; For all the standard library types the member function "empty()" is a query, not a command. i.e. it means "are you empty?" not "please throw away your contents" The "clear()" member function is inherited from ios and is used to clear the error state of the stream. E.g. if a file stream has the error state set to "eofbit" (end-of-file), then calling "clear()" will set the error state back to "goodbit" (no error).
	ostvar_1_<<input[0];
	strvar_1_ = ostvar_1_.str();

	temp_2_ = strvar_1_.length();
	
	for( unsigned int i=0; i<temp_2_; i++ ){
		if( strvar_1_[i]!=strvar_1_[temp_2_-1-i] ){
			return false;
		}
	}
	return true;
}

// ################################################################################################################# //

unsigned long long euler :: sumprop( unsigned long long input ){
	
	temp_1_ = 1;
// 	cout<<endl<<input<<"	";
	for( unsigned long long i=2; i<=input/2; i++ ){
		if( input%i == 0 ){
			temp_1_ += i;
		}
// 		cout<<" "<<i;
	}
// 	cout<<"	"<<temp_1_;
	return temp_1_;
}

// ################################################################################################################# //
//
// void euler :: sumbignum( unsigned long long* output, unsigned long long* input, unsigned long long* size ){
// 	
// 	for( unsigned long long i=0; i<size[0]-1; i++ ){
// 		output[i] = output[i] + input[i];
// 		if( output[i]/1000000000000000000 != 0 ){
// 			output[i+1] = output[i+1]+output[i]/1000000000000000000;
// 			output[i] = output[i]%1000000000000000000;
// 		}
// 	}
// 	output[55] = output[55] + input[55];
// }
// 
// ################################################################################################################# //

bool euler :: ispalind( unsigned long long* input, unsigned long long base ){
	
		temp_1_ = input[0];
		temp_2_ = 0;
		while( temp_1_>0 ){
			temp_2_ *= base;
			temp_2_ += temp_1_%base;
			temp_1_ /= base;
		}
		if( temp_2_ == input[0] ){
			return true;
		}
		return false;
}

// ################################################################################################################# //

bool euler :: ispandigital( unsigned long long* input, unsigned long long size ){
	temp_1_ = 0;
	temp_4_ = 0;
	for( unsigned long long i=0; i<size; i++ ){
		temp_1_ = temp_1_ + input[i];
		temp_4_ = temp_4_ + i+1;
	}
	if( temp_1_ != temp_4_ ){
		return false;
	}
// 	cout<<endl<<"PASO 1 TEST";
	temp_3_ = 0;
	for( unsigned long long i=0; i<size; i++ ){
		temp_2_ = 0;
		for( unsigned long long j=0; j<size; j++ ){
			if( input[j] == i+1 ){
				temp_2_ = 1;
				break;
			}
		}
		if( temp_2_ == 0 ){
			return false;
		}
	}
	return true;
}
	
	
	
	
	
	
	
	

// ################################################################################################################# //

// bool euler :: ispandigital( unsigned long long* input ){
// 	
// 
// 	unsigned long long yy=9,temp_1,temp_1_[9];
// 	if( issize( input, &yy ) ){
// 		temp_1_[0] = input[0]/100000000;
// 		temp_1 = input[0]%100000000;
// 		temp_1_[1] = temp_1/10000000;
// 		temp_1 = temp_1%10000000;
// 		temp_1_[2] = temp_1/1000000;
// 		temp_1 = temp_1%1000000;
// 		temp_1_[3] = temp_1/100000;
// 		temp_1 = temp_1%100000;
// 		temp_1_[4] = temp_1/10000;
// 		temp_1 = temp_1%10000;
// 		temp_1_[5] = temp_1/1000;
// 		temp_1 = temp_1%1000;
// 		temp_1_[6] = temp_1/100;
// 		temp_1 = temp_1%100;
// 		temp_1_[7] = temp_1/10;
// 		temp_1 = temp_1%10;
// 		temp_1_[8] = temp_1/1;
// 		
// // 		cout<<temp_1_[0]<<" "<<temp_1_[0]<<" "<<temp_1_[0]<<" "<<temp_1_[0]<<" "<<temp_1_[0]<<" "<<temp_1_[5]<<" "<<temp_1_[6]<<" "<<temp_1_[7]<<" "<<temp_1_[8];
// 		
// 		if( temp_1_[0]+temp_1_[1]+temp_1_[2]+temp_1_[3]+temp_1_[4]+temp_1_[5]+temp_1_[6]+temp_1_[7]+temp_1_[8] != 45 ){
// // 			cout<<"aaaaaaaaaaaaaaa";
// 			return false;
// 		}
// 		else{
// 			
// 		
// // 		for( unsigned long long i=0; i<9; i++ ){
// 			if( ((temp_1_[0] == 1) || (temp_1_[1] == 1) || (temp_1_[2] == 1) || (temp_1_[3] == 1) || (temp_1_[4] == 1) || (temp_1_[5] == 1) || (temp_1_[6] == 1) || (temp_1_[7] == 1) || (temp_1_[8] == 1)) && ((temp_1_[0] == 2) || (temp_1_[1] == 2) || (temp_1_[2] == 2) || (temp_1_[3] == 2) || (temp_1_[4] == 2) || (temp_1_[5] == 2) || (temp_1_[6] == 2) || (temp_1_[7] == 2) || (temp_1_[8] == 2)) && ((temp_1_[0] == 3) || (temp_1_[1] == 3) || (temp_1_[2] == 3) || (temp_1_[3] == 3) || (temp_1_[4] == 3) || (temp_1_[5] == 3) || (temp_1_[6] == 3) || (temp_1_[7] == 3) || (temp_1_[8] == 3)) && ((temp_1_[0] == 4) || (temp_1_[1] == 4) || (temp_1_[2] == 4) || (temp_1_[3] == 4) || (temp_1_[4] == 4) || (temp_1_[5] == 4) || (temp_1_[6] == 4) || (temp_1_[7] == 4) || (temp_1_[8] == 4)) && ((temp_1_[0] == 5) || (temp_1_[1] == 5) || (temp_1_[2] == 5) || (temp_1_[3] == 5) || (temp_1_[4] == 5) || (temp_1_[5] == 5) || (temp_1_[6] == 5) || (temp_1_[7] == 5) || (temp_1_[8] == 5)) && ((temp_1_[0] == 6) || (temp_1_[1] == 6) || (temp_1_[2] == 6) || (temp_1_[3] == 6) || (temp_1_[4] == 6) || (temp_1_[5] == 6) || (temp_1_[6] == 6) || (temp_1_[7] == 6) || (temp_1_[8] == 6)) && ((temp_1_[0] == 7) || (temp_1_[1] == 7) || (temp_1_[2] == 7) || (temp_1_[3] == 7) || (temp_1_[4] == 7) || (temp_1_[5] == 7) || (temp_1_[6] == 7) || (temp_1_[7] == 7) || (temp_1_[8] == 7)) && ((temp_1_[0] == 8) || (temp_1_[1] == 8) || (temp_1_[2] == 8) || (temp_1_[3] == 8) || (temp_1_[4] == 8) || (temp_1_[5] == 8) || (temp_1_[6] == 8) || (temp_1_[7] == 8) || (temp_1_[8] == 8)) && ((temp_1_[0] == 9) || (temp_1_[1] == 9) || (temp_1_[2] == 9) || (temp_1_[3] == 9) || (temp_1_[4] == 9) || (temp_1_[5] == 9) || (temp_1_[6] == 9) || (temp_1_[7] == 9) || (temp_1_[8] == 9)) ){
// 				return true;
// 			}
// 			else{
// 				return false;
// 			}
// 		}
// 	}
// }
// 
// ################################################################################################################# //
//
// bool euler :: issize( unsigned long long* input, unsigned long long* size ){
// 	
// 	ostringstream temp_1;
// 	std::string salida;
// // 	unsigned int len,len_old=1;	
// 
// 	temp_1<<input[0];
// 	salida = temp_1.str();
// // 	cout<<endl<<"re:	"<<salida[0]<<"	"<<salida[7];
// 	if( salida.length()==size[0]){
// 		return true;
// // 		temp_1.str( "" );
// 	}
// 	return false;
// }
// 
// ################################################################################################################# //

unsigned long long euler :: size( unsigned long long* input ){
	
	ostvar_1_.str(std::string()); // Vaciamos
	ostvar_1_<<input[0];
	return  ostvar_1_.str().length();
}

// ################################################################################################################# //

unsigned long long euler :: factorial( unsigned long long input ){
	
	if( input == 0 ){
		return 1;
	}
	temp_1_ = 1;
	for( unsigned long long i=1; i<=input; i++ ){
		temp_1_ = temp_1_*i;
	}
	return temp_1_;
}

// ################################################################################################################# //

unsigned long long euler :: digits( unsigned long long*input, unsigned long long* output ){

	temp_1_ = input[0];
	ostvar_1_.str(std::string()); // Vaciamos
	ostvar_1_<<temp_1_;
	temp_3_ = ostvar_1_.str().length();
	temp_2_ = temp_3_;
	do{
		output[temp_3_-1] = temp_1_%10;
		temp_3_--;
		temp_1_ = temp_1_/10;
	}while(temp_1_>0);
		
	return temp_2_;
}

// ################################################################################################################# //

void euler :: digits( unsigned long long*input, unsigned long long size, unsigned long long* output ){

	temp_1_ = input[0];
	temp_3_ = size;
	do{
		output[temp_3_-1] = temp_1_%10;
		temp_3_--;
		temp_1_ = temp_1_/10;
	}while(temp_1_>0);
}

// ################################################################################################################# //

bool euler :: isPermuDigits( unsigned long long*input1, unsigned long long*input2, unsigned long long size ){

	tem_1d_1_ = new unsigned long long[size];
	for( unsigned long long i=0; i<size; i++ ){ // Copia de la informacion de input2
		tem_1d_1_[i] = input2[i];
	}
	temp_3_ = 0;
	while( temp_3_<size ){
		temp_1_ = input1[temp_3_];
		for( unsigned long long j=temp_3_; j<size; j++ ){
			if( temp_1_ == tem_1d_1_[j] ){
				for( long long k=j; k>0; k-- ){
					tem_1d_1_[k] = tem_1d_1_[k-1];
				}
				break;
			}
			if( j==size-1 ){ // Si en algun momento llega al maximo es porque no encontro un igual
				delete [] tem_1d_1_;
				return 0;
			}
		}
		temp_3_++;
	}
	delete [] tem_1d_1_;
	return 1;
}

// ################################################################################################################# //

double euler :: combinaDou( unsigned long long nnn, unsigned long long rrr){
	
	tedo_1_ = 1;
	tedo_2_ = 1;
// 	tedo_3_ = rrr;
	for( double i=nnn; i>rrr; i-- ){ // n!/r!
		tedo_1_ = tedo_1_*i;
	}
	for( double i=nnn-rrr; i>1; i-- ){ // (n-r)!
		tedo_2_ = tedo_2_*i;
	}
	return tedo_1_/tedo_2_;
	
}

// ################################################################################################################# //

unsigned long long euler :: minimum( unsigned long long cantidad, ... ){
	
	va_list numeros;
	va_start(numeros, cantidad);
	temp_1 = va_arg(numeros,unsigned long long);
	for( unsigned long long i=1; i<cantidad; i++ ){
		temp_2 = va_arg(numeros,unsigned long long);
		if( temp_2 < temp_1 ){
			temp_1 = temp_2;
		}
	}
	va_end(numeros);
	return temp_1;
}

// ################################################################################################################# //

unsigned long long euler :: maximum( unsigned long long cantidad, ... ){
	
	va_list numeros;
	va_start(numeros, cantidad);
	temp_1 = va_arg(numeros,unsigned long long);
	for( unsigned long long i=1; i<cantidad; i++ ){
		temp_2 = va_arg(numeros,unsigned long long);
		if( temp_2 > temp_1 ){
			temp_1 = temp_2;
		}
	}
	va_end(numeros);
	return temp_1;
}

// ################################################################################################################# //

unsigned long long euler :: minimum( unsigned long long* input, unsigned long long cantidad ){
	
	temp_1 = input[0];
	for( unsigned long long i=1; i<cantidad; i++ ){
		if( input[i] < temp_1 ){
			temp_1 = input[i];
		}
	}
	return temp_1;
}

// ################################################################################################################# //

unsigned long long euler :: maximum( unsigned long long* input, unsigned long long cantidad ){
	
	temp_1 = input[0];
	for( unsigned long long i=1; i<cantidad; i++ ){
		if( input[i] > temp_1 ){
			temp_1 = input[i];
		}
	}
	return temp_1;
}

// ################################################################################################################# //

void euler :: descoprimos( unsigned long long numero, unsigned long long* primos_in, unsigned long long tammaxi_in, unsigned long long* primos_out, unsigned long long* multiplici_out, unsigned long long tammaxi_out /*indica el tamno del vector de salida*/, unsigned long long* tamprimo_out ){
	
	if( numero > primos_in[tammaxi_in-1] ){ // Asumo q estan en orden ascendente
		cout<<endl<<"La lista de primos debe ser mayor que el valor del numero. "<<numero<<" "<<primos_in[tammaxi_in-1];
		abort();
	}
	temp_1_ = numero;
	temp_2_ = 0; // Para ir mirando diferentes primos
	tamprimo_out[0] = 0;
	while( temp_1_>1 ){
		if( temp_1_%primos_in[temp_2_]==0 ){
			if( tammaxi_out<tamprimo_out[0]+1 ){
				cout<<endl<<"El tamano para guadar los primos de salida es muy pequeno";
				abort();
			}
			primos_out[tamprimo_out[0]] = primos_in[temp_2_]; // Primo
			multiplici_out[tamprimo_out[0]] = 0; // Su multiplicidad inicial es 0
			do{
// 				cout<<endl<<primos_in[temp_2_]<<"	ACA__@";
				multiplici_out[tamprimo_out[0]]++;
				temp_1_ = temp_1_/primos_in[temp_2_];
			}while( temp_1_%primos_in[temp_2_]==0 );
			tamprimo_out[0]++;
// 			cout<<endl<<"		"<<tamprimo_out[0];
		}
		temp_2_++;
// 		cout<<endl<<"ACA";
// 		if( tammaxi_in<temp_2_ ){
// 			cout<<endl<<"El tamano de para guadar los primos de salida es muy pequeno";
// 			abort();
// 		}
	}
// 	cout<<endl<<"		"<<tamprimo_out[0];
}












