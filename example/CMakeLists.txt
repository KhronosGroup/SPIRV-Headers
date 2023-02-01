add_library(SPIRV-Headers-example
	${CMAKE_CURRENT_SOURCE_DIR}/example.cpp)
target_include_directories(SPIRV-Headers-example
	PRIVATE ${SPIRV-Headers_SOURCE_DIR}/include)

function(spirv_get_grammer_version)
    set(spirv_core_grammer_json "${PROJECT_SOURCE_DIR}/include/spirv/unified1/spirv.core.grammar.json")
    if (NOT EXISTS ${spirv_core_grammer_json})
        message(FATAL_ERROR "Couldn't find spirv.core.grammar.json!")
    endif()

    file(READ ${spirv_core_grammer_json} ver)

    if (ver MATCHES "[ ]+\"major_version\"[ ]+:[ ]+([0-9]+),")
        set(MAJOR_VERSION "${CMAKE_MATCH_1}")
    else()
        message(FATAL_ERROR "Couldn't get major version")
    endif()

    if (ver MATCHES "[ ]+\"minor_version\"[ ]+:[ ]+([0-9]+),")
        set(MINOR_VERSION "${CMAKE_MATCH_1}")
    else()
        message(FATAL_ERROR "Couldn't get minor version")
    endif()

    if (ver MATCHES "[ ]+\"revision\"[ ]+:[ ]+([0-9]+),")
        set(PATCH_VERSION "${CMAKE_MATCH_1}")
    else()
        message(FATAL_ERROR "Couldn't get minor version")
    endif()

    set(SPIRV_GRAMMER_VERSION "${MAJOR_VERSION}.${MINOR_VERSION}.${PATCH_VERSION}" PARENT_SCOPE)
endfunction()
spirv_get_grammer_version()

message(STATUS "SPIRV_GRAMMER_VERSION = ${SPIRV_GRAMMER_VERSION}")

# Ensure the project version is up to date!
if (${SPIRV_GRAMMER_VERSION} VERSION_EQUAL ${PROJECT_VERSION})
    message(STATUS "CMake project version is up to date.")
else()
    message(FATAL_ERROR "Update CMake project version! Current version = ${PROJECT_VERSION} but it should be ${SPIRV_GRAMMER_VERSION}!")
endif()
