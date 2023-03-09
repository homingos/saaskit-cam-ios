# For more information about using CMake with Android Studio, read the
# documentation: https://d.android.com/studio/projects/add-native-code.html

# Sets the minimum version of CMake required to build the native library.

cmake_minimum_required(VERSION 3.10.2)
set(CMAKE_CXX_COMPILER_FORCED TRUE)

# Declares and names the project.

project("FSCsdk")

set(LOCAL_LDLIBS "${LOCAL_LDLIBS} -Wl,-init,_init")

add_compile_options("-fvisibility=hidden")

include_directories(
        "opencv"
        "base"
        "FSC"
        "FFD"
        "license" "des" "des/openssl"
        "."
)

file(GLOB SOURCES
        "base/*"
        "opencv/*"
        "native-lib.cpp"
        "NativeCode.cpp"
        "FSC/*"
        "FFD/*"
        )

add_compile_options(-D __ARM_NEON=1)
add_compile_options("-O3")
add_compile_options("-fsigned-char")
add_compile_options("-mfpu=neon")
add_compile_options("-fPIC")

# Creates and names a library, sets it as either STATIC
# or SHARED, and provides the relative paths to its source code.
# You can define multiple libraries, and CMake builds them for you.
# Gradle automatically packages shared libraries with your APK.

add_library( # Sets the name of the library.
        FSCsdk

        # Sets the library as a shared library.
        SHARED

        # Provides a relative path to your source file(s).
        ${SOURCES})

# Searches for a specified prebuilt library and stores the path as a
# variable. Because CMake includes system libraries in the search path by
# default, you only need to specify the name of the public NDK library
# you want to add. CMake verifies that the library exists before
# completing its build.

find_library( # Sets the name of the path variable.
        log-lib

        # Specifies the name of the NDK library that
        # you want CMake to locate.
        log)


# Specifies libraries CMake should link to your target library. You
# can link multiple libraries, such as libraries you define in this
# build script, prebuilt third-party libraries, or system libraries.


add_library(opencv_core STATIC IMPORTED)
set_target_properties(opencv_core PROPERTIES IMPORTED_LOCATION ${PROJECT_SOURCE_DIR}/libs/libopencv_core.so)

add_library(opencv_imgproc STATIC IMPORTED)
set_target_properties(opencv_imgproc PROPERTIES IMPORTED_LOCATION ${PROJECT_SOURCE_DIR}/libs/libopencv_imgproc.so)

#add_library(opencv_codecs STATIC IMPORTED)
#set_target_properties(opencv_codecs PROPERTIES IMPORTED_LOCATION ${PROJECT_SOURCE_DIR}/libs/libopencv_imgcodecs.so)

add_library(opencv_calib3d STATIC IMPORTED)
set_target_properties(opencv_calib3d PROPERTIES IMPORTED_LOCATION ${PROJECT_SOURCE_DIR}/libs/libopencv_calib3d.so)

add_library(opencv_features2d STATIC IMPORTED)
set_target_properties(opencv_features2d PROPERTIES IMPORTED_LOCATION ${PROJECT_SOURCE_DIR}/libs/libopencv_features2d.so)

add_library(opencv_tracking STATIC IMPORTED)
set_target_properties(opencv_tracking PROPERTIES IMPORTED_LOCATION ${PROJECT_SOURCE_DIR}/libs/libopencv_tracking.so)

add_library(opencv_flann STATIC IMPORTED)
set_target_properties(opencv_flann PROPERTIES IMPORTED_LOCATION ${PROJECT_SOURCE_DIR}/libs/libopencv_flann.so)

add_library(opencv_dnn STATIC IMPORTED)
set_target_properties(opencv_dnn PROPERTIES IMPORTED_LOCATION ${PROJECT_SOURCE_DIR}/libs/libopencv_dnn.so)

add_library(opencv_video STATIC IMPORTED)
set_target_properties(opencv_video PROPERTIES IMPORTED_LOCATION ${PROJECT_SOURCE_DIR}/libs/libopencv_video.so)

add_library(opencv_photo STATIC IMPORTED)
set_target_properties(opencv_photo PROPERTIES IMPORTED_LOCATION ${PROJECT_SOURCE_DIR}/libs/libopencv_photo.so)

add_library(libc++_shared STATIC IMPORTED)
set_target_properties(libc++_shared PROPERTIES IMPORTED_LOCATION ${PROJECT_SOURCE_DIR}/libs/libc++_shared.so)

target_link_libraries( # Specifies the target library.
        FSCsdk
        opencv_core
        opencv_imgproc
        #        opencv_codecs
        opencv_flann
        opencv_features2d
        opencv_tracking
        opencv_calib3d
        opencv_photo
        libc++_shared
        opencv_video
        opencv_dnn
        # Links the target library to the log library
        # included in the NDK.
        ${log-lib} android jnigraphics)