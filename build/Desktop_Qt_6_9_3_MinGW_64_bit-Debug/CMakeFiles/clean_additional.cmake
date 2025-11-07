# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\can_emulator_project_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\can_emulator_project_autogen.dir\\ParseCache.txt"
  "can_emulator_project_autogen"
  )
endif()
