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

// Function: sub_00211E20
// Address: 0x211e20 - 0x211eb4
void sub_00211E20_0x211e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211E20_0x211e20");
#endif

    switch (ctx->pc) {
        case 0x211e50u: goto label_211e50;
        case 0x211e68u: goto label_211e68;
        case 0x211e80u: goto label_211e80;
        case 0x211e98u: goto label_211e98;
        default: break;
    }

    ctx->pc = 0x211e20u;

    // 0x211e20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x211e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x211e24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x211e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x211e28: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x211e28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211e2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x211e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x211e30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x211e30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211e34: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x211e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x211e38: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x211e38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211e3c: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x211E3Cu;
    {
        const bool branch_taken_0x211e3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x211E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211E3Cu;
        // 0x211e40: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211e3c) {
            ctx->pc = 0x211E9Cu;
            goto label_211e9c;
        }
    }
    ctx->pc = 0x211E44u;
    // 0x211e44: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x211e44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x211e48: 0xc084822  jal         func_212088
    ctx->pc = 0x211E48u;
    SET_GPR_U32(ctx, 31, 0x211E50u);
    ctx->pc = 0x211E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211E48u;
    // 0x211e4c: 0x24c645f8  addiu       $a2, $a2, 0x45F8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212088u, 0x211E48u, 0x211E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211E50u;
label_211e50:
    // 0x211e50: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x211e50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x211e54: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x211e54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x211e58: 0x24c64668  addiu       $a2, $a2, 0x4668
    ctx->pc = 0x211e58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18024));
    // 0x211e5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x211e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211e60: 0xc084822  jal         func_212088
    ctx->pc = 0x211E60u;
    SET_GPR_U32(ctx, 31, 0x211E68u);
    ctx->pc = 0x211E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211E60u;
    // 0x211e64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212088u, 0x211E60u, 0x211E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211E68u;
label_211e68:
    // 0x211e68: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x211e68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x211e6c: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x211e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x211e70: 0x24c646e8  addiu       $a2, $a2, 0x46E8
    ctx->pc = 0x211e70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18152));
    // 0x211e74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x211e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211e78: 0xc084822  jal         func_212088
    ctx->pc = 0x211E78u;
    SET_GPR_U32(ctx, 31, 0x211E80u);
    ctx->pc = 0x211E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211E78u;
    // 0x211e7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212088u, 0x211E78u, 0x211E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211E80u;
label_211e80:
    // 0x211e80: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x211e80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x211e84: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x211e84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x211e88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x211e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211e8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x211e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211e90: 0xc084822  jal         func_212088
    ctx->pc = 0x211E90u;
    SET_GPR_U32(ctx, 31, 0x211E98u);
    ctx->pc = 0x211E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211E90u;
    // 0x211e94: 0x24c64758  addiu       $a2, $a2, 0x4758 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212088u, 0x211E90u, 0x211E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211E98u;
label_211e98:
    // 0x211e98: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x211e98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_211e9c:
    // 0x211e9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x211e9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211ea0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x211ea0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x211ea4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x211ea4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211ea8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x211ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x211eac: 0x3e00008  jr          $ra
    ctx->pc = 0x211EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211EACu;
        // 0x211eb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211EACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211EB4u;
}
