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

// Function: sub_00256090
// Address: 0x256090 - 0x2560fc
void sub_00256090_0x256090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00256090_0x256090");
#endif

    switch (ctx->pc) {
        case 0x2560b0u: goto label_2560b0;
        case 0x2560ccu: goto label_2560cc;
        default: break;
    }

    ctx->pc = 0x256090u;

    // 0x256090: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x256090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x256094: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x256094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x256098: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x256098u;
    {
        const bool branch_taken_0x256098 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x25609Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256098u;
        // 0x25609c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256098) {
            ctx->pc = 0x2560A8u;
            goto label_2560a8;
        }
    }
    ctx->pc = 0x2560A0u;
    // 0x2560a0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2560A0u;
    {
        const bool branch_taken_0x2560a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2560A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2560A0u;
        // 0x2560a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2560a0) {
            ctx->pc = 0x2560F0u;
            goto label_2560f0;
        }
    }
    ctx->pc = 0x2560A8u;
label_2560a8:
    // 0x2560a8: 0xc0957f4  jal         func_255FD0
    ctx->pc = 0x2560A8u;
    SET_GPR_U32(ctx, 31, 0x2560B0u);
    ctx->pc = 0x255FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255FD0u, 0x2560A8u, 0x2560B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2560B0u;
label_2560b0:
    // 0x2560b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2560B0u;
    {
        const bool branch_taken_0x2560b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2560b0) {
            ctx->pc = 0x2560C0u;
            goto label_2560c0;
        }
    }
    ctx->pc = 0x2560B8u;
    // 0x2560b8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2560B8u;
    {
        const bool branch_taken_0x2560b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2560BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2560B8u;
        // 0x2560bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2560b8) {
            ctx->pc = 0x2560F0u;
            goto label_2560f0;
        }
    }
    ctx->pc = 0x2560C0u;
label_2560c0:
    // 0x2560c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2560c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2560c4: 0xc097958  jal         func_25E560
    ctx->pc = 0x2560C4u;
    SET_GPR_U32(ctx, 31, 0x2560CCu);
    ctx->pc = 0x2560C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2560C4u;
    // 0x2560c8: 0x27a5001c  addiu       $a1, $sp, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E560u, 0x2560C4u, 0x2560CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2560CCu;
label_2560cc:
    // 0x2560cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2560CCu;
    {
        const bool branch_taken_0x2560cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2560cc) {
            ctx->pc = 0x2560E8u;
            goto label_2560e8;
        }
    }
    ctx->pc = 0x2560D4u;
    // 0x2560d4: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2560d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2560d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2560D8u;
    {
        const bool branch_taken_0x2560d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2560d8) {
            ctx->pc = 0x2560E8u;
            goto label_2560e8;
        }
    }
    ctx->pc = 0x2560E0u;
    // 0x2560e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2560E0u;
    {
        const bool branch_taken_0x2560e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2560E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2560E0u;
        // 0x2560e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2560e0) {
            ctx->pc = 0x2560F0u;
            goto label_2560f0;
        }
    }
    ctx->pc = 0x2560E8u;
label_2560e8:
    // 0x2560e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2560e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2560ec: 0x0  nop
    ctx->pc = 0x2560ecu;
    // NOP
label_2560f0:
    // 0x2560f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2560f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2560f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2560F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2560F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2560F4u;
        // 0x2560f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2560F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2560FCu;
}
