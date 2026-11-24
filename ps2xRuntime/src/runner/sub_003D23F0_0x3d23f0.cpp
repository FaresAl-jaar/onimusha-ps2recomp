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

// Function: sub_003D23F0
// Address: 0x3d23f0 - 0x3d24dc
void sub_003D23F0_0x3d23f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D23F0_0x3d23f0");
#endif

    switch (ctx->pc) {
        case 0x3d2424u: goto label_3d2424;
        case 0x3d2438u: goto label_3d2438;
        case 0x3d2450u: goto label_3d2450;
        case 0x3d248cu: goto label_3d248c;
        case 0x3d24b0u: goto label_3d24b0;
        default: break;
    }

    ctx->pc = 0x3d23f0u;

    // 0x3d23f0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3d23f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3d23f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d23f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d23f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3d23f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3d23fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3d23fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3d2400: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3d2400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3d2404: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3d2404u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2408: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d2408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3d240c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d240cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d2410: 0x90842b20  lbu         $a0, 0x2B20($a0)
    ctx->pc = 0x3d2410u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11040)));
    // 0x3d2414: 0x1483002a  bne         $a0, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x3D2414u;
    {
        const bool branch_taken_0x3d2414 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3d2414) {
            ctx->pc = 0x3D24C0u;
            goto label_3d24c0;
        }
    }
    ctx->pc = 0x3D241Cu;
    // 0x3d241c: 0xc09e8d0  jal         func_27A340
    ctx->pc = 0x3D241Cu;
    SET_GPR_U32(ctx, 31, 0x3D2424u);
    ctx->pc = 0x3D2420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D241Cu;
    // 0x3d2420: 0x266401c0  addiu       $a0, $s3, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A340u, 0x3D241Cu, 0x3D2424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2424u;
label_3d2424:
    // 0x3d2424: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x3D2424u;
    {
        const bool branch_taken_0x3d2424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2424u;
        // 0x3d2428: 0x266401c0  addiu       $a0, $s3, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2424) {
            ctx->pc = 0x3D24C0u;
            goto label_3d24c0;
        }
    }
    ctx->pc = 0x3D242Cu;
    // 0x3d242c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3d242cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3d2430: 0xc09e900  jal         func_27A400
    ctx->pc = 0x3D2430u;
    SET_GPR_U32(ctx, 31, 0x3D2438u);
    ctx->pc = 0x3D2434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2430u;
    // 0x3d2434: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A400u, 0x3D2430u, 0x3D2438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2438u;
label_3d2438:
    // 0x3d2438: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3d2438u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d243c: 0x12400020  beqz        $s2, . + 4 + (0x20 << 2)
    ctx->pc = 0x3D243Cu;
    {
        const bool branch_taken_0x3d243c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D243Cu;
        // 0x3d2440: 0x12082a  slt         $at, $zero, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d243c) {
            ctx->pc = 0x3D24C0u;
            goto label_3d24c0;
        }
    }
    ctx->pc = 0x3D2444u;
    // 0x3d2444: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x3D2444u;
    {
        const bool branch_taken_0x3d2444 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2444u;
        // 0x3d2448: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2444) {
            ctx->pc = 0x3D24C0u;
            goto label_3d24c0;
        }
    }
    ctx->pc = 0x3D244Cu;
    // 0x3d244c: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x3d244cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3d2450:
    // 0x3d2450: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3d2450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3d2454: 0x8c8306ac  lw          $v1, 0x6AC($a0)
    ctx->pc = 0x3d2454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1708)));
    // 0x3d2458: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x3d2458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x3d245c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3D245Cu;
    {
        const bool branch_taken_0x3d245c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d245c) {
            ctx->pc = 0x3D24B0u;
            goto label_3d24b0;
        }
    }
    ctx->pc = 0x3D2464u;
    // 0x3d2464: 0x90830640  lbu         $v1, 0x640($a0)
    ctx->pc = 0x3d2464u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1600)));
    // 0x3d2468: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3d2468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3d246c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3D246Cu;
    {
        const bool branch_taken_0x3d246c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3d246c) {
            ctx->pc = 0x3D2498u;
            goto label_3d2498;
        }
    }
    ctx->pc = 0x3D2474u;
    // 0x3d2474: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x3d2474u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3d2478: 0x2407000b  addiu       $a3, $zero, 0xB
    ctx->pc = 0x3d2478u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3d247c: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x3d247cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3d2480: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3d2480u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2484: 0xc097634  jal         func_25D8D0
    ctx->pc = 0x3D2484u;
    SET_GPR_U32(ctx, 31, 0x3D248Cu);
    ctx->pc = 0x3D2488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2484u;
    // 0x3d2488: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D8D0u, 0x3D2484u, 0x3D248Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D248Cu;
label_3d248c:
    // 0x3d248c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3D248Cu;
    {
        const bool branch_taken_0x3d248c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d248c) {
            ctx->pc = 0x3D24B0u;
            goto label_3d24b0;
        }
    }
    ctx->pc = 0x3D2494u;
    // 0x3d2494: 0x0  nop
    ctx->pc = 0x3d2494u;
    // NOP
label_3d2498:
    // 0x3d2498: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x3d2498u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3d249c: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x3d249cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3d24a0: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x3d24a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3d24a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3d24a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d24a8: 0xc097634  jal         func_25D8D0
    ctx->pc = 0x3D24A8u;
    SET_GPR_U32(ctx, 31, 0x3D24B0u);
    ctx->pc = 0x3D24ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D24A8u;
    // 0x3d24ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D8D0u, 0x3D24A8u, 0x3D24B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D24B0u;
label_3d24b0:
    // 0x3d24b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3d24b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3d24b4: 0x232182a  slt         $v1, $s1, $s2
    ctx->pc = 0x3d24b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x3d24b8: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x3D24B8u;
    {
        const bool branch_taken_0x3d24b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D24BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D24B8u;
        // 0x3d24bc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d24b8) {
            ctx->pc = 0x3D2450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d2450;
        }
    }
    ctx->pc = 0x3D24C0u;
label_3d24c0:
    // 0x3d24c0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3d24c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3d24c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3d24c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d24c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3d24c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d24cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d24ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d24d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d24d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d24d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3D24D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D24D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D24D4u;
        // 0x3d24d8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D24D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D24DCu;
}
