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

#include "Program.h"
namespace DefaultArguments {
	void Program::Main(Array<String>* args){
		Program* p = new Program(1, 2);
		p->Run(1, 2);
		p->Run(10, 2);
		p->Run(20, 30);
		Program* p2 = new Program(10, 2);
		Program* p3 = new Program(20, 30);
	}
	void Program::Run(int defaultParameter1, int defaultParameter2)
	{
		Console::WriteLine(new String("Function"));
		Console::WriteLine(new String("Default parameter 1 is:"));
		Console::WriteLine(defaultParameter1);
		Console::WriteLine(new String("Default parameter 2 is:"));
		Console::WriteLine(defaultParameter2);
	}
	Program::Program(int defaultParameter1, int defaultParameter2)
	{
		Console::WriteLine(new String("Constructor"));
		Console::WriteLine(new String("Default parameter 1 is:"));
		Console::WriteLine(defaultParameter1);
		Console::WriteLine(new String("Default parameter 2 is:"));
		Console::WriteLine(defaultParameter2);
	}

}
