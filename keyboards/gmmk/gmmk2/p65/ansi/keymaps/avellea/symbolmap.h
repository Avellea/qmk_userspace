/*
  Unicode map for special characters I use.
*/
enum unicode_names {
  JP_YEN,
  JP_CMA,
  JP_STP,
  JP_OBR,
  JP_CBR,
};


const uint32_t PROGMEM unicode_map[] = {
  [JP_YEN] = 0x00A5,  // ¥
  [JP_CMA] = 0x3001,  // 、
  [JP_STP] = 0x3002,  // 。
  [JP_OBR] = 0x3010,  //【
  [JP_CBR] = 0x3011,  // 】
};