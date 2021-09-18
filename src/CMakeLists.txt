include_directories(../include)
file(GLOB_RECURSE main *.cpp)

if(MSVC)
	add_compile_definitions(_USE_MATH_DEFINES=1)
endif()

add_library(rive ${main})
target_link_libraries(rive PRIVATE)

install(
  TARGETS rive
  EXPORT Rive
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
install(EXPORT Rive
	NAMESPACE Rive::
	FILE RiveConfig.cmake
	DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/Rive
)