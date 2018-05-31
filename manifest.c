/*
 * Copyright (C) 2016 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include <trusty_app_manifest.h>

trusty_app_manifest_t TRUSTY_APP_MANIFEST_ATTRS trusty_app_manifest =
{

    /* UUID : {905bcb84-2dc4-419d-b951-7255027d318c} */
    { 0x905bcb84, 0x2dc4, 0x419d,
        { 0xb9, 0x51, 0x72, 0x55, 0x02, 0x7d, 0x31, 0x8c } },
	{
		TRUSTY_APP_CONFIG_MIN_HEAP_SIZE(2 * 4096),
		TRUSTY_APP_CONFIG_MIN_STACK_SIZE(1 * 4096),
	},
};
