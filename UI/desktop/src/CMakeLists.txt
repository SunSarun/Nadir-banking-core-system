
# Add both the implementation AND the header files so AUTOMOC can scan it
add_library(desktop_lib 
    core.cpp 
    ${CMAKE_SOURCE_DIR}/include/desktop/core.hpp
)

target_include_directories(desktop_lib
    PUBLIC 
        $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
    PRIVATE 
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(desktop_lib PUBLIC Qt6::Widgets)
