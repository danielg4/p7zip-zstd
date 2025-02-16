#define MY_VER_MAJOR 16
#define MY_VER_MINOR 02
#define MY_VER_BUILD 0
#define MY_VERSION_NUMBERS "16.02"
#define MY_VERSION "16.02"
#define MY_DATE "2022-02-22"
#undef MY_COPYRIGHT
#undef MY_VERSION_COPYRIGHT_DATE
#define MY_AUTHOR_NAME "Igor Pavlov"
#define MY_COPYRIGHT_PD "Igor Pavlov : Public domain"
#define MY_COPYRIGHT_CR "Copyright (c) 1999-2016 Igor Pavlov"

#define OTHER_CONTRIBUTORS ", p7zip, Yann Collet, Tino Reichardt, Antonio Diaz Diaz, Tehmul Ghyara"

#ifdef USE_COPYRIGHT_CR
  #define MY_COPYRIGHT MY_COPYRIGHT_CR OTHER_CONTRIBUTORS 
#else
  #define MY_COPYRIGHT MY_COPYRIGHT_PD
#endif

#define MY_VERSION_COPYRIGHT_DATE MY_VERSION " : " MY_COPYRIGHT " : " MY_DATE

#define P7ZIP_VERSION "16.02"

