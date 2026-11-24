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

// Function: sub_00391FF0
// Address: 0x391ff0 - 0x392184
void sub_00391FF0_0x391ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00391FF0_0x391ff0");
#endif

    switch (ctx->pc) {
        case 0x392018u: goto label_392018;
        case 0x392098u: goto label_392098;
        case 0x3920c8u: goto label_3920c8;
        case 0x3920f0u: goto label_3920f0;
        case 0x392100u: goto label_392100;
        case 0x392108u: goto label_392108;
        case 0x392168u: goto label_392168;
        case 0x392174u: goto label_392174;
        default: break;
    }

    ctx->pc = 0x391ff0u;

    // 0x391ff0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x391ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x391ff4: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x391ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x391ff8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x391ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x391ffc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x391ffcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x392000: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x392000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x392004: 0xa0850002  sb          $a1, 0x2($a0)
    ctx->pc = 0x392004u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x392008: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x392008u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39200c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x39200cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x392010: 0xc0ed6cc  jal         func_3B5B30
    ctx->pc = 0x392010u;
    SET_GPR_U32(ctx, 31, 0x392018u);
    ctx->pc = 0x392014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392010u;
    // 0x392014: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5B30u, 0x392010u, 0x392018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392018u;
label_392018:
    // 0x392018: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x392018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x39201c: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x39201cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x392020: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x392020u;
    {
        const bool branch_taken_0x392020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x392024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392020u;
        // 0x392024: 0x3c01008f  lui         $at, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392020) {
            ctx->pc = 0x392110u;
            goto label_392110;
        }
    }
    ctx->pc = 0x392028u;
    // 0x392028: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x392028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
    // 0x39202c: 0x8c23ea28  lw          $v1, -0x15D8($at)
    ctx->pc = 0x39202cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961704)));
    // 0x392030: 0x344200a0  ori         $v0, $v0, 0xA0
    ctx->pc = 0x392030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)160);
    // 0x392034: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x392034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x392038: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x392038u;
    {
        const bool branch_taken_0x392038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39203Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392038u;
        // 0x39203c: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392038) {
            ctx->pc = 0x3920C8u;
            goto label_3920c8;
        }
    }
    ctx->pc = 0x392040u;
    // 0x392040: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x392040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x392044: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x392044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x392048: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x392048u;
    {
        const bool branch_taken_0x392048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x392048) {
            ctx->pc = 0x392060u;
            goto label_392060;
        }
    }
    ctx->pc = 0x392050u;
    // 0x392050: 0x8602026c  lh          $v0, 0x26C($s0)
    ctx->pc = 0x392050u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 620)));
    // 0x392054: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x392054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x392058: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x392058u;
    {
        const bool branch_taken_0x392058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39205Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392058u;
        // 0x39205c: 0xa602026c  sh          $v0, 0x26C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 620), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392058) {
            ctx->pc = 0x392070u;
            goto label_392070;
        }
    }
    ctx->pc = 0x392060u;
label_392060:
    // 0x392060: 0x8602026c  lh          $v0, 0x26C($s0)
    ctx->pc = 0x392060u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 620)));
    // 0x392064: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x392064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x392068: 0xa602026c  sh          $v0, 0x26C($s0)
    ctx->pc = 0x392068u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 620), (uint16_t)GPR_U32(ctx, 2));
    // 0x39206c: 0x0  nop
    ctx->pc = 0x39206cu;
    // NOP
label_392070:
    // 0x392070: 0x8603026c  lh          $v1, 0x26C($s0)
    ctx->pc = 0x392070u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 620)));
    // 0x392074: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x392074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x392078: 0x26040278  addiu       $a0, $s0, 0x278
    ctx->pc = 0x392078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 632));
    // 0x39207c: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x39207cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x392080: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x392080u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x392084: 0x0  nop
    ctx->pc = 0x392084u;
    // NOP
    // 0x392088: 0x0  nop
    ctx->pc = 0x392088u;
    // NOP
    // 0x39208c: 0x1010  mfhi        $v0
    ctx->pc = 0x39208cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x392090: 0xc0b78d0  jal         func_2DE340
    ctx->pc = 0x392090u;
    SET_GPR_U32(ctx, 31, 0x392098u);
    ctx->pc = 0x392094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392090u;
    // 0x392094: 0xa602026c  sh          $v0, 0x26C($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 620), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE340u, 0x392090u, 0x392098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392098u;
label_392098:
    // 0x392098: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x392098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39209c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x39209cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3920a0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3920a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3920a4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3920a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3920a8: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x3920a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x3920ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3920acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3920b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3920b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3920b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3920b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3920b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3920b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3920bc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3920bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3920c0: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3920C0u;
    SET_GPR_U32(ctx, 31, 0x3920C8u);
    ctx->pc = 0x3920C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3920C0u;
    // 0x3920c4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3920C0u, 0x3920C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3920C8u;
label_3920c8:
    // 0x3920c8: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x3920c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x3920cc: 0x8c26ea28  lw          $a2, -0x15D8($at)
    ctx->pc = 0x3920ccu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x3920d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3920d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3920d4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3920d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x3920d8: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x3920d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x3920dc: 0x2604026e  addiu       $a0, $s0, 0x26E
    ctx->pc = 0x3920dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 622));
    // 0x3920e0: 0x34670010  ori         $a3, $v1, 0x10
    ctx->pc = 0x3920e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x3920e4: 0x34480040  ori         $t0, $v0, 0x40
    ctx->pc = 0x3920e4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3920e8: 0xc0cde64  jal         func_337990
    ctx->pc = 0x3920E8u;
    SET_GPR_U32(ctx, 31, 0x3920F0u);
    ctx->pc = 0x3920ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3920E8u;
    // 0x3920ec: 0xa0482d  daddu       $t1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337990u, 0x3920E8u, 0x3920F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3920F0u;
label_3920f0:
    // 0x3920f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3920F0u;
    {
        const bool branch_taken_0x3920f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3920F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3920F0u;
        // 0x3920f4: 0x26040278  addiu       $a0, $s0, 0x278 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3920f0) {
            ctx->pc = 0x392100u;
            goto label_392100;
        }
    }
    ctx->pc = 0x3920F8u;
    // 0x3920f8: 0xc0b78d0  jal         func_2DE340
    ctx->pc = 0x3920F8u;
    SET_GPR_U32(ctx, 31, 0x392100u);
    ctx->pc = 0x2DE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE340u, 0x3920F8u, 0x392100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392100u;
label_392100:
    // 0x392100: 0xc0e4864  jal         func_392190
    ctx->pc = 0x392100u;
    SET_GPR_U32(ctx, 31, 0x392108u);
    ctx->pc = 0x392104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392100u;
    // 0x392104: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x392190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x392190u, 0x392100u, 0x392108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392108u;
label_392108:
    // 0x392108: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x392108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x39210c: 0x0  nop
    ctx->pc = 0x39210cu;
    // NOP
label_392110:
    // 0x392110: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x392110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x392114: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x392114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x392118: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x392118u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39211c: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x39211Cu;
    {
        const bool branch_taken_0x39211c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x392120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39211Cu;
        // 0x392120: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39211c) {
            ctx->pc = 0x392158u;
            goto label_392158;
        }
    }
    ctx->pc = 0x392124u;
    // 0x392124: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x392124u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x392128: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x392128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39212c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39212Cu;
    {
        const bool branch_taken_0x39212c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x39212c) {
            ctx->pc = 0x392140u;
            goto label_392140;
        }
    }
    ctx->pc = 0x392134u;
    // 0x392134: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x392134u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x392138: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x392138u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x39213c: 0x0  nop
    ctx->pc = 0x39213cu;
    // NOP
label_392140:
    // 0x392140: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x392140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x392144: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x392144u;
    {
        const bool branch_taken_0x392144 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x392144) {
            ctx->pc = 0x392158u;
            goto label_392158;
        }
    }
    ctx->pc = 0x39214Cu;
    // 0x39214c: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x39214cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x392150: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x392150u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x392154: 0x0  nop
    ctx->pc = 0x392154u;
    // NOP
label_392158:
    // 0x392158: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x392158u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x39215c: 0x248440c0  addiu       $a0, $a0, 0x40C0
    ctx->pc = 0x39215cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16576));
    // 0x392160: 0xc0cebec  jal         func_33AFB0
    ctx->pc = 0x392160u;
    SET_GPR_U32(ctx, 31, 0x392168u);
    ctx->pc = 0x392164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392160u;
    // 0x392164: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AFB0u, 0x392160u, 0x392168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392168u;
label_392168:
    // 0x392168: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x392168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x39216c: 0xc0ceb88  jal         func_33AE20
    ctx->pc = 0x39216Cu;
    SET_GPR_U32(ctx, 31, 0x392174u);
    ctx->pc = 0x392170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39216Cu;
    // 0x392170: 0x248440c0  addiu       $a0, $a0, 0x40C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AE20u, 0x39216Cu, 0x392174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392174u;
label_392174:
    // 0x392174: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x392174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x392178: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x392178u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39217c: 0x3e00008  jr          $ra
    ctx->pc = 0x39217Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x392180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39217Cu;
        // 0x392180: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39217Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x392184u;
}
