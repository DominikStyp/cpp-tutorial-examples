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
CND_PLATFORM=MinGW-Windows
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
	${OBJECTDIR}/AbstractUser.o \
	${OBJECTDIR}/ClassConstructorInvocationTypes.o \
	${OBJECTDIR}/Const.o \
	${OBJECTDIR}/DereferenceVsAddressOfOperator.o \
	${OBJECTDIR}/Enums.o \
	${OBJECTDIR}/Lambdas.o \
	${OBJECTDIR}/NewKeword.o \
	${OBJECTDIR}/OverloadOperators.o \
	${OBJECTDIR}/Pointers.o \
	${OBJECTDIR}/PolymorphismAndAbstractMethods.o \
	${OBJECTDIR}/Printer.o \
	${OBJECTDIR}/StaticKeywordOutsideClass.o \
	${OBJECTDIR}/StaticKeywordOutsideClass1.o \
	${OBJECTDIR}/StructExamples.o \
	${OBJECTDIR}/User.o \
	${OBJECTDIR}/arrays.o \
	${OBJECTDIR}/classTemplates.o \
	${OBJECTDIR}/functionTemplatesGenerics.o \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/typedefAndUsingToCreateAliases.o


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
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cpptutorial.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cpptutorial.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cpptutorial ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/AbstractUser.o: AbstractUser.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/AbstractUser.o AbstractUser.cpp

${OBJECTDIR}/ClassConstructorInvocationTypes.o: ClassConstructorInvocationTypes.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ClassConstructorInvocationTypes.o ClassConstructorInvocationTypes.cpp

${OBJECTDIR}/Const.o: Const.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Const.o Const.cpp

${OBJECTDIR}/DereferenceVsAddressOfOperator.o: DereferenceVsAddressOfOperator.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/DereferenceVsAddressOfOperator.o DereferenceVsAddressOfOperator.cpp

${OBJECTDIR}/Enums.o: Enums.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Enums.o Enums.cpp

${OBJECTDIR}/Lambdas.o: Lambdas.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Lambdas.o Lambdas.cpp

${OBJECTDIR}/NewKeword.o: NewKeword.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/NewKeword.o NewKeword.cpp

${OBJECTDIR}/OverloadOperators.o: OverloadOperators.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/OverloadOperators.o OverloadOperators.cpp

${OBJECTDIR}/Pointers.o: Pointers.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Pointers.o Pointers.cpp

${OBJECTDIR}/PolymorphismAndAbstractMethods.o: PolymorphismAndAbstractMethods.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/PolymorphismAndAbstractMethods.o PolymorphismAndAbstractMethods.cpp

${OBJECTDIR}/Printer.o: Printer.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Printer.o Printer.cpp

${OBJECTDIR}/StaticKeywordOutsideClass.o: StaticKeywordOutsideClass.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/StaticKeywordOutsideClass.o StaticKeywordOutsideClass.cpp

${OBJECTDIR}/StaticKeywordOutsideClass1.o: StaticKeywordOutsideClass1.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/StaticKeywordOutsideClass1.o StaticKeywordOutsideClass1.cpp

${OBJECTDIR}/StructExamples.o: StructExamples.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/StructExamples.o StructExamples.cpp

${OBJECTDIR}/User.o: User.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/User.o User.cpp

${OBJECTDIR}/arrays.o: arrays.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/arrays.o arrays.cpp

${OBJECTDIR}/classTemplates.o: classTemplates.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/classTemplates.o classTemplates.cpp

${OBJECTDIR}/functionTemplatesGenerics.o: functionTemplatesGenerics.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/functionTemplatesGenerics.o functionTemplatesGenerics.cpp

${OBJECTDIR}/main.o: main.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

${OBJECTDIR}/typedefAndUsingToCreateAliases.o: typedefAndUsingToCreateAliases.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/typedefAndUsingToCreateAliases.o typedefAndUsingToCreateAliases.cpp

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
