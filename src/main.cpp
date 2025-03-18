/*
 * Copyright (c) 2023, Meta
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <iostream>
#include "acc_version.h"


int main(void)
{
	std::cout << "Hello, C++ world! " << CONFIG_BOARD << std::endl;
	return 0;
}
