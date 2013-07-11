/*
 * Copyright 2011 Intel Corporation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef MODEM_FW_H
#define MODEM_FW_H

#include <cmfwdl.h>

typedef void (*modem_progress_callback)(enum cmfwdl_status_type type, int value,
		const char *msg, void *data);

int flash_modem_fw(char *bootloader_name, char *firmware_filename,
		int argc, char **argv, modem_progress_callback cb);

int reset_modem(void);

#endif