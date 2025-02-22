/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCKFWK_STRING_H
#define _MOCKFWK_STRING_H

#include "unity.h"
#include "fwk_string.h"

/* Ignore the following warnings, since we are copying code */
#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic push
#endif
#if !defined(__clang__)
#pragma GCC diagnostic ignored "-Wpragmas"
#endif
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma GCC diagnostic ignored "-Wduplicate-decl-specifier"
#endif

void Mockfwk_string_Init(void);
void Mockfwk_string_Destroy(void);
void Mockfwk_string_Verify(void);




#define fwk_str_memset_ExpectAnyArgs() fwk_str_memset_CMockExpectAnyArgs(__LINE__)
void fwk_str_memset_CMockExpectAnyArgs(UNITY_LINE_TYPE cmock_line);
#define fwk_str_memset_Expect(dest, ch, count) fwk_str_memset_CMockExpect(__LINE__, dest, ch, count)
void fwk_str_memset_CMockExpect(UNITY_LINE_TYPE cmock_line, void* dest, int ch, size_t count);
#define fwk_str_memcpy_ExpectAnyArgs() fwk_str_memcpy_CMockExpectAnyArgs(__LINE__)
void fwk_str_memcpy_CMockExpectAnyArgs(UNITY_LINE_TYPE cmock_line);
#define fwk_str_memcpy_Expect(dest, src, count) fwk_str_memcpy_CMockExpect(__LINE__, dest, src, count)
void fwk_str_memcpy_CMockExpect(UNITY_LINE_TYPE cmock_line, void* dest, const void* src, size_t count);
#define fwk_str_strncpy_ExpectAnyArgs() fwk_str_strncpy_CMockExpectAnyArgs(__LINE__)
void fwk_str_strncpy_CMockExpectAnyArgs(UNITY_LINE_TYPE cmock_line);
#define fwk_str_strncpy_Expect(dest, src, count) fwk_str_strncpy_CMockExpect(__LINE__, dest, src, count)
void fwk_str_strncpy_CMockExpect(UNITY_LINE_TYPE cmock_line, char* dest, const char* src, size_t count);

#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic pop
#endif
#endif

#endif
