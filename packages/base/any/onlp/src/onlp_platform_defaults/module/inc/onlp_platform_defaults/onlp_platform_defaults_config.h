/************************************************************
 * <bsn.cl fy=2014 v=onl>
 * 
 *        Copyright 2014, 2015 Big Switch Networks, Inc.       
 * 
 * Licensed under the Eclipse Public License, Version 1.0 (the
 * "License"); you may not use this file except in compliance
 * with the License. You may obtain a copy of the License at
 * 
 *        http://www.eclipse.org/legal/epl-v10.html
 * 
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
 * either express or implied. See the License for the specific
 * language governing permissions and limitations under the
 * License.
 * 
 * </bsn.cl>
 ************************************************************
 *
 *
 *
 ***********************************************************/


/**************************************************************************//**
 *
 * @file
 * @brief onlp_platform_defaults Configuration Header
 *
 * @addtogroup onlp_platform_defaults-config
 * @{
 *
 *****************************************************************************/
#ifndef __ONLP_PLATFORM_DEFAULTS_CONFIG_H__
#define __ONLP_PLATFORM_DEFAULTS_CONFIG_H__

#ifdef GLOBAL_INCLUDE_CUSTOM_CONFIG
#include <global_custom_config.h>
#endif
#ifdef ONLP_PLATFORM_DEFAULTS_INCLUDE_CUSTOM_CONFIG
#include <onlp_platform_defaults_custom_config.h>
#endif

/* <auto.start.cdefs(ONLP_PLATFORM_DEFAULTS_CONFIG_HEADER).header> */
#include <AIM/aim.h>
/**
 * ONLP_PLATFORM_DEFAULTS_CONFIG_INCLUDE_LOGGING
 *
 * Include or exclude logging. */


#ifndef ONLP_PLATFORM_DEFAULTS_CONFIG_INCLUDE_LOGGING
#define ONLP_PLATFORM_DEFAULTS_CONFIG_INCLUDE_LOGGING 1
#endif

/**
 * ONLP_PLATFORM_DEFAULTS_CONFIG_LOG_OPTIONS_DEFAULT
 *
 * Default enabled log options. */


#ifndef ONLP_PLATFORM_DEFAULTS_CONFIG_LOG_OPTIONS_DEFAULT
#define ONLP_PLATFORM_DEFAULTS_CONFIG_LOG_OPTIONS_DEFAULT AIM_LOG_OPTIONS_DEFAULT
#endif

/**
 * ONLP_PLATFORM_DEFAULTS_CONFIG_LOG_BITS_DEFAULT
 *
 * Default enabled log bits. */


#ifndef ONLP_PLATFORM_DEFAULTS_CONFIG_LOG_BITS_DEFAULT
#define ONLP_PLATFORM_DEFAULTS_CONFIG_LOG_BITS_DEFAULT AIM_LOG_BITS_DEFAULT
#endif

/**
 * ONLP_PLATFORM_DEFAULTS_CONFIG_LOG_CUSTOM_BITS_DEFAULT
 *
 * Default enabled custom log bits. */


#ifndef ONLP_PLATFORM_DEFAULTS_CONFIG_LOG_CUSTOM_BITS_DEFAULT
#define ONLP_PLATFORM_DEFAULTS_CONFIG_LOG_CUSTOM_BITS_DEFAULT 0
#endif

/**
 * ONLP_PLATFORM_DEFAULTS_CONFIG_PORTING_STDLIB
 *
 * Default all porting macros to use the C standard libraries. */


#ifndef ONLP_PLATFORM_DEFAULTS_CONFIG_PORTING_STDLIB
#define ONLP_PLATFORM_DEFAULTS_CONFIG_PORTING_STDLIB 1
#endif

/**
 * ONLP_PLATFORM_DEFAULTS_CONFIG_PORTING_INCLUDE_STDLIB_HEADERS
 *
 * Include standard library headers for stdlib porting macros. */


#ifndef ONLP_PLATFORM_DEFAULTS_CONFIG_PORTING_INCLUDE_STDLIB_HEADERS
#define ONLP_PLATFORM_DEFAULTS_CONFIG_PORTING_INCLUDE_STDLIB_HEADERS ONLP_PLATFORM_DEFAULTS_CONFIG_PORTING_STDLIB
#endif

/**
 * ONLP_PLATFORM_DEFAULTS_CONFIG_INCLUDE_UCLI
 *
 * Include generic uCli support. */


#ifndef ONLP_PLATFORM_DEFAULTS_CONFIG_INCLUDE_UCLI
#define ONLP_PLATFORM_DEFAULTS_CONFIG_INCLUDE_UCLI 0
#endif

/**
 * ONLP_PLATFORM_DEFAULTS_CONFIG_AS_PLATFORM
 *
 * Build as the onlp-platform library stub. */


#ifndef ONLP_PLATFORM_DEFAULTS_CONFIG_AS_PLATFORM
#define ONLP_PLATFORM_DEFAULTS_CONFIG_AS_PLATFORM 0
#endif



/**
 * All compile time options can be queried or displayed
 */

/** Configuration settings structure. */
typedef struct onlp_platform_defaults_config_settings_s {
    /** name */
    const char* name;
    /** value */
    const char* value;
} onlp_platform_defaults_config_settings_t;

/** Configuration settings table. */
/** onlp_platform_defaults_config_settings table. */
extern onlp_platform_defaults_config_settings_t onlp_platform_defaults_config_settings[];

/**
 * @brief Lookup a configuration setting.
 * @param setting The name of the configuration option to lookup.
 */
const char* onlp_platform_defaults_config_lookup(const char* setting);

/**
 * @brief Show the compile-time configuration.
 * @param pvs The output stream.
 */
int onlp_platform_defaults_config_show(struct aim_pvs_s* pvs);

/* <auto.end.cdefs(ONLP_PLATFORM_DEFAULTS_CONFIG_HEADER).header> */

#include "onlp_platform_defaults_porting.h"

#endif /* __ONLP_PLATFORM_DEFAULTS_CONFIG_H__ */
/* @} */
