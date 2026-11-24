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

// Function: sub_001291A0
// Address: 0x1291a0 - 0x1293e0
void sub_001291A0_0x1291a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001291A0_0x1291a0");
#endif

    switch (ctx->pc) {
        case 0x1291ecu: goto label_1291ec;
        case 0x129220u: goto label_129220;
        case 0x129224u: goto label_129224;
        case 0x1292a4u: goto label_1292a4;
        case 0x1292b8u: goto label_1292b8;
        case 0x1292c8u: goto label_1292c8;
        case 0x1292e0u: goto label_1292e0;
        case 0x129314u: goto label_129314;
        case 0x129328u: goto label_129328;
        case 0x129334u: goto label_129334;
        case 0x129360u: goto label_129360;
        default: break;
    }

    ctx->pc = 0x1291a0u;

    // 0x1291a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1291a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1291a4: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x1291a4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x1291a8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1291a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1291ac: 0x25ed3a90  addiu       $t5, $t7, 0x3A90
    ctx->pc = 0x1291acu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), 14992));
    // 0x1291b0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1291b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1291b4: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x1291b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x1291b8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1291b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1291bc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1291bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1291c0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1291c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1291c4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1291c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1291c8: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1291c8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1291cc: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1291ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1291d0: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1291d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1291d4: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1291d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1291d8: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x1291d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x1291dc: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1291dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1291e0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1291e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1291e4: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x1291e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x1291e8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1291e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1291ec:
    // 0x1291ec: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1291ecu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1291f0: 0x20d7021  addu        $t6, $s0, $t5
    ctx->pc = 0x1291f0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 13)));
    // 0x1291f4: 0x91cf0000  lbu         $t7, 0x0($t6)
    ctx->pc = 0x1291f4u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1291f8: 0x31ef0008  andi        $t7, $t7, 0x8
    ctx->pc = 0x1291f8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)8);
    // 0x1291fc: 0x0  nop
    ctx->pc = 0x1291fcu;
    // NOP
    // 0x129200: 0x15e0fffa  bnez        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x129200u;
    {
        const bool branch_taken_0x129200 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x129204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129200u;
        // 0x129204: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129200) {
            ctx->pc = 0x1291ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1291ec;
        }
    }
    ctx->pc = 0x129208u;
    // 0x129208: 0x240f002d  addiu       $t7, $zero, 0x2D
    ctx->pc = 0x129208u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x12920c: 0x160f0070  bne         $s0, $t7, . + 4 + (0x70 << 2)
    ctx->pc = 0x12920Cu;
    {
        const bool branch_taken_0x12920c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 15));
        ctx->pc = 0x129210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12920Cu;
        // 0x129210: 0x240f002b  addiu       $t7, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12920c) {
            ctx->pc = 0x1293D0u;
            goto label_1293d0;
        }
    }
    ctx->pc = 0x129214u;
    // 0x129214: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x129214u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x129218: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x129218u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12921c: 0xafae0008  sw          $t6, 0x8($sp)
    ctx->pc = 0x12921cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 14));
label_129220:
    // 0x129220: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x129220u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_129224:
    // 0x129224: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x129224u;
    {
        const bool branch_taken_0x129224 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x129228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129224u;
        // 0x129228: 0x240f0010  addiu       $t7, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129224) {
            ctx->pc = 0x129234u;
            goto label_129234;
        }
    }
    ctx->pc = 0x12922Cu;
    // 0x12922c: 0x166f000c  bne         $s3, $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x12922Cu;
    {
        const bool branch_taken_0x12922c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 15));
        if (branch_taken_0x12922c) {
            ctx->pc = 0x129260u;
            goto label_129260;
        }
    }
    ctx->pc = 0x129234u;
label_129234:
    // 0x129234: 0x240f0030  addiu       $t7, $zero, 0x30
    ctx->pc = 0x129234u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x129238: 0x160f0009  bne         $s0, $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x129238u;
    {
        const bool branch_taken_0x129238 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 15));
        ctx->pc = 0x12923Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129238u;
        // 0x12923c: 0x240f0078  addiu       $t7, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129238) {
            ctx->pc = 0x129260u;
            goto label_129260;
        }
    }
    ctx->pc = 0x129240u;
    // 0x129240: 0x822e0000  lb          $t6, 0x0($s1)
    ctx->pc = 0x129240u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x129244: 0x11cf0003  beq         $t6, $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x129244u;
    {
        const bool branch_taken_0x129244 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x129248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129244u;
        // 0x129248: 0x240f0058  addiu       $t7, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129244) {
            ctx->pc = 0x129254u;
            goto label_129254;
        }
    }
    ctx->pc = 0x12924Cu;
    // 0x12924c: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x12924Cu;
    {
        const bool branch_taken_0x12924c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x12924c) {
            ctx->pc = 0x129260u;
            goto label_129260;
        }
    }
    ctx->pc = 0x129254u;
label_129254:
    // 0x129254: 0x82300001  lb          $s0, 0x1($s1)
    ctx->pc = 0x129254u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x129258: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x129258u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12925c: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x12925cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_129260:
    // 0x129260: 0x16600006  bnez        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x129260u;
    {
        const bool branch_taken_0x129260 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x129264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129260u;
        // 0x129264: 0x8fae0008  lw          $t6, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129260) {
            ctx->pc = 0x12927Cu;
            goto label_12927c;
        }
    }
    ctx->pc = 0x129268u;
    // 0x129268: 0x24130008  addiu       $s3, $zero, 0x8
    ctx->pc = 0x129268u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x12926c: 0x3a0e0030  xori        $t6, $s0, 0x30
    ctx->pc = 0x12926cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)48);
    // 0x129270: 0x240f000a  addiu       $t7, $zero, 0xA
    ctx->pc = 0x129270u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x129274: 0x1ee980b  movn        $s3, $t7, $t6
    ctx->pc = 0x129274u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 15));
    // 0x129278: 0x8fae0008  lw          $t6, 0x8($sp)
    ctx->pc = 0x129278u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_12927c:
    // 0x12927c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x12927cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x129280: 0x240ffffe  addiu       $t7, $zero, -0x2
    ctx->pc = 0x129280u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x129284: 0x1297fc  dsll32      $s2, $s2, 31
    ctx->pc = 0x129284u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 31));
    // 0x129288: 0xf787a  dsrl        $t7, $t7, 1
    ctx->pc = 0x129288u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 1);
    // 0x12928c: 0x260a82d  daddu       $s5, $s3, $zero
    ctx->pc = 0x12928cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129290: 0x1ee900a  movz        $s2, $t7, $t6
    ctx->pc = 0x129290u;
    if (GPR_U64(ctx, 14) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 15));
    // 0x129294: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x129294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129298: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x129298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12929c: 0xc04b742  jal         func_12DD08
    ctx->pc = 0x12929Cu;
    SET_GPR_U32(ctx, 31, 0x1292A4u);
    ctx->pc = 0x1292A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12929Cu;
    // 0x1292a0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DD08u, 0x12929Cu, 0x1292A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1292A4u;
label_1292a4:
    // 0x1292a4: 0x2f03c  dsll32      $fp, $v0, 0
    ctx->pc = 0x1292a4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1292a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1292a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1292ac: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1292acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1292b0: 0xc04b590  jal         func_12D640
    ctx->pc = 0x1292B0u;
    SET_GPR_U32(ctx, 31, 0x1292B8u);
    ctx->pc = 0x1292B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1292B0u;
    // 0x1292b4: 0x1ef03f  dsra32      $fp, $fp, 0 (Delay Slot)
    SET_GPR_S64(ctx, 30, GPR_S64(ctx, 30) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D640u, 0x1292B0u, 0x1292B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1292B8u;
label_1292b8:
    // 0x1292b8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1292b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1292bc: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x1292bcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x1292c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1292c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1292c4: 0x25f63a90  addiu       $s6, $t7, 0x3A90
    ctx->pc = 0x1292c4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 15), 14992));
label_1292c8:
    // 0x1292c8: 0x2167821  addu        $t7, $s0, $s6
    ctx->pc = 0x1292c8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x1292cc: 0x91ed0000  lbu         $t5, 0x0($t7)
    ctx->pc = 0x1292ccu;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1292d0: 0x31ae0004  andi        $t6, $t5, 0x4
    ctx->pc = 0x1292d0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)4);
    // 0x1292d4: 0x11c00037  beqz        $t6, . + 4 + (0x37 << 2)
    ctx->pc = 0x1292D4u;
    {
        const bool branch_taken_0x1292d4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1292D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1292D4u;
        // 0x1292d8: 0x31af0003  andi        $t7, $t5, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1292d4) {
            ctx->pc = 0x1293B4u;
            goto label_1293b4;
        }
    }
    ctx->pc = 0x1292DCu;
    // 0x1292dc: 0x2610ffd0  addiu       $s0, $s0, -0x30
    ctx->pc = 0x1292dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967248));
label_1292e0:
    // 0x1292e0: 0x213782a  slt         $t7, $s0, $s3
    ctx->pc = 0x1292e0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1292e4: 0x11e00013  beqz        $t7, . + 4 + (0x13 << 2)
    ctx->pc = 0x1292E4u;
    {
        const bool branch_taken_0x1292e4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x1292e4) {
            ctx->pc = 0x129334u;
            goto label_129334;
        }
    }
    ctx->pc = 0x1292ECu;
    // 0x1292ec: 0x6800008  bltz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x1292ECu;
    {
        const bool branch_taken_0x1292ec = (GPR_S64(ctx, 20) < 0);
        ctx->pc = 0x1292F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1292ECu;
        // 0x1292f0: 0x242782b  sltu        $t7, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1292ec) {
            ctx->pc = 0x129310u;
            goto label_129310;
        }
    }
    ctx->pc = 0x1292F4u;
    // 0x1292f4: 0x55e00007  bnel        $t7, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1292F4u;
    {
        const bool branch_taken_0x1292f4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1292f4) {
            ctx->pc = 0x1292F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1292F4u;
            // 0x1292f8: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129314u;
            goto label_129314;
        }
    }
    ctx->pc = 0x1292FCu;
    // 0x1292fc: 0x14520008  bne         $v0, $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1292FCu;
    {
        const bool branch_taken_0x1292fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x129300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1292FCu;
        // 0x129300: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1292fc) {
            ctx->pc = 0x129320u;
            goto label_129320;
        }
    }
    ctx->pc = 0x129304u;
    // 0x129304: 0x3d0782a  slt         $t7, $fp, $s0
    ctx->pc = 0x129304u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x129308: 0x11e00005  beqz        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x129308u;
    {
        const bool branch_taken_0x129308 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x129308) {
            ctx->pc = 0x129320u;
            goto label_129320;
        }
    }
    ctx->pc = 0x129310u;
label_129310:
    // 0x129310: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x129310u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_129314:
    // 0x129314: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x129314u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x129318: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x129318u;
    {
        const bool branch_taken_0x129318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12931Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129318u;
        // 0x12931c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129318) {
            ctx->pc = 0x1292C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1292c8;
        }
    }
    ctx->pc = 0x129320u;
label_129320:
    // 0x129320: 0xc04b098  jal         func_12C260
    ctx->pc = 0x129320u;
    SET_GPR_U32(ctx, 31, 0x129328u);
    ctx->pc = 0x129324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129320u;
    // 0x129324: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C260u, 0x129320u, 0x129328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129328u;
label_129328:
    // 0x129328: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x129328u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12932c: 0x1000fff9  b           . + 4 + (-0x7 << 2)
    ctx->pc = 0x12932Cu;
    {
        const bool branch_taken_0x12932c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12932Cu;
        // 0x129330: 0x202102d  daddu       $v0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12932c) {
            ctx->pc = 0x129314u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129314;
        }
    }
    ctx->pc = 0x129334u;
label_129334:
    // 0x129334: 0x681001c  bgez        $s4, . + 4 + (0x1C << 2)
    ctx->pc = 0x129334u;
    {
        const bool branch_taken_0x129334 = (GPR_S64(ctx, 20) >= 0);
        ctx->pc = 0x129338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129334u;
        // 0x129338: 0x8fae0008  lw          $t6, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129334) {
            ctx->pc = 0x1293A8u;
            goto label_1293a8;
        }
    }
    ctx->pc = 0x12933Cu;
    // 0x12933c: 0x8fae0000  lw          $t6, 0x0($sp)
    ctx->pc = 0x12933cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129340: 0x240f0022  addiu       $t7, $zero, 0x22
    ctx->pc = 0x129340u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x129344: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x129344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x129348: 0xadcf0000  sw          $t7, 0x0($t6)
    ctx->pc = 0x129348u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 15));
    // 0x12934c: 0x217fc  dsll32      $v0, $v0, 31
    ctx->pc = 0x12934cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 31));
    // 0x129350: 0x240ffffe  addiu       $t7, $zero, -0x2
    ctx->pc = 0x129350u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x129354: 0x8fae0008  lw          $t6, 0x8($sp)
    ctx->pc = 0x129354u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x129358: 0xf787a  dsrl        $t7, $t7, 1
    ctx->pc = 0x129358u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 1);
    // 0x12935c: 0x1ee100a  movz        $v0, $t7, $t6
    ctx->pc = 0x12935cu;
    if (GPR_U64(ctx, 14) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 15));
label_129360:
    // 0x129360: 0x8faf0004  lw          $t7, 0x4($sp)
    ctx->pc = 0x129360u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x129364: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x129364u;
    {
        const bool branch_taken_0x129364 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x129368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129364u;
        // 0x129368: 0x262fffff  addiu       $t7, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129364) {
            ctx->pc = 0x129378u;
            goto label_129378;
        }
    }
    ctx->pc = 0x12936Cu;
    // 0x12936c: 0x8fae0004  lw          $t6, 0x4($sp)
    ctx->pc = 0x12936cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x129370: 0x1f4b80b  movn        $s7, $t7, $s4
    ctx->pc = 0x129370u;
    if (GPR_U64(ctx, 20) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 15));
    // 0x129374: 0xadd70000  sw          $s7, 0x0($t6)
    ctx->pc = 0x129374u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 23));
label_129378:
    // 0x129378: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x129378u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12937c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x12937cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x129380: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x129380u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x129384: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x129384u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x129388: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x129388u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12938c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x12938cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x129390: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x129390u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x129394: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x129394u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129398: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x129398u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12939c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x12939cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1293a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1293A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1293A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1293A0u;
        // 0x1293a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1293A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1293A8u;
label_1293a8:
    // 0x1293a8: 0x2782f  dsubu       $t7, $zero, $v0
    ctx->pc = 0x1293a8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
    // 0x1293ac: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x1293ACu;
    {
        const bool branch_taken_0x1293ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1293B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1293ACu;
        // 0x1293b0: 0x1ee100b  movn        $v0, $t7, $t6 (Delay Slot)
        if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1293ac) {
            ctx->pc = 0x129360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129360;
        }
    }
    ctx->pc = 0x1293B4u;
label_1293b4:
    // 0x1293b4: 0x11e0ffdf  beqz        $t7, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1293B4u;
    {
        const bool branch_taken_0x1293b4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1293B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1293B4u;
        // 0x1293b8: 0x260effa9  addiu       $t6, $s0, -0x57 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967209));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1293b4) {
            ctx->pc = 0x129334u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129334;
        }
    }
    ctx->pc = 0x1293BCu;
    // 0x1293bc: 0x260fffc9  addiu       $t7, $s0, -0x37
    ctx->pc = 0x1293bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967241));
    // 0x1293c0: 0x31ad0001  andi        $t5, $t5, 0x1
    ctx->pc = 0x1293c0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
    // 0x1293c4: 0x1e0802d  daddu       $s0, $t7, $zero
    ctx->pc = 0x1293c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1293c8: 0x1000ffc5  b           . + 4 + (-0x3B << 2)
    ctx->pc = 0x1293C8u;
    {
        const bool branch_taken_0x1293c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1293CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1293C8u;
        // 0x1293cc: 0x1cd800a  movz        $s0, $t6, $t5 (Delay Slot)
        if (GPR_U64(ctx, 13) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1293c8) {
            ctx->pc = 0x1292E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1292e0;
        }
    }
    ctx->pc = 0x1293D0u;
label_1293d0:
    // 0x1293d0: 0x160fff94  bne         $s0, $t7, . + 4 + (-0x6C << 2)
    ctx->pc = 0x1293D0u;
    {
        const bool branch_taken_0x1293d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 15));
        if (branch_taken_0x1293d0) {
            ctx->pc = 0x129224u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129224;
        }
    }
    ctx->pc = 0x1293D8u;
    // 0x1293d8: 0x1000ff91  b           . + 4 + (-0x6F << 2)
    ctx->pc = 0x1293D8u;
    {
        const bool branch_taken_0x1293d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1293DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1293D8u;
        // 0x1293dc: 0x82300000  lb          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1293d8) {
            ctx->pc = 0x129220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129220;
        }
    }
    ctx->pc = 0x1293E0u;
}
