execute_process(COMMAND "/home/nvidia/catkin_ws/build/rpg_svo/svo_analysis/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/nvidia/catkin_ws/build/rpg_svo/svo_analysis/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
