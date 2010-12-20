/**
 * Simple test case for array manipulations.
 */

#include "../helper/array.h"
#include "common.h"
#include <gammu-smsd.h>
#include "../smsd/services/sql.h" /* For SMSDSQL_ParseDate */

int main(int argc UNUSED, char **argv UNUSED)
{
	test_result(SMSDSQL_ParseDate(NULL, "2005-05-24 22:53:30") == 1116971610L);
	test_result(SMSDSQL_ParseDate(NULL, "0000-00-00 00:00:00") == -1);
	return 0;
}

