cmake_minimum_required ( VERSION 3.0 )
project ( infostatic C )

set ( CMAKE_C_STANDARD 99 )

add_library (infostatic STATIC library.c library.h )


#SET( APP_EXE StaticTest )

#ADD_EXECUTABLE( ${APP_EXE}
#	library.c )

#TARGET_LINK_LIBRARIES( ${APP_EXE}
#	infostatic )
