/*  THIS FILE WAS GENERATED BY THE DATALIGHT RELIANCE EDGE CONFIGURATION
    UTILITY.  DO NOT MODIFY.

    Generated by configuration utility version 2.02
*/
/** @file
*/
#ifndef REDCONF_H
#define REDCONF_H


#include <string.h>

#define REDCONF_READ_ONLY 0

#define REDCONF_API_POSIX 1

#define REDCONF_API_FSE 0

#define REDCONF_API_POSIX_FORMAT 1

#define REDCONF_API_POSIX_LINK 1

#define REDCONF_API_POSIX_UNLINK 1

#define REDCONF_API_POSIX_MKDIR 1

#define REDCONF_API_POSIX_RMDIR 1

#define REDCONF_API_POSIX_RENAME 1

#define REDCONF_RENAME_ATOMIC 1

#define REDCONF_API_POSIX_FTRUNCATE 1

#define REDCONF_API_POSIX_READDIR 1

#define REDCONF_API_POSIX_CWD 0

#define REDCONF_NAME_MAX 12U

#define REDCONF_PATH_SEPARATOR '/'

#define REDCONF_TASK_COUNT 10U

#define REDCONF_HANDLE_COUNT 10U

#define REDCONF_API_FSE_FORMAT 0

#define REDCONF_API_FSE_TRUNCATE 0

#define REDCONF_API_FSE_TRANSMASKGET 0

#define REDCONF_API_FSE_TRANSMASKSET 0

#define REDCONF_OUTPUT 0

#define REDCONF_ASSERTS 1

#define REDCONF_BLOCK_SIZE 512U

#define REDCONF_VOLUME_COUNT 1U

#define REDCONF_ENDIAN_BIG 0

#define REDCONF_ALIGNMENT_SIZE 4U

#define REDCONF_CRC_ALGORITHM CRC_SLICEBY8

#define REDCONF_INODE_BLOCKS 1

#define REDCONF_INODE_TIMESTAMPS 1

#define REDCONF_ATIME 0

#define REDCONF_DIRECT_POINTERS 4U

#define REDCONF_INDIRECT_POINTERS 32U

#define REDCONF_BUFFER_COUNT 12U

#define RedMemCpyUnchecked memcpy

#define RedMemMoveUnchecked memmove

#define RedMemSetUnchecked memset

#define RedMemCmpUnchecked memcmp

#define RedStrLenUnchecked strlen

#define RedStrCmpUnchecked strcmp

#define RedStrNCmpUnchecked strncmp

#define RedStrNCpyUnchecked strncpy

#define REDCONF_TRANSACT_DEFAULT (( RED_TRANSACT_CREAT | RED_TRANSACT_MKDIR | RED_TRANSACT_RENAME | RED_TRANSACT_LINK | RED_TRANSACT_UNLINK | RED_TRANSACT_FSYNC | RED_TRANSACT_CLOSE | RED_TRANSACT_VOLFULL | RED_TRANSACT_UMOUNT ) & RED_TRANSACT_MASK)

#define REDCONF_IMAP_INLINE 0

#define REDCONF_IMAP_EXTERNAL 1

#define REDCONF_DISCARDS 0

#define REDCONF_IMAGE_BUILDER 0

#define REDCONF_CHECKER 0

#define RED_CONFIG_UTILITY_VERSION 0x2000200U

#define RED_CONFIG_MINCOMPAT_VER 0x1000200U

#endif