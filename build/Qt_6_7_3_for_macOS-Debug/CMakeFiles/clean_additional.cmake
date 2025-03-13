# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/my_own_writer_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/my_own_writer_autogen.dir/ParseCache.txt"
  "my_own_writer_autogen"
  )
endif()
