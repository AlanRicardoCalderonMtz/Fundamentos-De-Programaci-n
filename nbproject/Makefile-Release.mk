#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=Cygwin-Windows
CND_DLIB_EXT=dll
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/2\ Condicional\ if.o \
	${OBJECTDIR}/Condicional\ if.o \
	${OBJECTDIR}/Estructuras_apuntadores1.o \
	${OBJECTDIR}/Estructuras_apuntadores2.o \
	${OBJECTDIR}/Estructuras_apuntadores3.o \
	${OBJECTDIR}/Estructuras_apuntadores4.o \
	${OBJECTDIR}/Estructuras_arreglos1.o \
	${OBJECTDIR}/Estructuras_arreglos2.o \
	${OBJECTDIR}/Estructuras_arreglos3.o \
	${OBJECTDIR}/Estructuras_arreglos4.o \
	${OBJECTDIR}/Estructuras_arreglos5.o \
	${OBJECTDIR}/Estructuras_arreglos6.o \
	${OBJECTDIR}/Estructuras_control1.o \
	${OBJECTDIR}/Estructuras_control2.o \
	${OBJECTDIR}/Estructuras_control3.o \
	${OBJECTDIR}/Estructuras_control4.o \
	${OBJECTDIR}/Estructuras_control5.o \
	${OBJECTDIR}/Estructuras_control6.o \
	${OBJECTDIR}/Estructuras_decision1.o \
	${OBJECTDIR}/Estructuras_decision2.o \
	${OBJECTDIR}/Estructuras_decision3.o \
	${OBJECTDIR}/Estructuras_decision4.o \
	${OBJECTDIR}/Estructuras_decision5.o \
	${OBJECTDIR}/Estructuras_decision6.o \
	${OBJECTDIR}/Estructuras_funciones1.o \
	${OBJECTDIR}/Estructuras_funciones2.o \
	${OBJECTDIR}/Estructuras_funciones3.o \
	${OBJECTDIR}/Estructuras_funciones4.o \
	${OBJECTDIR}/Estructuras_funciones5.o \
	${OBJECTDIR}/For.o \
	${OBJECTDIR}/Funciones_Conversión_Grados.o \
	${OBJECTDIR}/Implementacion\ de\ math.o \
	${OBJECTDIR}/Metodo_burbuja.o \
	${OBJECTDIR}/Metodo_burbuja_optimizado.o \
	${OBJECTDIR}/Precedencia\ de\ operadores.o \
	${OBJECTDIR}/Promedio_en_arreglo.o \
	${OBJECTDIR}/Tablas_de_multiplicar.o \
	${OBJECTDIR}/Tarea2_arreglos_unidimensionales.o \
	${OBJECTDIR}/Valor_Min_Max.o \
	${OBJECTDIR}/While.o \
	${OBJECTDIR}/arreglo_bidimensional.o \
	${OBJECTDIR}/arreglo_unidimensional.o \
	${OBJECTDIR}/funcion_strcmp.o \
	${OBJECTDIR}/funcion_strcpy.o \
	${OBJECTDIR}/funcion_strlen.o \
	${OBJECTDIR}/hola_mundo.o \
	${OBJECTDIR}/tarea1_arreglos_unidimensionales.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/programacion_en_c.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/programacion_en_c.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.c} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/programacion_en_c ${OBJECTFILES} ${LDLIBSOPTIONS}

.NO_PARALLEL:${OBJECTDIR}/2\ Condicional\ if.o
${OBJECTDIR}/2\ Condicional\ if.o: 2\ Condicional\ if.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/2\ Condicional\ if.o 2\ Condicional\ if.c

.NO_PARALLEL:${OBJECTDIR}/Condicional\ if.o
${OBJECTDIR}/Condicional\ if.o: Condicional\ if.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Condicional\ if.o Condicional\ if.c

${OBJECTDIR}/Estructuras_apuntadores1.o: Estructuras_apuntadores1.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Estructuras_apuntadores1.o Estructuras_apuntadores1.c

${OBJECTDIR}/Estructuras_apuntadores2.o: Estructuras_apuntadores2.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Estructuras_apuntadores2.o Estructuras_apuntadores2.c

${OBJECTDIR}/Estructuras_apuntadores3.o: Estructuras_apuntadores3.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Estructuras_apuntadores3.o Estructuras_apuntadores3.c

${OBJECTDIR}/Estructuras_apuntadores4.o: Estructuras_apuntadores4.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Estructuras_apuntadores4.o Estructuras_apuntadores4.c

${OBJECTDIR}/Estructuras_arreglos1.o: Estructuras_arreglos1.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Estructuras_arreglos1.o Estructuras_arreglos1.c

${OBJECTDIR}/Estructuras_arreglos2.o: Estructuras_arreglos2.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Estructuras_arreglos2.o Estructuras_arreglos2.c

${OBJECTDIR}/Estructuras_arreglos3.o: Estructuras_arreglos3.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Estructuras_arreglos3.o Estructuras_arreglos3.c

${OBJECTDIR}/Estructuras_arreglos4.o: Estructuras_arreglos4.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Estructuras_arreglos4.o Estructuras_arreglos4.c

${OBJECTDIR}/Estructuras_arreglos5.o: Estructuras_arreglos5.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Estructuras_arreglos5.o Estructuras_arreglos5.c

${OBJECTDIR}/Estructuras_arreglos6.o: Estructuras_arreglos6.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Estructuras_arreglos6.o Estructuras_arreglos6.c

${OBJECTDIR}/Estructuras_control1.o: Estructuras_control1.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Estructuras_control1.o Estructuras_control1.c

${OBJECTDIR}/Estructuras_control2.o: Estructuras_control2.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Estructuras_control2.o Estructuras_control2.c

${OBJECTDIR}/Estructuras_control3.o: Estructuras_control3.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Estructuras_control3.o Estructuras_control3.c

${OBJECTDIR}/Estructuras_control4.o: Estructuras_control4.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Estructuras_control4.o Estructuras_control4.c

${OBJECTDIR}/Estructuras_control5.o: Estructuras_control5.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Estructuras_control5.o Estructuras_control5.c

${OBJECTDIR}/Estructuras_control6.o: Estructuras_control6.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Estructuras_control6.o Estructuras_control6.c

${OBJECTDIR}/Estructuras_decision1.o: Estructuras_decision1.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Estructuras_decision1.o Estructuras_decision1.c

${OBJECTDIR}/Estructuras_decision2.o: Estructuras_decision2.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Estructuras_decision2.o Estructuras_decision2.c

${OBJECTDIR}/Estructuras_decision3.o: Estructuras_decision3.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Estructuras_decision3.o Estructuras_decision3.c

${OBJECTDIR}/Estructuras_decision4.o: Estructuras_decision4.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Estructuras_decision4.o Estructuras_decision4.c

${OBJECTDIR}/Estructuras_decision5.o: Estructuras_decision5.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Estructuras_decision5.o Estructuras_decision5.c

${OBJECTDIR}/Estructuras_decision6.o: Estructuras_decision6.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Estructuras_decision6.o Estructuras_decision6.c

${OBJECTDIR}/Estructuras_funciones1.o: Estructuras_funciones1.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Estructuras_funciones1.o Estructuras_funciones1.c

${OBJECTDIR}/Estructuras_funciones2.o: Estructuras_funciones2.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Estructuras_funciones2.o Estructuras_funciones2.c

${OBJECTDIR}/Estructuras_funciones3.o: Estructuras_funciones3.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Estructuras_funciones3.o Estructuras_funciones3.c

${OBJECTDIR}/Estructuras_funciones4.o: Estructuras_funciones4.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Estructuras_funciones4.o Estructuras_funciones4.c

${OBJECTDIR}/Estructuras_funciones5.o: Estructuras_funciones5.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Estructuras_funciones5.o Estructuras_funciones5.c

${OBJECTDIR}/For.o: For.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/For.o For.c

${OBJECTDIR}/Funciones_Conversión_Grados.o: Funciones_Conversión_Grados.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Funciones_Conversión_Grados.o Funciones_Conversión_Grados.c

.NO_PARALLEL:${OBJECTDIR}/Implementacion\ de\ math.o
${OBJECTDIR}/Implementacion\ de\ math.o: Implementacion\ de\ math.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Implementacion\ de\ math.o Implementacion\ de\ math.c

${OBJECTDIR}/Metodo_burbuja.o: Metodo_burbuja.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Metodo_burbuja.o Metodo_burbuja.c

${OBJECTDIR}/Metodo_burbuja_optimizado.o: Metodo_burbuja_optimizado.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Metodo_burbuja_optimizado.o Metodo_burbuja_optimizado.c

.NO_PARALLEL:${OBJECTDIR}/Precedencia\ de\ operadores.o
${OBJECTDIR}/Precedencia\ de\ operadores.o: Precedencia\ de\ operadores.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Precedencia\ de\ operadores.o Precedencia\ de\ operadores.c

${OBJECTDIR}/Promedio_en_arreglo.o: Promedio_en_arreglo.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Promedio_en_arreglo.o Promedio_en_arreglo.c

${OBJECTDIR}/Tablas_de_multiplicar.o: Tablas_de_multiplicar.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Tablas_de_multiplicar.o Tablas_de_multiplicar.c

${OBJECTDIR}/Tarea2_arreglos_unidimensionales.o: Tarea2_arreglos_unidimensionales.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Tarea2_arreglos_unidimensionales.o Tarea2_arreglos_unidimensionales.c

${OBJECTDIR}/Valor_Min_Max.o: Valor_Min_Max.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Valor_Min_Max.o Valor_Min_Max.c

${OBJECTDIR}/While.o: While.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/While.o While.c

${OBJECTDIR}/arreglo_bidimensional.o: arreglo_bidimensional.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/arreglo_bidimensional.o arreglo_bidimensional.c

${OBJECTDIR}/arreglo_unidimensional.o: arreglo_unidimensional.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/arreglo_unidimensional.o arreglo_unidimensional.c

${OBJECTDIR}/funcion_strcmp.o: funcion_strcmp.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/funcion_strcmp.o funcion_strcmp.c

${OBJECTDIR}/funcion_strcpy.o: funcion_strcpy.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/funcion_strcpy.o funcion_strcpy.c

${OBJECTDIR}/funcion_strlen.o: funcion_strlen.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/funcion_strlen.o funcion_strlen.c

${OBJECTDIR}/hola_mundo.o: hola_mundo.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/hola_mundo.o hola_mundo.c

${OBJECTDIR}/tarea1_arreglos_unidimensionales.o: tarea1_arreglos_unidimensionales.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/tarea1_arreglos_unidimensionales.o tarea1_arreglos_unidimensionales.c

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
