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

// Function: sub_003292A0
// Address: 0x3292a0 - 0x329388
void sub_003292A0_0x3292a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003292A0_0x3292a0");
#endif

    switch (ctx->pc) {
        case 0x3292f0u: goto label_3292f0;
        case 0x329304u: goto label_329304;
        case 0x32935cu: goto label_32935c;
        case 0x329374u: goto label_329374;
        default: break;
    }

    ctx->pc = 0x3292a0u;

    // 0x3292a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3292a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3292a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3292a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3292a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3292a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3292ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3292acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3292b0: 0x90850001  lbu         $a1, 0x1($a0)
    ctx->pc = 0x3292b0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x3292b4: 0x10a3001a  beq         $a1, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3292B4u;
    {
        const bool branch_taken_0x3292b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3292B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3292B4u;
        // 0x3292b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3292b4) {
            ctx->pc = 0x329320u;
            goto label_329320;
        }
    }
    ctx->pc = 0x3292BCu;
    // 0x3292bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3292bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3292c0: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3292C0u;
    {
        const bool branch_taken_0x3292c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3292c0) {
            ctx->pc = 0x3292F8u;
            goto label_3292f8;
        }
    }
    ctx->pc = 0x3292C8u;
    // 0x3292c8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3292C8u;
    {
        const bool branch_taken_0x3292c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3292c8) {
            ctx->pc = 0x3292D8u;
            goto label_3292d8;
        }
    }
    ctx->pc = 0x3292D0u;
    // 0x3292d0: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x3292D0u;
    {
        const bool branch_taken_0x3292d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3292d0) {
            ctx->pc = 0x329378u;
            goto label_329378;
        }
    }
    ctx->pc = 0x3292D8u;
label_3292d8:
    // 0x3292d8: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x3292d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3292dc: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x3292dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x3292e0: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x3292e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3292e4: 0x248465b0  addiu       $a0, $a0, 0x65B0
    ctx->pc = 0x3292e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26032));
    // 0x3292e8: 0xc0f8d00  jal         func_3E3400
    ctx->pc = 0x3292E8u;
    SET_GPR_U32(ctx, 31, 0x3292F0u);
    ctx->pc = 0x3292ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3292E8u;
    // 0x3292ec: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3400u, 0x3292E8u, 0x3292F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3292F0u;
label_3292f0:
    // 0x3292f0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x3292F0u;
    {
        const bool branch_taken_0x3292f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3292f0) {
            ctx->pc = 0x329378u;
            goto label_329378;
        }
    }
    ctx->pc = 0x3292F8u;
label_3292f8:
    // 0x3292f8: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x3292f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x3292fc: 0xc0f8d14  jal         func_3E3450
    ctx->pc = 0x3292FCu;
    SET_GPR_U32(ctx, 31, 0x329304u);
    ctx->pc = 0x329300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3292FCu;
    // 0x329300: 0x248465b0  addiu       $a0, $a0, 0x65B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3450u, 0x3292FCu, 0x329304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329304u;
label_329304:
    // 0x329304: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x329304u;
    {
        const bool branch_taken_0x329304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x329304) {
            ctx->pc = 0x329378u;
            goto label_329378;
        }
    }
    ctx->pc = 0x32930Cu;
    // 0x32930c: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x32930cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x329310: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x329310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x329314: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x329314u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x329318: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x329318u;
    {
        const bool branch_taken_0x329318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32931Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329318u;
        // 0x32931c: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329318) {
            ctx->pc = 0x329378u;
            goto label_329378;
        }
    }
    ctx->pc = 0x329320u;
label_329320:
    // 0x329320: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x329320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x329324: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x329324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x329328: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x329328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x32932c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x32932cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x329330: 0x2c61001f  sltiu       $at, $v1, 0x1F
    ctx->pc = 0x329330u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x329334: 0x14200010  bnez        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x329334u;
    {
        const bool branch_taken_0x329334 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x329338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329334u;
        // 0x329338: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329334) {
            ctx->pc = 0x329378u;
            goto label_329378;
        }
    }
    ctx->pc = 0x32933Cu;
    // 0x32933c: 0x8c22cebc  lw          $v0, -0x3144($at)
    ctx->pc = 0x32933cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
    // 0x329340: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x329340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x329344: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x329344u;
    {
        const bool branch_taken_0x329344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x329348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329344u;
        // 0x329348: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329344) {
            ctx->pc = 0x329368u;
            goto label_329368;
        }
    }
    ctx->pc = 0x32934Cu;
    // 0x32934c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x32934cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x329350: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x329350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329354: 0xc0d9040  jal         func_364100
    ctx->pc = 0x329354u;
    SET_GPR_U32(ctx, 31, 0x32935Cu);
    ctx->pc = 0x329358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329354u;
    // 0x329358: 0xa0220e70  sb          $v0, 0xE70($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 3696), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364100u, 0x329354u, 0x32935Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32935Cu;
label_32935c:
    // 0x32935c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x32935cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x329360: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x329360u;
    {
        const bool branch_taken_0x329360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329360u;
        // 0x329364: 0xa2030000  sb          $v1, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329360) {
            ctx->pc = 0x329378u;
            goto label_329378;
        }
    }
    ctx->pc = 0x329368u;
label_329368:
    // 0x329368: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x329368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32936c: 0xc0ca308  jal         func_328C20
    ctx->pc = 0x32936Cu;
    SET_GPR_U32(ctx, 31, 0x329374u);
    ctx->pc = 0x329370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32936Cu;
    // 0x329370: 0xaf828b64  sw          $v0, -0x749C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937444), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328C20u, 0x32936Cu, 0x329374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329374u;
label_329374:
    // 0x329374: 0x0  nop
    ctx->pc = 0x329374u;
    // NOP
label_329378:
    // 0x329378: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x329378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32937c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32937cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329380: 0x3e00008  jr          $ra
    ctx->pc = 0x329380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329380u;
        // 0x329384: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329388u;
}
