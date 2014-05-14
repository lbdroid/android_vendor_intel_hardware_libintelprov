LOCAL_PATH:= $(call my-dir)

include $(CLEAR_VARS)
LOCAL_C_INCLUDES:=  $(LOCAL_PATH)/../lib/include
LOCAL_STATIC_LIBRARIES := libcgpt_static libc libcutils
LOCAL_FORCE_STATIC_EXECUTABLE := true
LOCAL_SRC_FILES := diskd.c main.c
LOCAL_MODULE := diskd
LOCAL_MODULE_TAGS := optional
LOCAL_MODULE_PATH := $(TARGET_ROOT_OUT_SBIN)
LOCAL_UNSTRIPPED_PATH := $(TARGET_ROOT_OUT_SBIN_UNSTRIPPED)
include $(BUILD_EXECUTABLE)