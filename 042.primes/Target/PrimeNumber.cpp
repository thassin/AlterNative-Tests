/***********************************************************************************
          _ _            _   _       _   _           
    /\   | | |          | \ | |     | | (_)          
   /  \  | | |_ ___ _ __|  \| | __ _| |_ ___   _____ 
  / /\ \ | | __/ _ \ '__| . ` |/ _` | __| \ \ / / _ \
 / ____ \| | ||  __/ |  | |\  | (_| | |_| |\ V /  __/
/_/    \_\_|\__\___|_|  |_| \_|\__,_|\__|_| \_/ \___|
-----------------------------------------------------

This code has been generated by AlterNative translator

Permission is hereby granted, free of charge, to any person obtaining a copy of this
code.

   contact: alejandro.albala@upc.edu
   web: http://alexalbala.github.io/Alter-Native/
   github: https://github.com/AlexAlbala/Alter-Native
   
AlterNative @ 2014

***********************************************************************************/

#include "PrimeNumber.h"
long PrimeNumber::FindPrimeNumber(int n){
	int i = 0;
	long num = 2L;
	while (i < n){
		long num2 = 2L;
		int num3 = 1;
		while ((num2 * num2) <= num){
			if ((num % num2) == 0L){
				num3 = 0;
				break;
			}
			num2 += 1L;
		}
		if (num3 > 0) {
			i += 1;
		}
		num += 1L;
	}
	return num - 1L;
}
void PrimeNumber::Main()
{
	PrimeNumber* primeNumber = new PrimeNumber();
	for (int i = 0; i < 1000; i += 1) {
		Console::Write(primeNumber->FindPrimeNumber(i));
		Console::Write(new String(" "));
	}
	Console::WriteLine();
}
