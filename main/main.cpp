// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "CatanGUI.h"

const std::unique_ptr<CatanGUI> catan = std::unique_ptr<CatanGUI>(new CatanGUI());

int main()
{		
	catan->start();
}