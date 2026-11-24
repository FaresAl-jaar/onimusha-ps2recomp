#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003ABDF0
// Address: 0x3abdf0 - 0x3abfc4
void sub_003ABDF0_0x3abdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ABDF0_0x3abdf0");
#endif

    switch (ctx->pc) {
        case 0x3abf38u: goto label_3abf38;
        case 0x3abf70u: goto label_3abf70;
        default: break;
    }

    ctx->pc = 0x3abdf0u;

    // 0x3abdf0: 0x52e3c  dsll32      $a1, $a1, 24
    ctx->pc = 0x3abdf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 24));
    // 0x3abdf4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3abdf4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3abdf8: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x3abdf8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x3abdfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3abdfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3abe00: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3abe00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3abe04: 0x80890007  lb          $t1, 0x7($a0)
    ctx->pc = 0x3abe04u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x3abe08: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3abe08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3abe0c: 0x34100  sll         $t0, $v1, 4
    ctx->pc = 0x3abe0cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3abe10: 0x3c050093  lui         $a1, 0x93
    ctx->pc = 0x3abe10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)147 << 16));
    // 0x3abe14: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x3abe14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x3abe18: 0x24a59a70  addiu       $a1, $a1, -0x6590
    ctx->pc = 0x3abe18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941296));
    // 0x3abe1c: 0x24639a71  addiu       $v1, $v1, -0x658F
    ctx->pc = 0x3abe1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941297));
    // 0x3abe20: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x3abe20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x3abe24: 0x685021  addu        $t2, $v1, $t0
    ctx->pc = 0x3abe24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x3abe28: 0x90ab0000  lbu         $t3, 0x0($a1)
    ctx->pc = 0x3abe28u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3abe2c: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x3abe2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x3abe30: 0x24639a72  addiu       $v1, $v1, -0x658E
    ctx->pc = 0x3abe30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941298));
    // 0x3abe34: 0x683821  addu        $a3, $v1, $t0
    ctx->pc = 0x3abe34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x3abe38: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x3abe38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x3abe3c: 0x24639a74  addiu       $v1, $v1, -0x658C
    ctx->pc = 0x3abe3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941300));
    // 0x3abe40: 0x683021  addu        $a2, $v1, $t0
    ctx->pc = 0x3abe40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x3abe44: 0x91900  sll         $v1, $t1, 4
    ctx->pc = 0x3abe44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x3abe48: 0x694821  addu        $t1, $v1, $t1
    ctx->pc = 0x3abe48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x3abe4c: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x3abe4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x3abe50: 0x24639a78  addiu       $v1, $v1, -0x6588
    ctx->pc = 0x3abe50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941304));
    // 0x3abe54: 0x682821  addu        $a1, $v1, $t0
    ctx->pc = 0x3abe54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x3abe58: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x3abe58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x3abe5c: 0x694823  subu        $t1, $v1, $t1
    ctx->pc = 0x3abe5cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x3abe60: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x3abe60u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x3abe64: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x3abe64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x3abe68: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x3abe68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x3abe6c: 0x24639a7c  addiu       $v1, $v1, -0x6584
    ctx->pc = 0x3abe6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941308));
    // 0x3abe70: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x3abe70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x3abe74: 0x3c090093  lui         $t1, 0x93
    ctx->pc = 0x3abe74u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)147 << 16));
    // 0x3abe78: 0xa08b0190  sb          $t3, 0x190($a0)
    ctx->pc = 0x3abe78u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 400), (uint8_t)GPR_U32(ctx, 11));
    // 0x3abe7c: 0x25299a80  addiu       $t1, $t1, -0x6580
    ctx->pc = 0x3abe7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294941312));
    // 0x3abe80: 0x914b0000  lbu         $t3, 0x0($t2)
    ctx->pc = 0x3abe80u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3abe84: 0x128c821  addu        $t9, $t1, $t0
    ctx->pc = 0x3abe84u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x3abe88: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x3abe88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x3abe8c: 0x24890190  addiu       $t1, $a0, 0x190
    ctx->pc = 0x3abe8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 400));
    // 0x3abe90: 0xa08b0191  sb          $t3, 0x191($a0)
    ctx->pc = 0x3abe90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 401), (uint8_t)GPR_U32(ctx, 11));
    // 0x3abe94: 0x3c0a0093  lui         $t2, 0x93
    ctx->pc = 0x3abe94u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)147 << 16));
    // 0x3abe98: 0x84f00000  lh          $s0, 0x0($a3)
    ctx->pc = 0x3abe98u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3abe9c: 0x254a9a81  addiu       $t2, $t2, -0x657F
    ctx->pc = 0x3abe9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294941313));
    // 0x3abea0: 0x148c021  addu        $t8, $t2, $t0
    ctx->pc = 0x3abea0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x3abea4: 0x3c0a0093  lui         $t2, 0x93
    ctx->pc = 0x3abea4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)147 << 16));
    // 0x3abea8: 0x254a9a82  addiu       $t2, $t2, -0x657E
    ctx->pc = 0x3abea8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294941314));
    // 0x3abeac: 0x1487821  addu        $t7, $t2, $t0
    ctx->pc = 0x3abeacu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x3abeb0: 0x3c0a0093  lui         $t2, 0x93
    ctx->pc = 0x3abeb0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)147 << 16));
    // 0x3abeb4: 0xa4900192  sh          $s0, 0x192($a0)
    ctx->pc = 0x3abeb4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 402), (uint16_t)GPR_U32(ctx, 16));
    // 0x3abeb8: 0x254a9a83  addiu       $t2, $t2, -0x657D
    ctx->pc = 0x3abeb8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294941315));
    // 0x3abebc: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x3abebcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3abec0: 0x1487021  addu        $t6, $t2, $t0
    ctx->pc = 0x3abec0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x3abec4: 0x3c0a0093  lui         $t2, 0x93
    ctx->pc = 0x3abec4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)147 << 16));
    // 0x3abec8: 0x2407000b  addiu       $a3, $zero, 0xB
    ctx->pc = 0x3abec8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3abecc: 0x254a9a84  addiu       $t2, $t2, -0x657C
    ctx->pc = 0x3abeccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294941316));
    // 0x3abed0: 0x1486821  addu        $t5, $t2, $t0
    ctx->pc = 0x3abed0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x3abed4: 0x3c0a0093  lui         $t2, 0x93
    ctx->pc = 0x3abed4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)147 << 16));
    // 0x3abed8: 0x254a9a85  addiu       $t2, $t2, -0x657B
    ctx->pc = 0x3abed8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294941317));
    // 0x3abedc: 0xac860194  sw          $a2, 0x194($a0)
    ctx->pc = 0x3abedcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 404), GPR_U32(ctx, 6));
    // 0x3abee0: 0x1486021  addu        $t4, $t2, $t0
    ctx->pc = 0x3abee0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x3abee4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x3abee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3abee8: 0x3c0a0093  lui         $t2, 0x93
    ctx->pc = 0x3abee8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)147 << 16));
    // 0x3abeec: 0x254a9a86  addiu       $t2, $t2, -0x657A
    ctx->pc = 0x3abeecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294941318));
    // 0x3abef0: 0x1485821  addu        $t3, $t2, $t0
    ctx->pc = 0x3abef0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x3abef4: 0x252a0016  addiu       $t2, $t1, 0x16
    ctx->pc = 0x3abef4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 22));
    // 0x3abef8: 0xac850198  sw          $a1, 0x198($a0)
    ctx->pc = 0x3abef8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 408), GPR_U32(ctx, 5));
    // 0x3abefc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3abefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3abf00: 0xac83019c  sw          $v1, 0x19C($a0)
    ctx->pc = 0x3abf00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 412), GPR_U32(ctx, 3));
    // 0x3abf04: 0x93230000  lbu         $v1, 0x0($t9)
    ctx->pc = 0x3abf04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x3abf08: 0xa08301a0  sb          $v1, 0x1A0($a0)
    ctx->pc = 0x3abf08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 416), (uint8_t)GPR_U32(ctx, 3));
    // 0x3abf0c: 0x93030000  lbu         $v1, 0x0($t8)
    ctx->pc = 0x3abf0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3abf10: 0xa08301a1  sb          $v1, 0x1A1($a0)
    ctx->pc = 0x3abf10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 417), (uint8_t)GPR_U32(ctx, 3));
    // 0x3abf14: 0x91e30000  lbu         $v1, 0x0($t7)
    ctx->pc = 0x3abf14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x3abf18: 0xa08301a2  sb          $v1, 0x1A2($a0)
    ctx->pc = 0x3abf18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 418), (uint8_t)GPR_U32(ctx, 3));
    // 0x3abf1c: 0x91c30000  lbu         $v1, 0x0($t6)
    ctx->pc = 0x3abf1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x3abf20: 0xa08301a3  sb          $v1, 0x1A3($a0)
    ctx->pc = 0x3abf20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 419), (uint8_t)GPR_U32(ctx, 3));
    // 0x3abf24: 0x91a30000  lbu         $v1, 0x0($t5)
    ctx->pc = 0x3abf24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x3abf28: 0xa08301a4  sb          $v1, 0x1A4($a0)
    ctx->pc = 0x3abf28u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 420), (uint8_t)GPR_U32(ctx, 3));
    // 0x3abf2c: 0x91830000  lbu         $v1, 0x0($t4)
    ctx->pc = 0x3abf2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3abf30: 0xa08301a5  sb          $v1, 0x1A5($a0)
    ctx->pc = 0x3abf30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 421), (uint8_t)GPR_U32(ctx, 3));
    // 0x3abf34: 0x0  nop
    ctx->pc = 0x3abf34u;
    // NOP
label_3abf38:
    // 0x3abf38: 0x85640000  lh          $a0, 0x0($t3)
    ctx->pc = 0x3abf38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x3abf3c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3abf3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3abf40: 0x85630002  lh          $v1, 0x2($t3)
    ctx->pc = 0x3abf40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x3abf44: 0xa5440000  sh          $a0, 0x0($t2)
    ctx->pc = 0x3abf44u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x3abf48: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x3abf48u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x3abf4c: 0xa5430002  sh          $v1, 0x2($t2)
    ctx->pc = 0x3abf4cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x3abf50: 0x1ce0fff9  bgtz        $a3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3ABF50u;
    {
        const bool branch_taken_0x3abf50 = (GPR_S64(ctx, 7) > 0);
        ctx->pc = 0x3ABF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABF50u;
        // 0x3abf54: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abf50) {
            ctx->pc = 0x3ABF38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3abf38;
        }
    }
    ctx->pc = 0x3ABF58u;
    // 0x3abf58: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x3abf58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x3abf5c: 0x25260042  addiu       $a2, $t1, 0x42
    ctx->pc = 0x3abf5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 66));
    // 0x3abf60: 0x24639ab2  addiu       $v1, $v1, -0x654E
    ctx->pc = 0x3abf60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941362));
    // 0x3abf64: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3abf64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3abf68: 0x683821  addu        $a3, $v1, $t0
    ctx->pc = 0x3abf68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x3abf6c: 0x0  nop
    ctx->pc = 0x3abf6cu;
    // NOP
label_3abf70:
    // 0x3abf70: 0x80e40000  lb          $a0, 0x0($a3)
    ctx->pc = 0x3abf70u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3abf74: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3abf74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3abf78: 0x80e30001  lb          $v1, 0x1($a3)
    ctx->pc = 0x3abf78u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x3abf7c: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x3abf7cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3abf80: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x3abf80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x3abf84: 0xa0c30001  sb          $v1, 0x1($a2)
    ctx->pc = 0x3abf84u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3abf88: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3ABF88u;
    {
        const bool branch_taken_0x3abf88 = (GPR_S64(ctx, 5) > 0);
        ctx->pc = 0x3ABF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABF88u;
        // 0x3abf8c: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abf88) {
            ctx->pc = 0x3ABF70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3abf70;
        }
    }
    ctx->pc = 0x3ABF90u;
    // 0x3abf90: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x3abf90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x3abf94: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x3abf94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x3abf98: 0x24849ab8  addiu       $a0, $a0, -0x6548
    ctx->pc = 0x3abf98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941368));
    // 0x3abf9c: 0x24639abc  addiu       $v1, $v1, -0x6544
    ctx->pc = 0x3abf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941372));
    // 0x3abfa0: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x3abfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x3abfa4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x3abfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x3abfa8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3abfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3abfac: 0xad240048  sw          $a0, 0x48($t1)
    ctx->pc = 0x3abfacu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 72), GPR_U32(ctx, 4));
    // 0x3abfb0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3abfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3abfb4: 0xad23004c  sw          $v1, 0x4C($t1)
    ctx->pc = 0x3abfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 76), GPR_U32(ctx, 3));
    // 0x3abfb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3abfb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3abfbc: 0x3e00008  jr          $ra
    ctx->pc = 0x3ABFBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ABFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABFBCu;
        // 0x3abfc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ABFBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ABFC4u;
}
