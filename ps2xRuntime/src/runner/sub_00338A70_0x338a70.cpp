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

// Function: sub_00338A70
// Address: 0x338a70 - 0x338b18
void sub_00338A70_0x338a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338A70_0x338a70");
#endif

    switch (ctx->pc) {
        case 0x338aa0u: goto label_338aa0;
        case 0x338ab8u: goto label_338ab8;
        case 0x338ad0u: goto label_338ad0;
        case 0x338ae8u: goto label_338ae8;
        case 0x338b00u: goto label_338b00;
        default: break;
    }

    ctx->pc = 0x338a70u;

    // 0x338a70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x338a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x338a74: 0x24070dc0  addiu       $a3, $zero, 0xDC0
    ctx->pc = 0x338a74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3520));
    // 0x338a78: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x338a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x338a7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x338a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x338a80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x338a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x338a84: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x338a84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338a88: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x338a88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338a8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x338a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x338a90: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x338a90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338a94: 0x2645000c  addiu       $a1, $s2, 0xC
    ctx->pc = 0x338a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x338a98: 0xc0ce2c8  jal         func_338B20
    ctx->pc = 0x338A98u;
    SET_GPR_U32(ctx, 31, 0x338AA0u);
    ctx->pc = 0x338A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338A98u;
    // 0x338a9c: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338B20u, 0x338A98u, 0x338AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338AA0u;
label_338aa0:
    // 0x338aa0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x338aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338aa4: 0x26450dcc  addiu       $a1, $s2, 0xDCC
    ctx->pc = 0x338aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 3532));
    // 0x338aa8: 0x26060dc0  addiu       $a2, $s0, 0xDC0
    ctx->pc = 0x338aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 3520));
    // 0x338aac: 0x24070042  addiu       $a3, $zero, 0x42
    ctx->pc = 0x338aacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x338ab0: 0xc0ce2c8  jal         func_338B20
    ctx->pc = 0x338AB0u;
    SET_GPR_U32(ctx, 31, 0x338AB8u);
    ctx->pc = 0x338AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338AB0u;
    // 0x338ab4: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338B20u, 0x338AB0u, 0x338AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338AB8u;
label_338ab8:
    // 0x338ab8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x338ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338abc: 0x26450e0e  addiu       $a1, $s2, 0xE0E
    ctx->pc = 0x338abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 3598));
    // 0x338ac0: 0x26060e02  addiu       $a2, $s0, 0xE02
    ctx->pc = 0x338ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 3586));
    // 0x338ac4: 0x24070036  addiu       $a3, $zero, 0x36
    ctx->pc = 0x338ac4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x338ac8: 0xc0ce2c8  jal         func_338B20
    ctx->pc = 0x338AC8u;
    SET_GPR_U32(ctx, 31, 0x338AD0u);
    ctx->pc = 0x338ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338AC8u;
    // 0x338acc: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338B20u, 0x338AC8u, 0x338AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338AD0u;
label_338ad0:
    // 0x338ad0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x338ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338ad4: 0x26450e7a  addiu       $a1, $s2, 0xE7A
    ctx->pc = 0x338ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 3706));
    // 0x338ad8: 0x26060e38  addiu       $a2, $s0, 0xE38
    ctx->pc = 0x338ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 3640));
    // 0x338adc: 0x24070036  addiu       $a3, $zero, 0x36
    ctx->pc = 0x338adcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x338ae0: 0xc0ce2c8  jal         func_338B20
    ctx->pc = 0x338AE0u;
    SET_GPR_U32(ctx, 31, 0x338AE8u);
    ctx->pc = 0x338AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338AE0u;
    // 0x338ae4: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338B20u, 0x338AE0u, 0x338AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338AE8u;
label_338ae8:
    // 0x338ae8: 0x26060e6e  addiu       $a2, $s0, 0xE6E
    ctx->pc = 0x338ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 3694));
    // 0x338aec: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x338aecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338af0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x338af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338af4: 0x26450ee6  addiu       $a1, $s2, 0xEE6
    ctx->pc = 0x338af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 3814));
    // 0x338af8: 0xc0ce2c8  jal         func_338B20
    ctx->pc = 0x338AF8u;
    SET_GPR_U32(ctx, 31, 0x338B00u);
    ctx->pc = 0x338AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338AF8u;
    // 0x338afc: 0x24070035  addiu       $a3, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338B20u, 0x338AF8u, 0x338B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338B00u;
label_338b00:
    // 0x338b00: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x338b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x338b04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x338b04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x338b08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x338b08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x338b0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x338b0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x338b10: 0x3e00008  jr          $ra
    ctx->pc = 0x338B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338B10u;
        // 0x338b14: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338B10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338B18u;
}
