#pragma once

#ifdef WIN32
  #define CALCULATOR_EXPORT __declspec(dllexport) 
#else
  #define CALCULATOR_EXPORT  
#endif

CALCULATOR_EXPORT void calculator();
