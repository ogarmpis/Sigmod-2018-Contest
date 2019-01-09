#ifndef CU_TEST_IMPLEMENTATION_H
#define CU_TEST_IMPLEMENTATION_H
#include "CuTest.h"
#include "../include/implementation.h"
#include "../include/relationMethods.h"
#include "../include/queryMethods.h"

void TestCreateRowIdList(CuTest *tc);
void TestInsertIntoRowIdList(CuTest *tc);
void TestDeleteRowIdList(CuTest *tc);
void TestSetRowIdsValuesToArray(CuTest *tc);
void TestJoinColumns(CuTest *tc);

CuSuite* ImplementationGetSuite();

#endif
