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

// Function: sub_001F57B8
// Address: 0x1f57b8 - 0x1f5834
void sub_001F57B8_0x1f57b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F57B8_0x1f57b8");
#endif

    switch (ctx->pc) {
        case 0x1f57d4u: goto label_1f57d4;
        case 0x1f5808u: goto label_1f5808;
        case 0x1f581cu: goto label_1f581c;
        default: break;
    }

    ctx->pc = 0x1f57b8u;

    // 0x1f57b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f57b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f57bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f57bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f57c0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f57c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f57c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f57c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f57c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f57c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f57cc: 0xc07eb5e  jal         func_1FAD78
    ctx->pc = 0x1F57CCu;
    SET_GPR_U32(ctx, 31, 0x1F57D4u);
    ctx->pc = 0x1F57D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F57CCu;
    // 0x1f57d0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAD78u, 0x1F57CCu, 0x1F57D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F57D4u;
label_1f57d4:
    // 0x1f57d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f57d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f57d8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F57D8u;
    {
        const bool branch_taken_0x1f57d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F57DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F57D8u;
        // 0x1f57dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f57d8) {
            ctx->pc = 0x1F5800u;
            goto label_1f5800;
        }
    }
    ctx->pc = 0x1F57E0u;
    // 0x1f57e0: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x1f57e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x1f57e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f57e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f57e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f57e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f57ec: 0x34a5020c  ori         $a1, $a1, 0x20C
    ctx->pc = 0x1f57ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)524);
    // 0x1f57f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f57f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f57f4: 0x807d4a8  j           func_1F52A0
    ctx->pc = 0x1F57F4u;
    ctx->pc = 0x1F57F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F57F4u;
    // 0x1f57f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F52A0u;
    sub_001F52A0_0x1f52a0(rdram, ctx, runtime); return;
    ctx->pc = 0x1F57FCu;
    // 0x1f57fc: 0x0  nop
    ctx->pc = 0x1f57fcu;
    // NOP
label_1f5800:
    // 0x1f5800: 0xc07d66a  jal         func_1F59A8
    ctx->pc = 0x1F5800u;
    SET_GPR_U32(ctx, 31, 0x1F5808u);
    ctx->pc = 0x1F5804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5800u;
    // 0x1f5804: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F59A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F59A8u, 0x1F5800u, 0x1F5808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5808u;
label_1f5808:
    // 0x1f5808: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f5808u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f580c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F580Cu;
    {
        const bool branch_taken_0x1f580c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F580Cu;
        // 0x1f5810: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f580c) {
            ctx->pc = 0x1F581Cu;
            goto label_1f581c;
        }
    }
    ctx->pc = 0x1F5814u;
    // 0x1f5814: 0xc07d60e  jal         func_1F5838
    ctx->pc = 0x1F5814u;
    SET_GPR_U32(ctx, 31, 0x1F581Cu);
    ctx->pc = 0x1F5838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5838u, 0x1F5814u, 0x1F581Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F581Cu;
label_1f581c:
    // 0x1f581c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f581cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5820: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f5820u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5824: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f5824u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f5828: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f5828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f582c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F582Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F582Cu;
        // 0x1f5830: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F582Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5834u;
}
