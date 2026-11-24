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

// Function: sub_0011F110
// Address: 0x11f110 - 0x11f1c8
void sub_0011F110_0x11f110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011F110_0x11f110");
#endif

    switch (ctx->pc) {
        case 0x11f140u: goto label_11f140;
        case 0x11f198u: goto label_11f198;
        default: break;
    }

    ctx->pc = 0x11f110u;

    // 0x11f110: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x11f110u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x11f114: 0x853825  or          $a3, $a0, $a1
    ctx->pc = 0x11f114u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x11f118: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x11f118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x11f11c: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x11F11Cu;
    {
        const bool branch_taken_0x11f11c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x11F120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F11Cu;
        // 0x11f120: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f11c) {
            ctx->pc = 0x11F170u;
            goto label_11f170;
        }
    }
    ctx->pc = 0x11F124u;
    // 0x11f124: 0x8ce90008  lw          $t1, 0x8($a3)
    ctx->pc = 0x11f124u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x11f128: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x11F128u;
    {
        const bool branch_taken_0x11f128 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x11F12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F128u;
        // 0x11f12c: 0x1255025  or          $t2, $t1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f128) {
            ctx->pc = 0x11F170u;
            goto label_11f170;
        }
    }
    ctx->pc = 0x11F130u;
    // 0x11f130: 0x24e80010  addiu       $t0, $a3, 0x10
    ctx->pc = 0x11f130u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x11f134: 0x3c0b0040  lui         $t3, 0x40
    ctx->pc = 0x11f134u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)64 << 16));
    // 0x11f138: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x11f138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x11f13c: 0x0  nop
    ctx->pc = 0x11f13cu;
    // NOP
label_11f140:
    // 0x11f140: 0x1462821  addu        $a1, $t2, $a2
    ctx->pc = 0x11f140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x11f144: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x11f144u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11f148: 0x1262021  addu        $a0, $t1, $a2
    ctx->pc = 0x11f148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x11f14c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x11f14cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x11f150: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x11f150u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x11f154: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x11f154u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x11f158: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x11f158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x11f15c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x11f15cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11f160: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x11F160u;
    {
        const bool branch_taken_0x11f160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F160u;
        // 0x11f164: 0x1061021  addu        $v0, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f160) {
            ctx->pc = 0x11F140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f140;
        }
    }
    ctx->pc = 0x11F168u;
    // 0x11f168: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11F168u;
    {
        const bool branch_taken_0x11f168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F168u;
        // 0x11f16c: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f168) {
            ctx->pc = 0x11F178u;
            goto label_11f178;
        }
    }
    ctx->pc = 0x11F170u;
label_11f170:
    // 0x11f170: 0x3c0b0040  lui         $t3, 0x40
    ctx->pc = 0x11f170u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)64 << 16));
    // 0x11f174: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x11f174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_11f178:
    // 0x11f178: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x11F178u;
    {
        const bool branch_taken_0x11f178 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x11F17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F178u;
        // 0x11f17c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f178) {
            ctx->pc = 0x11F1C0u;
            goto label_11f1c0;
        }
    }
    ctx->pc = 0x11F180u;
    // 0x11f180: 0x8ce9000c  lw          $t1, 0xC($a3)
    ctx->pc = 0x11f180u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x11f184: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11f184u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f188: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x11F188u;
    {
        const bool branch_taken_0x11f188 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x11F18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F188u;
        // 0x11f18c: 0x1225025  or          $t2, $t1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f188) {
            ctx->pc = 0x11F1C0u;
            goto label_11f1c0;
        }
    }
    ctx->pc = 0x11F190u;
    // 0x11f190: 0x24e80050  addiu       $t0, $a3, 0x50
    ctx->pc = 0x11f190u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
    // 0x11f194: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x11f194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_11f198:
    // 0x11f198: 0x1462821  addu        $a1, $t2, $a2
    ctx->pc = 0x11f198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x11f19c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x11f19cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11f1a0: 0x1262021  addu        $a0, $t1, $a2
    ctx->pc = 0x11f1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x11f1a4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x11f1a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x11f1a8: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x11f1a8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x11f1ac: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x11f1acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x11f1b0: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x11f1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x11f1b4: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x11f1b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11f1b8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x11F1B8u;
    {
        const bool branch_taken_0x11f1b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F1B8u;
        // 0x11f1bc: 0x1061021  addu        $v0, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f1b8) {
            ctx->pc = 0x11F198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f198;
        }
    }
    ctx->pc = 0x11F1C0u;
label_11f1c0:
    // 0x11f1c0: 0x8047bc0  j           func_11EF00
    ctx->pc = 0x11F1C0u;
    ctx->pc = 0x11F1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F1C0u;
    // 0x11f1c4: 0x256441e0  addiu       $a0, $t3, 0x41E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 16864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EF00u;
    sub_0011EF00_0x11ef00(rdram, ctx, runtime); return;
    ctx->pc = 0x11F1C8u;
}
