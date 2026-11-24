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

// Function: sub_002F6550
// Address: 0x2f6550 - 0x2f65f4
void sub_002F6550_0x2f6550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6550_0x2f6550");
#endif

    switch (ctx->pc) {
        case 0x2f6570u: goto label_2f6570;
        case 0x2f6588u: goto label_2f6588;
        case 0x2f65b0u: goto label_2f65b0;
        case 0x2f65dcu: goto label_2f65dc;
        default: break;
    }

    ctx->pc = 0x2f6550u;

    // 0x2f6550: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f6550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f6554: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f6554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f6558: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f6558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f655c: 0x8082000c  lb          $v0, 0xC($a0)
    ctx->pc = 0x2f655cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f6560: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F6560u;
    {
        const bool branch_taken_0x2f6560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6560u;
        // 0x2f6564: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6560) {
            ctx->pc = 0x2F6580u;
            goto label_2f6580;
        }
    }
    ctx->pc = 0x2F6568u;
    // 0x2f6568: 0xc0fdb34  jal         func_3F6CD0
    ctx->pc = 0x2F6568u;
    SET_GPR_U32(ctx, 31, 0x2F6570u);
    ctx->pc = 0x3F6CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F6CD0u, 0x2F6568u, 0x2F6570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6570u;
label_2f6570:
    // 0x2f6570: 0x8202000c  lb          $v0, 0xC($s0)
    ctx->pc = 0x2f6570u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2f6574: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f6574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f6578: 0xa202000c  sb          $v0, 0xC($s0)
    ctx->pc = 0x2f6578u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f657c: 0x0  nop
    ctx->pc = 0x2f657cu;
    // NOP
label_2f6580:
    // 0x2f6580: 0xc0fdb38  jal         func_3F6CE0
    ctx->pc = 0x2F6580u;
    SET_GPR_U32(ctx, 31, 0x2F6588u);
    ctx->pc = 0x3F6CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F6CE0u, 0x2F6580u, 0x2F6588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6588u;
label_2f6588:
    // 0x2f6588: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2f6588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f658c: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2F658Cu;
    {
        const bool branch_taken_0x2f658c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F6590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F658Cu;
        // 0x2f6590: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f658c) {
            ctx->pc = 0x2F65B8u;
            goto label_2f65b8;
        }
    }
    ctx->pc = 0x2F6594u;
    // 0x2f6594: 0x10450004  beq         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F6594u;
    {
        const bool branch_taken_0x2f6594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x2f6594) {
            ctx->pc = 0x2F65A8u;
            goto label_2f65a8;
        }
    }
    ctx->pc = 0x2F659Cu;
    // 0x2f659c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2F659Cu;
    {
        const bool branch_taken_0x2f659c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f659c) {
            ctx->pc = 0x2F65E0u;
            goto label_2f65e0;
        }
    }
    ctx->pc = 0x2F65A4u;
    // 0x2f65a4: 0x0  nop
    ctx->pc = 0x2f65a4u;
    // NOP
label_2f65a8:
    // 0x2f65a8: 0xc0bd418  jal         func_2F5060
    ctx->pc = 0x2F65A8u;
    SET_GPR_U32(ctx, 31, 0x2F65B0u);
    ctx->pc = 0x2F65ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F65A8u;
    // 0x2f65ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5060u, 0x2F65A8u, 0x2F65B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F65B0u;
label_2f65b0:
    // 0x2f65b0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2F65B0u;
    {
        const bool branch_taken_0x2f65b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f65b0) {
            ctx->pc = 0x2F65E0u;
            goto label_2f65e0;
        }
    }
    ctx->pc = 0x2F65B8u;
label_2f65b8:
    // 0x2f65b8: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x2f65b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x2f65bc: 0x8c2295a8  lw          $v0, -0x6A58($at)
    ctx->pc = 0x2f65bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8095A8u));
    // 0x2f65c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f65c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f65c4: 0xaf838b64  sw          $v1, -0x749C($gp)
    ctx->pc = 0x2f65c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937444), GPR_U32(ctx, 3));
    // 0x2f65c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f65c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f65cc: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x2f65ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x2f65d0: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x2f65d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x2f65d4: 0xc0bd418  jal         func_2F5060
    ctx->pc = 0x2F65D4u;
    SET_GPR_U32(ctx, 31, 0x2F65DCu);
    ctx->pc = 0x2F65D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F65D4u;
    // 0x2f65d8: 0xac2295a8  sw          $v0, -0x6A58($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294940072), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5060u, 0x2F65D4u, 0x2F65DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F65DCu;
label_2f65dc:
    // 0x2f65dc: 0x0  nop
    ctx->pc = 0x2f65dcu;
    // NOP
label_2f65e0:
    // 0x2f65e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f65e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f65e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f65e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f65e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f65e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f65ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2F65ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F65F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F65ECu;
        // 0x2f65f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F65ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F65F4u;
}
