# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\ProyectLab05Example_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\ProyectLab05Example_autogen.dir\\ParseCache.txt"
  "ProyectLab05Example_autogen"
  )
endif()
