LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := MyGame

LOCAL_MODULE_FILENAME := libMyGame

LOCAL_SRC_FILES := $(LOCAL_PATH)/hellocpp/main.cpp \
$(LOCAL_PATH)/../../../Classes/AppDelegate.cpp \
$(LOCAL_PATH)/../../../Classes/AdmodAndroid.cpp \
$(LOCAL_PATH)/../../../Classes/AIRandomSuggest.cpp \
$(LOCAL_PATH)/../../../Classes/AlgorithmPikachu.cpp \
$(LOCAL_PATH)/../../../Classes/AlgorithmRandom.cpp \
$(LOCAL_PATH)/../../../Classes/AndroidScene.cpp \
$(LOCAL_PATH)/../../../Classes/BaseOject.cpp \
$(LOCAL_PATH)/../../../Classes/ButtonCustom.cpp \
$(LOCAL_PATH)/../../../Classes/DataUser.cpp \
$(LOCAL_PATH)/../../../Classes/DrawLinePikachu.cpp \
$(LOCAL_PATH)/../../../Classes/GameScene.cpp \
$(LOCAL_PATH)/../../../Classes/GameBoard.cpp \
$(LOCAL_PATH)/../../../Classes/HomeScene.cpp \
$(LOCAL_PATH)/../../../Classes/MyLine.cpp \
$(LOCAL_PATH)/../../../Classes/GoogleReward.cpp \
$(LOCAL_PATH)/../../../Classes/PikachuObject.cpp \
$(LOCAL_PATH)/../../../Classes/PopupGame.cpp \
$(LOCAL_PATH)/../../../Classes/ProgressBarCustom.cpp 

LOCAL_C_INCLUDES := $(LOCAL_PATH)/../../../Classes

# _COCOS_HEADER_ANDROID_BEGIN
# _COCOS_HEADER_ANDROID_END


LOCAL_STATIC_LIBRARIES := cc_static

# _COCOS_LIB_ANDROID_BEGIN
# _COCOS_LIB_ANDROID_END

include $(BUILD_SHARED_LIBRARY)

$(call import-module, cocos)

# _COCOS_LIB_IMPORT_ANDROID_BEGIN
# _COCOS_LIB_IMPORT_ANDROID_END
