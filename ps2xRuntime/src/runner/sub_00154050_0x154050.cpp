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

// Function: sub_00154050
// Address: 0x154050 - 0x15419c
void sub_00154050_0x154050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154050_0x154050");
#endif

    switch (ctx->pc) {
        case 0x154074u: goto label_154074;
        case 0x15409cu: goto label_15409c;
        case 0x1540acu: goto label_1540ac;
        case 0x1540bcu: goto label_1540bc;
        case 0x1540d4u: goto label_1540d4;
        case 0x1540e0u: goto label_1540e0;
        case 0x154110u: goto label_154110;
        case 0x154120u: goto label_154120;
        default: break;
    }

    ctx->pc = 0x154050u;

    // 0x154050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x154050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x154054: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x154054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x154058: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x154058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15405c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15405cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x154060: 0x8c23ee98  lw          $v1, -0x1168($at)
    ctx->pc = 0x154060u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7FEE98u));
    // 0x154064: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x154064u;
    {
        const bool branch_taken_0x154064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x154068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154064u;
        // 0x154068: 0x3c010080  lui         $at, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154064) {
            ctx->pc = 0x1540E8u;
            goto label_1540e8;
        }
    }
    ctx->pc = 0x15406Cu;
    // 0x15406c: 0xc054eec  jal         func_153BB0
    ctx->pc = 0x15406Cu;
    SET_GPR_U32(ctx, 31, 0x154074u);
    ctx->pc = 0x154070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15406Cu;
    // 0x154070: 0x8c24ee90  lw          $a0, -0x1170($at) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294962832)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153BB0u, 0x15406Cu, 0x154074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154074u;
label_154074:
    // 0x154074: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x154074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154078: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x154078u;
    {
        const bool branch_taken_0x154078 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x154078) {
            ctx->pc = 0x1540C8u;
            goto label_1540c8;
        }
    }
    ctx->pc = 0x154080u;
    // 0x154080: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x154080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x154084: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x154084u;
    {
        const bool branch_taken_0x154084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x154088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154084u;
        // 0x154088: 0x3c010080  lui         $at, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154084) {
            ctx->pc = 0x1540C8u;
            goto label_1540c8;
        }
    }
    ctx->pc = 0x15408Cu;
    // 0x15408c: 0x8c22ee98  lw          $v0, -0x1168($at)
    ctx->pc = 0x15408cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294962840)));
    // 0x154090: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x154090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x154094: 0xc08c39e  jal         func_230E78
    ctx->pc = 0x154094u;
    SET_GPR_U32(ctx, 31, 0x15409Cu);
    ctx->pc = 0x154098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154094u;
    // 0x154098: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230E78u, 0x154094u, 0x15409Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15409Cu;
label_15409c:
    // 0x15409c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x15409cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1540a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1540a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1540a4: 0xc08c432  jal         func_2310C8
    ctx->pc = 0x1540A4u;
    SET_GPR_U32(ctx, 31, 0x1540ACu);
    ctx->pc = 0x1540A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1540A4u;
    // 0x1540a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2310C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310C8u, 0x1540A4u, 0x1540ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1540ACu;
label_1540ac:
    // 0x1540ac: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x1540acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x1540b0: 0x8c25ee90  lw          $a1, -0x1170($at)
    ctx->pc = 0x1540b0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7FEE90u));
    // 0x1540b4: 0xc0550e8  jal         func_1543A0
    ctx->pc = 0x1540B4u;
    SET_GPR_U32(ctx, 31, 0x1540BCu);
    ctx->pc = 0x1540B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1540B4u;
    // 0x1540b8: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1543A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1543A0u, 0x1540B4u, 0x1540BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1540BCu;
label_1540bc:
    // 0x1540bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1540BCu;
    {
        const bool branch_taken_0x1540bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1540bc) {
            ctx->pc = 0x1540E0u;
            goto label_1540e0;
        }
    }
    ctx->pc = 0x1540C4u;
    // 0x1540c4: 0x0  nop
    ctx->pc = 0x1540c4u;
    // NOP
label_1540c8:
    // 0x1540c8: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x1540c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x1540cc: 0xc08c39e  jal         func_230E78
    ctx->pc = 0x1540CCu;
    SET_GPR_U32(ctx, 31, 0x1540D4u);
    ctx->pc = 0x1540D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1540CCu;
    // 0x1540d0: 0x8c24ee98  lw          $a0, -0x1168($at) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294962840)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230E78u, 0x1540CCu, 0x1540D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1540D4u;
label_1540d4:
    // 0x1540d4: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x1540d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x1540d8: 0xc054bf4  jal         func_152FD0
    ctx->pc = 0x1540D8u;
    SET_GPR_U32(ctx, 31, 0x1540E0u);
    ctx->pc = 0x1540DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1540D8u;
    // 0x1540dc: 0x8c24ee98  lw          $a0, -0x1168($at) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294962840)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152FD0u, 0x1540D8u, 0x1540E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1540E0u;
label_1540e0:
    // 0x1540e0: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x1540e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x1540e4: 0xac20ee98  sw          $zero, -0x1168($at)
    ctx->pc = 0x1540e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7FEE98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7FEE98u, _value); } while (0);
label_1540e8:
    // 0x1540e8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1540e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1540ec: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x1540ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x1540f0: 0xac23ee90  sw          $v1, -0x1170($at)
    ctx->pc = 0x1540f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7FEE90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7FEE90u, _value); } while (0);
    // 0x1540f4: 0x8f8385bc  lw          $v1, -0x7A44($gp)
    ctx->pc = 0x1540f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935996)));
    // 0x1540f8: 0x2468ffff  addiu       $t0, $v1, -0x1
    ctx->pc = 0x1540f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1540fc: 0x8082b  sltu        $at, $zero, $t0
    ctx->pc = 0x1540fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x154100: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
    ctx->pc = 0x154100u;
    {
        const bool branch_taken_0x154100 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x154104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154100u;
        // 0x154104: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154100) {
            ctx->pc = 0x154180u;
            goto label_154180;
        }
    }
    ctx->pc = 0x154108u;
    // 0x154108: 0x3c090080  lui         $t1, 0x80
    ctx->pc = 0x154108u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)128 << 16));
    // 0x15410c: 0x2529e810  addiu       $t1, $t1, -0x17F0
    ctx->pc = 0x15410cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294961168));
label_154110:
    // 0x154110: 0x25270068  addiu       $a3, $t1, 0x68
    ctx->pc = 0x154110u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 104));
    // 0x154114: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x154114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x154118: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x154118u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15411c: 0x0  nop
    ctx->pc = 0x15411cu;
    // NOP
label_154120:
    // 0x154120: 0x80e40000  lb          $a0, 0x0($a3)
    ctx->pc = 0x154120u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x154124: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x154124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x154128: 0x80e30001  lb          $v1, 0x1($a3)
    ctx->pc = 0x154128u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x15412c: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x15412cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x154130: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x154130u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x154134: 0xa0c30001  sb          $v1, 0x1($a2)
    ctx->pc = 0x154134u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x154138: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x154138u;
    {
        const bool branch_taken_0x154138 = (GPR_S64(ctx, 5) > 0);
        ctx->pc = 0x15413Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154138u;
        // 0x15413c: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154138) {
            ctx->pc = 0x154120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_154120;
        }
    }
    ctx->pc = 0x154140u;
    // 0x154140: 0x8d2400b8  lw          $a0, 0xB8($t1)
    ctx->pc = 0x154140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 184)));
    // 0x154144: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x154144u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x154148: 0x148182b  sltu        $v1, $t2, $t0
    ctx->pc = 0x154148u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x15414c: 0xad240050  sw          $a0, 0x50($t1)
    ctx->pc = 0x15414cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 80), GPR_U32(ctx, 4));
    // 0x154150: 0x8d2400bc  lw          $a0, 0xBC($t1)
    ctx->pc = 0x154150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 188)));
    // 0x154154: 0xad240054  sw          $a0, 0x54($t1)
    ctx->pc = 0x154154u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 84), GPR_U32(ctx, 4));
    // 0x154158: 0x8d2400c0  lw          $a0, 0xC0($t1)
    ctx->pc = 0x154158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 192)));
    // 0x15415c: 0xad240058  sw          $a0, 0x58($t1)
    ctx->pc = 0x15415cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 88), GPR_U32(ctx, 4));
    // 0x154160: 0x8d2400c4  lw          $a0, 0xC4($t1)
    ctx->pc = 0x154160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 196)));
    // 0x154164: 0xad24005c  sw          $a0, 0x5C($t1)
    ctx->pc = 0x154164u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 92), GPR_U32(ctx, 4));
    // 0x154168: 0x8d2400c8  lw          $a0, 0xC8($t1)
    ctx->pc = 0x154168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 200)));
    // 0x15416c: 0xad240060  sw          $a0, 0x60($t1)
    ctx->pc = 0x15416cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 96), GPR_U32(ctx, 4));
    // 0x154170: 0x8d2400cc  lw          $a0, 0xCC($t1)
    ctx->pc = 0x154170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 204)));
    // 0x154174: 0xad240064  sw          $a0, 0x64($t1)
    ctx->pc = 0x154174u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 100), GPR_U32(ctx, 4));
    // 0x154178: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x154178u;
    {
        const bool branch_taken_0x154178 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15417Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154178u;
        // 0x15417c: 0x25290068  addiu       $t1, $t1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154178) {
            ctx->pc = 0x154110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_154110;
        }
    }
    ctx->pc = 0x154180u;
label_154180:
    // 0x154180: 0x8f8385bc  lw          $v1, -0x7A44($gp)
    ctx->pc = 0x154180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935996)));
    // 0x154184: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x154184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x154188: 0xaf8385bc  sw          $v1, -0x7A44($gp)
    ctx->pc = 0x154188u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935996), GPR_U32(ctx, 3));
    // 0x15418c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15418cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154190: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x154190u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x154194: 0x3e00008  jr          $ra
    ctx->pc = 0x154194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154194u;
        // 0x154198: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15419Cu;
}
