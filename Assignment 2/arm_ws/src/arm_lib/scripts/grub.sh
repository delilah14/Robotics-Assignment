rostopic pub /ik_position_pub arm_lib/ik_positions -- {0.4,0,0.2} 
rostopic pub  /release_catch_pub arm_lib/release_catch_cmd catch
rostopic pub  /release_catch_pub arm_lib/release_catch_cmd release
