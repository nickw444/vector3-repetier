/*
    This file is part of Repetier-Firmware.

    Repetier-Firmware is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Repetier-Firmware is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Repetier-Firmware.  If not, see <http://www.gnu.org/licenses/>.

*/

#ifndef CONFIGURATION_H
#define CONFIGURATION_H

/**************** READ FIRST ************************

   This configuration file was created with the configuration tool. For that
   reason, it does not contain the same informations as the original Configuration.h file.
   It misses the comments and unused parts. Open this file file in the config tool
   to see and change the data. You can also upload it to newer/older versions. The system
   will silently add new options, so compilation continues to work.

   This file is optimized for version 1.0.3
   generator: http://www.repetier.com/firmware/dev/

   If you are in doubt which named functions use which pins on your board, please check the
   pins.h for the used name->pin assignments and your board documentation to verify it is
   as you expect.

*/

#define NUM_EXTRUDER 1
#define MOTHERBOARD 62
#include "pins.h"

// ################## EDIT THESE SETTINGS MANUALLY ################

// ################ END MANUAL SETTINGS ##########################

#undef FAN_PIN
#define FAN_PIN 4
#undef FAN_BOARD_PIN
#define FAN_BOARD_PIN -1
#define BOARD_FAN_SPEED 255
#define BOARD_FAN_MIN_SPEED 0
#define FAN_THERMO_PIN -1
#define FAN_THERMO_MIN_PWM 128
#define FAN_THERMO_MAX_PWM 255
#define FAN_THERMO_MIN_TEMP 45
#define FAN_THERMO_MAX_TEMP 60
#define FAN_THERMO_THERMISTOR_PIN -1
#define FAN_THERMO_THERMISTOR_TYPE 1
#undef Z_MIN_PIN
#define Z_MIN_PIN -1
#undef Z_MAX_PIN
#define Z_MAX_PIN ORIG_Z_MIN_PIN

//#define EXTERNALSERIAL  use Arduino serial library instead of build in. Requires more ram, has only 63 byte input buffer.
// Uncomment the following line if you are using Arduino compatible firmware made for Arduino version earlier then 1.0
// If it is incompatible you will get compiler errors about write functions not being compatible!
//#define COMPAT_PRE1
#define BLUETOOTH_SERIAL  -1
#define BLUETOOTH_BAUD  115200
#define MIXING_EXTRUDER 0

#define DRIVE_SYSTEM 0
#define XAXIS_STEPS_PER_MM 76.8976
#define YAXIS_STEPS_PER_MM 85.2108
#define ZAXIS_STEPS_PER_MM 2560
#define EXTRUDER_FAN_COOL_TEMP 50
#define PDM_FOR_EXTRUDER 0
#define PDM_FOR_COOLER 0
#define DECOUPLING_TEST_MAX_HOLD_VARIANCE 20
#define DECOUPLING_TEST_MIN_TEMP_RISE 1
#define KILL_IF_SENSOR_DEFECT 0
#define RETRACT_ON_PAUSE 2
#define PAUSE_START_COMMANDS ""
#define PAUSE_END_COMMANDS ""
#define SHARED_EXTRUDER_HEATER 0
#define EXT0_X_OFFSET 0
#define EXT0_Y_OFFSET 0
#define EXT0_Z_OFFSET 0
#define EXT0_STEPS_PER_MM 99.615
#define EXT0_TEMPSENSOR_TYPE 5
#define EXT0_TEMPSENSOR_PIN TEMP_0_PIN
#define EXT0_HEATER_PIN HEATER_0_PIN
#define EXT0_STEP_PIN ORIG_E0_STEP_PIN
#define EXT0_DIR_PIN ORIG_E0_DIR_PIN
#define EXT0_INVERSE 1
#define EXT0_ENABLE_PIN ORIG_E0_ENABLE_PIN
#define EXT0_ENABLE_ON 0
#define EXT0_MIRROR_STEPPER 0
#define EXT0_STEP2_PIN ORIG_E0_STEP_PIN
#define EXT0_DIR2_PIN ORIG_E0_DIR_PIN
#define EXT0_INVERSE2 0
#define EXT0_ENABLE2_PIN ORIG_E0_ENABLE_PIN
#define EXT0_MAX_FEEDRATE 50
#define EXT0_MAX_START_FEEDRATE 20
#define EXT0_MAX_ACCELERATION 5000
#define EXT0_HEAT_MANAGER 1
#define EXT0_PREHEAT_TEMP 190
#define EXT0_WATCHPERIOD 1
#define EXT0_PID_INTEGRAL_DRIVE_MAX 100
#define EXT0_PID_INTEGRAL_DRIVE_MIN 40
#define EXT0_PID_PGAIN_OR_DEAD_TIME 3.49
#define EXT0_PID_I 0.09
#define EXT0_PID_D 32.73
#define EXT0_PID_MAX 200
#define EXT0_ADVANCE_K 0
#define EXT0_ADVANCE_L 0
#define EXT0_ADVANCE_BACKLASH_STEPS 0
#define EXT0_WAIT_RETRACT_TEMP 150
#define EXT0_WAIT_RETRACT_UNITS 0
#define EXT0_SELECT_COMMANDS ""
#define EXT0_DESELECT_COMMANDS ""
#define EXT0_EXTRUDER_COOLER_PIN -1
#define EXT0_EXTRUDER_COOLER_SPEED 255
#define EXT0_DECOUPLE_TEST_PERIOD 24000
#define EXT0_JAM_PIN -1
#define EXT0_JAM_PULLUP 0

#define FEATURE_RETRACTION 1
#define AUTORETRACT_ENABLED 0
#define RETRACTION_LENGTH 3
#define RETRACTION_LONG_LENGTH 13
#define RETRACTION_SPEED 40
#define RETRACTION_Z_LIFT 0
#define RETRACTION_UNDO_EXTRA_LENGTH 0
#define RETRACTION_UNDO_EXTRA_LONG_LENGTH 0
#define RETRACTION_UNDO_SPEED 20
#define FILAMENTCHANGE_X_POS 0
#define FILAMENTCHANGE_Y_POS 0
#define FILAMENTCHANGE_Z_ADD  2
#define FILAMENTCHANGE_REHOME 1
#define FILAMENTCHANGE_SHORTRETRACT 5
#define FILAMENTCHANGE_LONGRETRACT 50
#define JAM_METHOD 1
#define JAM_STEPS 220
#define JAM_SLOWDOWN_STEPS 320
#define JAM_SLOWDOWN_TO 70
#define JAM_ERROR_STEPS 500
#define JAM_MIN_STEPS 10
#define JAM_ACTION 0

#define RETRACT_DURING_HEATUP true
#define PID_CONTROL_RANGE 20
#define SKIP_M109_IF_WITHIN 2
#define SCALE_PID_TO_MAX 0
#define TEMP_HYSTERESIS 0
#define EXTRUDE_MAXLENGTH 160
#define NUM_TEMPS_USERTHERMISTOR0 100
#define USER_THERMISTORTABLE0 { \
    { 1 * 4 , 500 * 8 }, \
    { 12 * 4 , 300 * 8 }, \
    { 14 * 4 , 288 * 8 }, \
    { 23 * 4 , 254 * 8 }, \
    { 31 * 4 , 234 * 8 }, \
    { 40 * 4 , 220 * 8 }, \
    { 66 * 4 , 192 * 8 }, \
    { 80 * 4 , 182 * 8 }, \
    { 92 * 4 , 175 * 8 }, \
    { 109 * 4 , 167 * 8 }, \
    { 120 * 4 , 162 * 8 }, \
    { 124 * 4 , 160 * 8 }, \
    { 131 * 4 , 157 * 8 }, \
    { 142 * 4 , 153 * 8 }, \
    { 147 * 4 , 151 * 8 }, \
    { 156 * 4 , 148 * 8 }, \
    { 163 * 4 , 146 * 8 }, \
    { 181 * 4 , 141 * 8 }, \
    { 196 * 4 , 137 * 8 }, \
    { 218 * 4 , 132 * 8 }, \
    { 278 * 4 , 120 * 8 }, \
    { 295 * 4 , 117 * 8 }, \
    { 307 * 4 , 115 * 8 }, \
    { 319 * 4 , 113 * 8 }, \
    { 325 * 4 , 112 * 8 }, \
    { 338 * 4 , 110 * 8 }, \
    { 345 * 4 , 109 * 8 }, \
    { 352 * 4 , 108 * 8 }, \
    { 359 * 4 , 107 * 8 }, \
    { 366 * 4 , 106 * 8 }, \
    { 373 * 4 , 105 * 8 }, \
    { 380 * 4 , 104 * 8 }, \
    { 387 * 4 , 103 * 8 }, \
    { 394 * 4 , 102 * 8 }, \
    { 401 * 4 , 101 * 8 }, \
    { 409 * 4 , 100 * 8 }, \
    { 416 * 4 , 99 * 8 }, \
    { 424 * 4 , 98 * 8 }, \
    { 432 * 4 , 97 * 8 }, \
    { 439 * 4 , 96 * 8 }, \
    { 447 * 4 , 95 * 8 }, \
    { 455 * 4 , 94 * 8 }, \
    { 462 * 4 , 93 * 8 }, \
    { 470 * 4 , 92 * 8 }, \
    { 478 * 4 , 91 * 8 }, \
    { 486 * 4 , 90 * 8 }, \
    { 494 * 4 , 89 * 8 }, \
    { 502 * 4 , 88 * 8 }, \
    { 511 * 4 , 87 * 8 }, \
    { 519 * 4 , 86 * 8 }, \
    { 527 * 4 , 85 * 8 }, \
    { 535 * 4 , 84 * 8 }, \
    { 543 * 4 , 83 * 8 }, \
    { 552 * 4 , 82 * 8 }, \
    { 560 * 4 , 81 * 8 }, \
    { 568 * 4 , 80 * 8 }, \
    { 576 * 4 , 79 * 8 }, \
    { 585 * 4 , 78 * 8 }, \
    { 593 * 4 , 77 * 8 }, \
    { 601 * 4 , 76 * 8 }, \
    { 610 * 4 , 75 * 8 }, \
    { 618 * 4 , 74 * 8 }, \
    { 626 * 4 , 73 * 8 }, \
    { 634 * 4 , 72 * 8 }, \
    { 643 * 4 , 71 * 8 }, \
    { 651 * 4 , 70 * 8 }, \
    { 659 * 4 , 69 * 8 }, \
    { 667 * 4 , 68 * 8 }, \
    { 675 * 4 , 67 * 8 }, \
    { 691 * 4 , 65 * 8 }, \
    { 707 * 4 , 63 * 8 }, \
    { 714 * 4 , 62 * 8 }, \
    { 722 * 4 , 61 * 8 }, \
    { 737 * 4 , 59 * 8 }, \
    { 744 * 4 , 58 * 8 }, \
    { 752 * 4 , 57 * 8 }, \
    { 766 * 4 , 55 * 8 }, \
    { 773 * 4 , 54 * 8 }, \
    { 787 * 4 , 52 * 8 }, \
    { 794 * 4 , 51 * 8 }, \
    { 807 * 4 , 49 * 8 }, \
    { 814 * 4 , 48 * 8 }, \
    { 826 * 4 , 46 * 8 }, \
    { 833 * 4 , 45 * 8 }, \
    { 845 * 4 , 43 * 8 }, \
    { 856 * 4 , 41 * 8 }, \
    { 862 * 4 , 40 * 8 }, \
    { 872 * 4 , 38 * 8 }, \
    { 883 * 4 , 36 * 8 }, \
    { 892 * 4 , 34 * 8 }, \
    { 902 * 4 , 32 * 8 }, \
    { 915 * 4 , 29 * 8 }, \
    { 923 * 4 , 27 * 8 }, \
    { 935 * 4 , 24 * 8 }, \
    { 942 * 4 , 22 * 8 }, \
    { 952 * 4 , 19 * 8 }, \
    { 963 * 4 , 15 * 8 }, \
    { 973 * 4 , 11 * 8 }, \
    { 981 * 4 , 7 * 8 }, \
    { 990 * 4 , 2 * 8 }, \
}
#define NUM_TEMPS_USERTHERMISTOR1 0
#define USER_THERMISTORTABLE1 {}
#define NUM_TEMPS_USERTHERMISTOR2 0
#define USER_THERMISTORTABLE2 {}
#define GENERIC_THERM_VREF 5
#define GENERIC_THERM_NUM_ENTRIES 33
#define HEATER_PWM_SPEED 0
#define COOLER_PWM_SPEED 0

// ############# Heated bed configuration ########################

#define HAVE_HEATED_BED 1
#define HEATED_BED_PREHEAT_TEMP 55
#define HEATED_BED_MAX_TEMP 120
#define SKIP_M190_IF_WITHIN 3
#define HEATED_BED_SENSOR_TYPE 5
#define HEATED_BED_SENSOR_PIN TEMP_1_PIN
#define HEATED_BED_HEATER_PIN HEATER_1_PIN
#define HEATED_BED_SET_INTERVAL 5000
#define HEATED_BED_HEAT_MANAGER 0
#define HEATED_BED_PID_INTEGRAL_DRIVE_MAX 255
#define HEATED_BED_PID_INTEGRAL_DRIVE_MIN 80
#define HEATED_BED_PID_PGAIN_OR_DEAD_TIME   196
#define HEATED_BED_PID_IGAIN   33
#define HEATED_BED_PID_DGAIN 290
#define HEATED_BED_PID_MAX 255
#define HEATED_BED_DECOUPLE_TEST_PERIOD 300000
#define MIN_EXTRUDER_TEMP 150
#define MAXTEMP 275
#define MIN_DEFECT_TEMPERATURE -10
#define MAX_DEFECT_TEMPERATURE 290
#define MILLISECONDS_PREHEAT_TIME 30000

// ##########################################################################################
// ##                             Laser configuration                                      ##
// ##########################################################################################

/*
If the firmware is in laser mode, it can control a laser output to cut or engrave materials.
Please use this feature only if you know about safety and required protection. Lasers are
dangerous and can hurt or make you blind!!!

The default laser driver only supports laser on and off. Here you control the intensity with
your feedrate. For exchangeable diode lasers this is normally enough. If you need more control
you can set the intensity in a range 0-255 with a custom extension to the driver. See driver.h
and comments on how to extend the functions non invasive with our event system.

If you have a laser - powder system you will like your E override. If moves contain a
increasing extruder position it will laser that move. With this trick you can
use existing fdm slicers to laser the output. Laser width is extrusion width.

Other tools may use M3 and M5 to enable/disable laser. Here G1/G2/G3 moves have laser enabled
and G0 moves have it disables.

In any case, laser only enables while moving. At the end of a move it gets
automatically disabled.
*/

#define SUPPORT_LASER 0
#define LASER_PIN -1
#define LASER_ON_HIGH 1
#define LASER_WARMUP_TIME 0
#define LASER_PWM_MAX 255
#define LASER_WATT 2

// ##                              CNC configuration                                       ##

/*
If the firmware is in CNC mode, it can control a mill with M3/M4/M5. It works
similar to laser mode, but mill keeps enabled during G0 moves and it allows
setting rpm (only with event extension that supports this) and milling direction.
It also can add a delay to wait for spindle to run on full speed.
*/

#define SUPPORT_CNC 0
#define CNC_WAIT_ON_ENABLE 300
#define CNC_WAIT_ON_DISABLE 0
#define CNC_ENABLE_PIN -1
#define CNC_ENABLE_WITH 1
#define CNC_DIRECTION_PIN -1
#define CNC_DIRECTION_CW 1
#define CNC_PWM_MAX 255
#define CNC_RPM_MAX 8000
#define CNC_SAFE_Z 150

#define DEFAULT_PRINTER_MODE 0

// ################ Endstop configuration #####################

#define MULTI_ZENDSTOP_HOMING 0
#define ENDSTOP_PULLUP_X_MIN true
#define ENDSTOP_X_MIN_INVERTING true
#define MIN_HARDWARE_ENDSTOP_X true
#define ENDSTOP_PULLUP_Y_MIN true
#define ENDSTOP_Y_MIN_INVERTING true
#define MIN_HARDWARE_ENDSTOP_Y true
#define ENDSTOP_PULLUP_Z_MIN true
#define ENDSTOP_Z_MIN_INVERTING false
#define MIN_HARDWARE_ENDSTOP_Z false
#define ENDSTOP_PULLUP_Z2_MINMAX true
#define ENDSTOP_Z2_MINMAX_INVERTING false
#define MINMAX_HARDWARE_ENDSTOP_Z2 false
#define ENDSTOP_PULLUP_X_MAX true
#define ENDSTOP_X_MAX_INVERTING false
#define MAX_HARDWARE_ENDSTOP_X false
#define ENDSTOP_PULLUP_Y_MAX true
#define ENDSTOP_Y_MAX_INVERTING false
#define MAX_HARDWARE_ENDSTOP_Y false
#define ENDSTOP_PULLUP_Z_MAX true
#define ENDSTOP_Z_MAX_INVERTING true
#define MAX_HARDWARE_ENDSTOP_Z true
#define ENDSTOP_PULLUP_X2_MIN true
#define ENDSTOP_PULLUP_Y2_MIN true
#define ENDSTOP_PULLUP_Z2_MINMAX true
#define ENDSTOP_PULLUP_X2_MAX true
#define ENDSTOP_PULLUP_Y2_MAX true
#define ENDSTOP_X2_MIN_INVERTING false
#define ENDSTOP_Y2_MIN_INVERTING false
#define ENDSTOP_X2_MAX_INVERTING false
#define ENDSTOP_Y2_MAX_INVERTING false
#define MIN_HARDWARE_ENDSTOP_X2 false
#define MIN_HARDWARE_ENDSTOP_Y2 false
#define MAX_HARDWARE_ENDSTOP_X2 false
#define MAX_HARDWARE_ENDSTOP_Y2 false
#define X2_MIN_PIN -1
#define X2_MAX_PIN -1
#define Y2_MIN_PIN -1
#define Y2_MAX_PIN -1
#define Z2_MINMAX_PIN -1



#define max_software_endstop_r true

#define min_software_endstop_x false
#define min_software_endstop_y false
#define min_software_endstop_z false
#define max_software_endstop_x true
#define max_software_endstop_y true
#define max_software_endstop_z true
#define DOOR_PIN -1
#define DOOR_PULLUP 1
#define DOOR_INVERTING 0
#define ENDSTOP_X_BACK_MOVE 5
#define ENDSTOP_Y_BACK_MOVE 5
#define ENDSTOP_Z_BACK_MOVE 2
#define ENDSTOP_X_RETEST_REDUCTION_FACTOR 3
#define ENDSTOP_Y_RETEST_REDUCTION_FACTOR 3
#define ENDSTOP_Z_RETEST_REDUCTION_FACTOR 3
#define ENDSTOP_X_BACK_ON_HOME 7
#define ENDSTOP_Y_BACK_ON_HOME 15
#define ENDSTOP_Z_BACK_ON_HOME 0
#define ALWAYS_CHECK_ENDSTOPS 1
#define MOVE_X_WHEN_HOMED 0
#define MOVE_Y_WHEN_HOMED 0
#define MOVE_Z_WHEN_HOMED 0

// ################# XYZ movements ###################

#define X_ENABLE_ON 0
#define Y_ENABLE_ON 0
#define Z_ENABLE_ON 0
#define DISABLE_X 0
#define DISABLE_Y 0
#define DISABLE_Z 0
#define DISABLE_E 0
#define INVERT_X_DIR 0
#define INVERT_X2_DIR 0
#define INVERT_Y_DIR 0
#define INVERT_Y2_DIR 0
#define INVERT_Z_DIR 0
#define INVERT_Z2_DIR 0
#define INVERT_Z3_DIR 0
#define INVERT_Z4_DIR 0
#define X_HOME_DIR -1
#define Y_HOME_DIR -1
#define Z_HOME_DIR 1
#define X_MAX_LENGTH 142
#define Y_MAX_LENGTH 110
#define Z_MAX_LENGTH 125.8
#define X_MIN_POS 0
#define Y_MIN_POS 0
#define Z_MIN_POS 0
#define PARK_POSITION_X 0
#define PARK_POSITION_Y 0
#define PARK_POSITION_Z_RAISE 10


#define DISTORTION_CORRECTION 0
#define DISTORTION_CORRECTION_POINTS 5
#define DISTORTION_LIMIT_TO 2
#define DISTORTION_CORRECTION_R 100
#define DISTORTION_PERMANENT 1
#define DISTORTION_UPDATE_FREQUENCY 15
#define DISTORTION_START_DEGRADE 0.5
#define DISTORTION_END_HEIGHT 1
#define DISTORTION_EXTRAPOLATE_CORNERS 0
#define DISTORTION_XMIN 10
#define DISTORTION_YMIN 10
#define DISTORTION_XMAX 190
#define DISTORTION_YMAX 190

// ##########################################################################################
// ##                           Movement settings                                          ##
// ##########################################################################################

#define FEATURE_BABYSTEPPING 1
#define BABYSTEP_MULTIPLICATOR 1

#define DELTA_SEGMENTS_PER_SECOND_PRINT 180 // Move accurate setting for print moves
#define DELTA_SEGMENTS_PER_SECOND_MOVE 70 // Less accurate setting for other moves
#define EXACT_DELTA_MOVES 1

// Delta settings
#define DELTA_HOME_ON_POWER 0

#define DELTASEGMENTS_PER_PRINTLINE 20
#define STEPPER_INACTIVE_TIME 360L
#define MAX_INACTIVE_TIME 0L
#define MAX_FEEDRATE_X 50
#define MAX_FEEDRATE_Y 50
#define MAX_FEEDRATE_Z 5.83
#define HOMING_FEEDRATE_X 25
#define HOMING_FEEDRATE_Y 25
#define HOMING_FEEDRATE_Z 5.83
#define HOMING_ORDER HOME_ORDER_ZXY
#define ZHOME_PRE_RAISE 0
#define ZHOME_PRE_RAISE_DISTANCE 10
#define RAISE_Z_ON_TOOLCHANGE 0
#define ZHOME_MIN_TEMPERATURE 0
#define ZHOME_HEAT_ALL 1
#define ZHOME_HEAT_HEIGHT 20
#define ZHOME_X_POS 999999
#define ZHOME_Y_POS 999999
#define ENABLE_BACKLASH_COMPENSATION 0
#define X_BACKLASH 0
#define Y_BACKLASH 0
#define Z_BACKLASH 0
#define RAMP_ACCELERATION 1
#define STEPPER_HIGH_DELAY 0
#define DIRECTION_DELAY 0
#define STEP_DOUBLER_FREQUENCY 12000
#define ALLOW_QUADSTEPPING 1
#define DOUBLE_STEP_DELAY 0 // time in microseconds
#define MAX_ACCELERATION_UNITS_PER_SQ_SECOND_X 1000
#define MAX_ACCELERATION_UNITS_PER_SQ_SECOND_Y 1000
#define MAX_ACCELERATION_UNITS_PER_SQ_SECOND_Z 50
#define MAX_TRAVEL_ACCELERATION_UNITS_PER_SQ_SECOND_X 500
#define MAX_TRAVEL_ACCELERATION_UNITS_PER_SQ_SECOND_Y 500
#define MAX_TRAVEL_ACCELERATION_UNITS_PER_SQ_SECOND_Z 50
#define INTERPOLATE_ACCELERATION_WITH_Z 0
#define ACCELERATION_FACTOR_TOP 100
#define MAX_JERK 20
#define MAX_ZJERK 0.3
#define PRINTLINE_CACHE_SIZE 16
#define MOVE_CACHE_LOW 10
#define LOW_TICKS_PER_MOVE 250000
#define EXTRUDER_SWITCH_XY_SPEED 100
#define DUAL_X_AXIS 0
#define DUAL_X_RESOLUTION 0
#define X2AXIS_STEPS_PER_MM 100
#define FEATURE_TWO_XSTEPPER 0
#define X2_STEP_PIN   ORIG_E1_STEP_PIN
#define X2_DIR_PIN    ORIG_E1_DIR_PIN
#define X2_ENABLE_PIN ORIG_E1_ENABLE_PIN
#define FEATURE_TWO_YSTEPPER 0
#define Y2_STEP_PIN   ORIG_E1_STEP_PIN
#define Y2_DIR_PIN    ORIG_E1_DIR_PIN
#define Y2_ENABLE_PIN ORIG_E1_ENABLE_PIN
#define FEATURE_TWO_ZSTEPPER 0
#define Z2_STEP_PIN   ORIG_E1_STEP_PIN
#define Z2_DIR_PIN    ORIG_E1_DIR_PIN
#define Z2_ENABLE_PIN ORIG_E1_ENABLE_PIN
#define FEATURE_THREE_ZSTEPPER 0
#define Z3_STEP_PIN   ORIG_E2_STEP_PIN
#define Z3_DIR_PIN    ORIG_E2_DIR_PIN
#define Z3_ENABLE_PIN ORIG_E2_ENABLE_PIN
#define FEATURE_FOUR_ZSTEPPER 0
#define Z4_STEP_PIN   ORIG_E3_STEP_PIN
#define Z4_DIR_PIN    ORIG_E3_DIR_PIN
#define Z4_ENABLE_PIN ORIG_E3_ENABLE_PIN
#define FEATURE_DITTO_PRINTING 0
#define USE_ADVANCE 0
#define ENABLE_QUADRATIC_ADVANCE 0


// ################# Misc. settings ##################

#define BAUDRATE 115200
#define ENABLE_POWER_ON_STARTUP 1
#define POWER_INVERTING 0
#define AUTOMATIC_POWERUP 0
#define KILL_METHOD 1
#define ACK_WITH_LINENUMBER 1
#define KEEP_ALIVE_INTERVAL 2000
#define WAITING_IDENTIFIER "wait"
#define ECHO_ON_EXECUTE 1
#define EEPROM_MODE 2
#undef PS_ON_PIN
#define PS_ON_PIN -1
#define JSON_OUTPUT 0

/* ======== Servos =======
Control the servos with
M340 P<servoId> S<pulseInUS>   / ServoID = 0..3  pulseInUs = 500..2500
Servos are controlled by a pulse width normally between 500 and 2500 with 1500ms in center position. 0 turns servo off.
WARNING: Servos can draw a considerable amount of current. Make sure your system can handle this or you may risk your hardware!
*/
#define FEATURE_SERVO 0
#define SERVO0_PIN 11
#define SERVO1_PIN -1
#define SERVO2_PIN -1
#define SERVO3_PIN -1
#define SERVO0_NEUTRAL_POS  -1
#define SERVO1_NEUTRAL_POS  -1
#define SERVO2_NEUTRAL_POS  -1
#define SERVO3_NEUTRAL_POS  -1
#define UI_SERVO_CONTROL 0
#define FAN_KICKSTART_TIME  200
#define MAX_FAN_PWM 255

#define FEATURE_WATCHDOG 1

// #################### Z-Probing #####################

#define Z_PROBE_Z_OFFSET 0
#define Z_PROBE_Z_OFFSET_MODE 0
#define UI_BED_COATING 1
#define FEATURE_Z_PROBE 0
#define EXTRUDER_IS_Z_PROBE 0
#define Z_PROBE_DISABLE_HEATERS 0
#define Z_PROBE_BED_DISTANCE 10
#define Z_PROBE_PIN -1
#define Z_PROBE_PULLUP 0
#define Z_PROBE_ON_HIGH 0
#define Z_PROBE_X_OFFSET 0
#define Z_PROBE_Y_OFFSET 0
#define Z_PROBE_WAIT_BEFORE_TEST 0
#define Z_PROBE_SPEED 2
#define Z_PROBE_XY_SPEED 150
#define Z_PROBE_SWITCHING_DISTANCE 1
#define Z_PROBE_REPETITIONS 1
#define Z_PROBE_USE_MEDIAN 0
#define Z_PROBE_HEIGHT 40
#define Z_PROBE_DELAY 0
#define Z_PROBE_START_SCRIPT ""
#define Z_PROBE_FINISHED_SCRIPT ""
#define Z_PROBE_RUN_AFTER_EVERY_PROBE ""
#define Z_PROBE_REQUIRES_HEATING 0
#define Z_PROBE_MIN_TEMPERATURE 150
#define FEATURE_AUTOLEVEL 0
#define FEATURE_SOFTWARE_LEVELING 0
#define Z_PROBE_X1 20
#define Z_PROBE_Y1 20
#define Z_PROBE_X2 160
#define Z_PROBE_Y2 20
#define Z_PROBE_X3 20
#define Z_PROBE_Y3 160
#define BED_LEVELING_METHOD 0
#define BED_CORRECTION_METHOD 0
#define BED_LEVELING_GRID_SIZE 5
#define BED_LEVELING_REPETITIONS 5
#define BED_MOTOR_1_X 0
#define BED_MOTOR_1_Y 0
#define BED_MOTOR_2_X 200
#define BED_MOTOR_2_Y 0
#define BED_MOTOR_3_X 100
#define BED_MOTOR_3_Y 200
#define BENDING_CORRECTION_A 0
#define BENDING_CORRECTION_B 0
#define BENDING_CORRECTION_C 0
#define FEATURE_AXISCOMP 0
#define AXISCOMP_TANXY 0
#define AXISCOMP_TANYZ 0
#define AXISCOMP_TANXZ 0

#ifndef SDSUPPORT  // Some boards have sd support on board. These define the values already in pins.h
#define SDSUPPORT 0
#undef SDCARDDETECT
#define SDCARDDETECT -1
#undef SDCARDDETECTINVERTED
#define SDCARDDETECTINVERTED 0
#endif
#define SD_EXTENDED_DIR 1 /** Show extended directory including file length. Don't use this with Pronterface! */
#define SD_RUN_ON_STOP ""
#define SD_STOP_HEATER_AND_MOTORS_ON_STOP 1
#define ARC_SUPPORT 1
#define FEATURE_MEMORY_POSITION 1
#define FEATURE_CHECKSUM_FORCED 0
#define FEATURE_FAN_CONTROL 1
#define FEATURE_FAN2_CONTROL 0
#define FEATURE_CONTROLLER 0
#define ADC_KEYPAD_PIN -1
#define LANGUAGE_EN_ACTIVE 1
#define LANGUAGE_DE_ACTIVE 1
#define LANGUAGE_NL_ACTIVE 0
#define LANGUAGE_PT_ACTIVE 1
#define LANGUAGE_IT_ACTIVE 1
#define LANGUAGE_ES_ACTIVE 1
#define LANGUAGE_FI_ACTIVE 0
#define LANGUAGE_SE_ACTIVE 0
#define LANGUAGE_FR_ACTIVE 1
#define LANGUAGE_CZ_ACTIVE 0
#define LANGUAGE_PL_ACTIVE 1
#define LANGUAGE_TR_ACTIVE 1
#define UI_PRINTER_NAME "RepRap"
#define UI_PRINTER_COMPANY "Home made"
#define UI_PAGES_DURATION 4000
#define UI_SPEEDDEPENDENT_POSITIONING 0
#define UI_DISABLE_AUTO_PAGESWITCH 1
#define UI_AUTORETURN_TO_MENU_AFTER 30000
#define FEATURE_UI_KEYS 0
#define UI_ENCODER_SPEED 1
#define UI_REVERSE_ENCODER 0
#define UI_KEY_BOUNCETIME 10
#define UI_KEY_FIRST_REPEAT 500
#define UI_KEY_REDUCE_REPEAT 50
#define UI_KEY_MIN_REPEAT 50
#define FEATURE_BEEPER 0
#define CASE_LIGHTS_PIN -1
#define CASE_LIGHT_DEFAULT_ON 1
#define UI_START_SCREEN_DELAY 1000
#define UI_DYNAMIC_ENCODER_SPEED 1
        /**
Beeper sound definitions for short beeps during key actions
and longer beeps for important actions.
Parameter is delay in microseconds and the secons is the number of repetitions.
Values must be in range 1..255
*/
#define BEEPER_SHORT_SEQUENCE 2,2
#define BEEPER_LONG_SEQUENCE 8,8
#define UI_SET_MIN_HEATED_BED_TEMP  30
#define UI_SET_MAX_HEATED_BED_TEMP 120
#define UI_SET_MIN_EXTRUDER_TEMP   170
#define UI_SET_MAX_EXTRUDER_TEMP   260
#define UI_SET_EXTRUDER_FEEDRATE 2
#define UI_SET_EXTRUDER_RETRACT_DISTANCE 3


#define NUM_MOTOR_DRIVERS 0



#endif
