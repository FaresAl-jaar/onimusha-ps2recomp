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

// Function: sub_002FEF40
// Address: 0x2fef40 - 0x2fefb0
void sub_002FEF40_0x2fef40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FEF40_0x2fef40");
#endif

    switch (ctx->pc) {
        case 0x2fef80u: goto label_2fef80;
        case 0x2fef98u: goto label_2fef98;
        default: break;
    }

    ctx->pc = 0x2fef40u;

    // 0x2fef40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fef40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fef44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fef44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2fef48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fef48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2fef4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fef4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2fef50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fef50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fef54: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2FEF54u;
    {
        const bool branch_taken_0x2fef54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEF54u;
        // 0x2fef58: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fef54) {
            ctx->pc = 0x2FEF98u;
            goto label_2fef98;
        }
    }
    ctx->pc = 0x2FEF5Cu;
    // 0x2fef5c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2fef5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2fef60: 0x24427f60  addiu       $v0, $v0, 0x7F60
    ctx->pc = 0x2fef60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32608));
    // 0x2fef64: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FEF64u;
    {
        const bool branch_taken_0x2fef64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEF64u;
        // 0x2fef68: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fef64) {
            ctx->pc = 0x2FEF80u;
            goto label_2fef80;
        }
    }
    ctx->pc = 0x2FEF6Cu;
    // 0x2fef6c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2fef6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2fef70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fef70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fef74: 0x24427f80  addiu       $v0, $v0, 0x7F80
    ctx->pc = 0x2fef74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32640));
    // 0x2fef78: 0xc096b20  jal         func_25AC80
    ctx->pc = 0x2FEF78u;
    SET_GPR_U32(ctx, 31, 0x2FEF80u);
    ctx->pc = 0x2FEF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEF78u;
    // 0x2fef7c: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC80u, 0x2FEF78u, 0x2FEF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEF80u;
label_2fef80:
    // 0x2fef80: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2fef80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2fef84: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2fef84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2fef88: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FEF88u;
    {
        const bool branch_taken_0x2fef88 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2FEF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEF88u;
        // 0x2fef8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fef88) {
            ctx->pc = 0x2FEF98u;
            goto label_2fef98;
        }
    }
    ctx->pc = 0x2FEF90u;
    // 0x2fef90: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x2FEF90u;
    SET_GPR_U32(ctx, 31, 0x2FEF98u);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x2FEF90u, 0x2FEF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEF98u;
label_2fef98:
    // 0x2fef98: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2fef98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fef9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fef9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fefa0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fefa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fefa4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fefa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fefa8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FEFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FEFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEFA8u;
        // 0x2fefac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FEFA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FEFB0u;
}
