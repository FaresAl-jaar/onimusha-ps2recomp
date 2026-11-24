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

// Function: sub_0024C8F8
// Address: 0x24c8f8 - 0x24c994
void sub_0024C8F8_0x24c8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C8F8_0x24c8f8");
#endif

    switch (ctx->pc) {
        case 0x24c940u: goto label_24c940;
        case 0x24c95cu: goto label_24c95c;
        case 0x24c974u: goto label_24c974;
        case 0x24c97cu: goto label_24c97c;
        default: break;
    }

    ctx->pc = 0x24c8f8u;

    // 0x24c8f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24c8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24c8fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24c8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24c900: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24c900u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c904: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24c904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24c908: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24C908u;
    {
        const bool branch_taken_0x24c908 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x24C90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C908u;
        // 0x24c90c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c908) {
            ctx->pc = 0x24C920u;
            goto label_24c920;
        }
    }
    ctx->pc = 0x24C910u;
    // 0x24c910: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x24c910u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x24c914: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x24C914u;
    {
        const bool branch_taken_0x24c914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C914u;
        // 0x24c918: 0x24a5dc10  addiu       $a1, $a1, -0x23F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c914) {
            ctx->pc = 0x24C954u;
            goto label_24c954;
        }
    }
    ctx->pc = 0x24C91Cu;
    // 0x24c91c: 0x0  nop
    ctx->pc = 0x24c91cu;
    // NOP
label_24c920:
    // 0x24c920: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x24C920u;
    {
        const bool branch_taken_0x24c920 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C920u;
        // 0x24c924: 0x3c050067  lui         $a1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c920) {
            ctx->pc = 0x24C938u;
            goto label_24c938;
        }
    }
    ctx->pc = 0x24C928u;
    // 0x24c928: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24c928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c92c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x24C92Cu;
    {
        const bool branch_taken_0x24c92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C92Cu;
        // 0x24c930: 0x24a5dc38  addiu       $a1, $a1, -0x23C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c92c) {
            ctx->pc = 0x24C954u;
            goto label_24c954;
        }
    }
    ctx->pc = 0x24C934u;
    // 0x24c934: 0x0  nop
    ctx->pc = 0x24c934u;
    // NOP
label_24c938:
    // 0x24c938: 0xc093204  jal         func_24C810
    ctx->pc = 0x24C938u;
    SET_GPR_U32(ctx, 31, 0x24C940u);
    ctx->pc = 0x24C810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C810u, 0x24C938u, 0x24C940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C940u;
label_24c940:
    // 0x24c940: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x24c940u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x24c944: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24c944u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c948: 0x24a5dc60  addiu       $a1, $a1, -0x23A0
    ctx->pc = 0x24c948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958176));
    // 0x24c94c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24C94Cu;
    {
        const bool branch_taken_0x24c94c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x24C950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C94Cu;
        // 0x24c950: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c94c) {
            ctx->pc = 0x24C968u;
            goto label_24c968;
        }
    }
    ctx->pc = 0x24C954u;
label_24c954:
    // 0x24c954: 0xc093184  jal         func_24C610
    ctx->pc = 0x24C954u;
    SET_GPR_U32(ctx, 31, 0x24C95Cu);
    ctx->pc = 0x24C610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C610u, 0x24C954u, 0x24C95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C95Cu;
label_24c95c:
    // 0x24c95c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x24C95Cu;
    {
        const bool branch_taken_0x24c95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C95Cu;
        // 0x24c960: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c95c) {
            ctx->pc = 0x24C980u;
            goto label_24c980;
        }
    }
    ctx->pc = 0x24C964u;
    // 0x24c964: 0x0  nop
    ctx->pc = 0x24c964u;
    // NOP
label_24c968:
    // 0x24c968: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24c968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c96c: 0xc049ed2  jal         func_127B48
    ctx->pc = 0x24C96Cu;
    SET_GPR_U32(ctx, 31, 0x24C974u);
    ctx->pc = 0x24C970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C96Cu;
    // 0x24c970: 0x2604001c  addiu       $a0, $s0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B48u, 0x24C96Cu, 0x24C974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C974u;
label_24c974:
    // 0x24c974: 0xc093222  jal         func_24C888
    ctx->pc = 0x24C974u;
    SET_GPR_U32(ctx, 31, 0x24C97Cu);
    ctx->pc = 0x24C978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C974u;
    // 0x24c978: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C888u, 0x24C974u, 0x24C97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C97Cu;
label_24c97c:
    // 0x24c97c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x24c97cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24c980:
    // 0x24c980: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24c980u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24c984: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24c984u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24c988: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24c988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24c98c: 0x3e00008  jr          $ra
    ctx->pc = 0x24C98Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C98Cu;
        // 0x24c990: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C98Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C994u;
}
