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

// Function: sub_0029D540
// Address: 0x29d540 - 0x29d618
void sub_0029D540_0x29d540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D540_0x29d540");
#endif

    switch (ctx->pc) {
        case 0x29d57cu: goto label_29d57c;
        case 0x29d594u: goto label_29d594;
        case 0x29d5acu: goto label_29d5ac;
        case 0x29d5c4u: goto label_29d5c4;
        case 0x29d5e4u: goto label_29d5e4;
        case 0x29d600u: goto label_29d600;
        default: break;
    }

    ctx->pc = 0x29d540u;

    // 0x29d540: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29d540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29d544: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29d544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29d548: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29d548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29d54c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29d54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29d550: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29d550u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d554: 0x1220002a  beqz        $s1, . + 4 + (0x2A << 2)
    ctx->pc = 0x29D554u;
    {
        const bool branch_taken_0x29d554 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D554u;
        // 0x29d558: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d554) {
            ctx->pc = 0x29D600u;
            goto label_29d600;
        }
    }
    ctx->pc = 0x29D55Cu;
    // 0x29d55c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x29d55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x29d560: 0x24427830  addiu       $v0, $v0, 0x7830
    ctx->pc = 0x29d560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30768));
    // 0x29d564: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x29d564u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    // 0x29d568: 0x8e24008c  lw          $a0, 0x8C($s1)
    ctx->pc = 0x29d568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x29d56c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29D56Cu;
    {
        const bool branch_taken_0x29d56c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d56c) {
            ctx->pc = 0x29D580u;
            goto label_29d580;
        }
    }
    ctx->pc = 0x29D574u;
    // 0x29d574: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x29D574u;
    SET_GPR_U32(ctx, 31, 0x29D57Cu);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x29D574u, 0x29D57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D57Cu;
label_29d57c:
    // 0x29d57c: 0xae20008c  sw          $zero, 0x8C($s1)
    ctx->pc = 0x29d57cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
label_29d580:
    // 0x29d580: 0x8e240094  lw          $a0, 0x94($s1)
    ctx->pc = 0x29d580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x29d584: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29D584u;
    {
        const bool branch_taken_0x29d584 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d584) {
            ctx->pc = 0x29D598u;
            goto label_29d598;
        }
    }
    ctx->pc = 0x29D58Cu;
    // 0x29d58c: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x29D58Cu;
    SET_GPR_U32(ctx, 31, 0x29D594u);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x29D58Cu, 0x29D594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D594u;
label_29d594:
    // 0x29d594: 0xae200094  sw          $zero, 0x94($s1)
    ctx->pc = 0x29d594u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 0));
label_29d598:
    // 0x29d598: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x29d598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x29d59c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29D59Cu;
    {
        const bool branch_taken_0x29d59c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d59c) {
            ctx->pc = 0x29D5B0u;
            goto label_29d5b0;
        }
    }
    ctx->pc = 0x29D5A4u;
    // 0x29d5a4: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x29D5A4u;
    SET_GPR_U32(ctx, 31, 0x29D5ACu);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x29D5A4u, 0x29D5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D5ACu;
label_29d5ac:
    // 0x29d5ac: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x29d5acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_29d5b0:
    // 0x29d5b0: 0x8e2400a4  lw          $a0, 0xA4($s1)
    ctx->pc = 0x29d5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x29d5b4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29D5B4u;
    {
        const bool branch_taken_0x29d5b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d5b4) {
            ctx->pc = 0x29D5C8u;
            goto label_29d5c8;
        }
    }
    ctx->pc = 0x29D5BCu;
    // 0x29d5bc: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x29D5BCu;
    SET_GPR_U32(ctx, 31, 0x29D5C4u);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x29D5BCu, 0x29D5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D5C4u;
label_29d5c4:
    // 0x29d5c4: 0xae2000a4  sw          $zero, 0xA4($s1)
    ctx->pc = 0x29d5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 0));
label_29d5c8:
    // 0x29d5c8: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x29D5C8u;
    {
        const bool branch_taken_0x29d5c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D5C8u;
        // 0x29d5cc: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d5c8) {
            ctx->pc = 0x29D5E8u;
            goto label_29d5e8;
        }
    }
    ctx->pc = 0x29D5D0u;
    // 0x29d5d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29d5d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d5d4: 0x244275c0  addiu       $v0, $v0, 0x75C0
    ctx->pc = 0x29d5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30144));
    // 0x29d5d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29d5d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d5dc: 0xc096b20  jal         func_25AC80
    ctx->pc = 0x29D5DCu;
    SET_GPR_U32(ctx, 31, 0x29D5E4u);
    ctx->pc = 0x29D5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D5DCu;
    // 0x29d5e0: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC80u, 0x29D5DCu, 0x29D5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D5E4u;
label_29d5e4:
    // 0x29d5e4: 0x0  nop
    ctx->pc = 0x29d5e4u;
    // NOP
label_29d5e8:
    // 0x29d5e8: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x29d5e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x29d5ec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x29d5ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x29d5f0: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29D5F0u;
    {
        const bool branch_taken_0x29d5f0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x29D5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D5F0u;
        // 0x29d5f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d5f0) {
            ctx->pc = 0x29D600u;
            goto label_29d600;
        }
    }
    ctx->pc = 0x29D5F8u;
    // 0x29d5f8: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x29D5F8u;
    SET_GPR_U32(ctx, 31, 0x29D600u);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x29D5F8u, 0x29D600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D600u;
label_29d600:
    // 0x29d600: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x29d600u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d604: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29d604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29d608: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29d608u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29d60c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29d60cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29d610: 0x3e00008  jr          $ra
    ctx->pc = 0x29D610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D610u;
        // 0x29d614: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D618u;
}
