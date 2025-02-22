/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCKFWK_NOTIFICATION_H
#define _MOCKFWK_NOTIFICATION_H

#include "unity.h"
#include "fwk_notification.h"

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

void Mockfwk_notification_Init(void);
void Mockfwk_notification_Destroy(void);
void Mockfwk_notification_Verify(void);




#define fwk_notification_subscribe_ExpectAnyArgsAndReturn(cmock_retval) fwk_notification_subscribe_CMockExpectAnyArgsAndReturn(__LINE__, cmock_retval)
void fwk_notification_subscribe_CMockExpectAnyArgsAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return);
#define fwk_notification_subscribe_ExpectAndReturn(notification_id, source_id, target_id, cmock_retval) fwk_notification_subscribe_CMockExpectAndReturn(__LINE__, notification_id, source_id, target_id, cmock_retval)
void fwk_notification_subscribe_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, fwk_id_t notification_id, fwk_id_t source_id, fwk_id_t target_id, int cmock_to_return);
#define fwk_notification_unsubscribe_ExpectAnyArgsAndReturn(cmock_retval) fwk_notification_unsubscribe_CMockExpectAnyArgsAndReturn(__LINE__, cmock_retval)
void fwk_notification_unsubscribe_CMockExpectAnyArgsAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return);
#define fwk_notification_unsubscribe_ExpectAndReturn(notification_id, source_id, target_id, cmock_retval) fwk_notification_unsubscribe_CMockExpectAndReturn(__LINE__, notification_id, source_id, target_id, cmock_retval)
void fwk_notification_unsubscribe_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, fwk_id_t notification_id, fwk_id_t source_id, fwk_id_t target_id, int cmock_to_return);
#define fwk_notification_notify_ExpectAnyArgsAndReturn(cmock_retval) fwk_notification_notify_CMockExpectAnyArgsAndReturn(__LINE__, cmock_retval)
void fwk_notification_notify_CMockExpectAnyArgsAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return);
#define fwk_notification_notify_ExpectAndReturn(notification_event, count, cmock_retval) fwk_notification_notify_CMockExpectAndReturn(__LINE__, notification_event, count, cmock_retval)
void fwk_notification_notify_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, struct fwk_event* notification_event, unsigned int* count, int cmock_to_return);

#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic pop
#endif
#endif

#endif
