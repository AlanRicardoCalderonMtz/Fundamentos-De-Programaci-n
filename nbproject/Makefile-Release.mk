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
	${OBJECTDIR}/For.o \
	${OBJECTDIR}/Precedencia\ de\ operadores.o \
	${OBJECTDIR}/Tablas_de_multiplicar.o \
	${OBJECTDIR}/While.o \
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

${OBJECTDIR}/For.o: For.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/For.o For.c

.NO_PARALLEL:${OBJECTDIR}/Precedencia\ de\ operadores.o
${OBJECTDIR}/Precedencia\ de\ operadores.o: Precedencia\ de\ operadores.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Precedencia\ de\ operadores.o Precedencia\ de\ operadores.c

${OBJECTDIR}/Tablas_de_multiplicar.o: Tablas_de_multiplicar.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Tablas_de_multiplicar.o Tablas_de_multiplicar.c

${OBJECTDIR}/While.o: While.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/While.o While.c

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
