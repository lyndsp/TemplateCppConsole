project(TemplateCppLibrary)

set(HEADER_FILES
        TemplateCppClass.h
        )

set(SOURCE_FILES
        TemplateCppClass.cpp
        )

add_library(TemplateCppLibrary STATIC ${SOURCE_FILES} ${HEADER_FILES})