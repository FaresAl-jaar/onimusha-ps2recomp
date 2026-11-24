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

// Function: sub_00248A18
// Address: 0x248a18 - 0x248a6c
void sub_00248A18_0x248a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248A18_0x248a18");
#endif

    switch (ctx->pc) {
        case 0x248a3cu: goto label_248a3c;
        case 0x248a48u: goto label_248a48;
        default: break;
    }

    ctx->pc = 0x248a18u;

    // 0x248a18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x248a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x248a1c: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x248a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x248a20: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x248a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x248a24: 0x58e00  sll         $s1, $a1, 24
    ctx->pc = 0x248a24u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x248a28: 0x118e03  sra         $s1, $s1, 24
    ctx->pc = 0x248a28u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 24));
    // 0x248a2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x248a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x248a30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x248a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x248a34: 0xc092278  jal         func_2489E0
    ctx->pc = 0x248A34u;
    SET_GPR_U32(ctx, 31, 0x248A3Cu);
    ctx->pc = 0x248A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248A34u;
    // 0x248a38: 0x42603  sra         $a0, $a0, 24 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2489E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2489E0u, 0x248A34u, 0x248A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248A3Cu;
label_248a3c:
    // 0x248a3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x248a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248a40: 0xc092278  jal         func_2489E0
    ctx->pc = 0x248A40u;
    SET_GPR_U32(ctx, 31, 0x248A48u);
    ctx->pc = 0x248A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248A40u;
    // 0x248a44: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2489E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2489E0u, 0x248A40u, 0x248A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248A48u;
label_248a48:
    // 0x248a48: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x248a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x248a4c: 0x2028026  xor         $s0, $s0, $v0
    ctx->pc = 0x248a4cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x248a50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x248a50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248a54: 0x70100b  movn        $v0, $v1, $s0
    ctx->pc = 0x248a54u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x248a58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x248a58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248a5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x248a5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x248a60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x248a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248a64: 0x3e00008  jr          $ra
    ctx->pc = 0x248A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248A64u;
        // 0x248a68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248A64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248A6Cu;
}
