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

// Function: sub_0020CB40
// Address: 0x20cb40 - 0x20cba0
void sub_0020CB40_0x20cb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020CB40_0x20cb40");
#endif

    switch (ctx->pc) {
        case 0x20cb90u: goto label_20cb90;
        default: break;
    }

    ctx->pc = 0x20cb40u;

    // 0x20cb40: 0x24020120  addiu       $v0, $zero, 0x120
    ctx->pc = 0x20cb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    // 0x20cb44: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20cb44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20cb48: 0x28a50120  slti        $a1, $a1, 0x120
    ctx->pc = 0x20cb48u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)288) ? 1 : 0);
    // 0x20cb4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20cb4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20cb50: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x20cb50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x20cb54: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x20cb54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cb58: 0x14a0000e  bnez        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x20CB58u;
    {
        const bool branch_taken_0x20cb58 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x20CB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CB58u;
        // 0x20cb5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cb58) {
            ctx->pc = 0x20CB94u;
            goto label_20cb94;
        }
    }
    ctx->pc = 0x20CB60u;
    // 0x20cb60: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x20cb60u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20cb64: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x20cb64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x20cb68: 0x5483000b  bnel        $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x20CB68u;
    {
        const bool branch_taken_0x20cb68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x20cb68) {
            ctx->pc = 0x20CB6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20CB68u;
            // 0x20cb6c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20CB98u;
            goto label_20cb98;
        }
    }
    ctx->pc = 0x20CB70u;
    // 0x20cb70: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x20cb70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x20cb74: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x20CB74u;
    {
        const bool branch_taken_0x20cb74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20cb74) {
            ctx->pc = 0x20CB78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20CB74u;
            // 0x20cb78: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20CB98u;
            goto label_20cb98;
        }
    }
    ctx->pc = 0x20CB7Cu;
    // 0x20cb7c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x20cb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x20cb80: 0x24c4011a  addiu       $a0, $a2, 0x11A
    ctx->pc = 0x20cb80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 282));
    // 0x20cb84: 0x24a58778  addiu       $a1, $a1, -0x7888
    ctx->pc = 0x20cb84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936440));
    // 0x20cb88: 0xc049fd2  jal         func_127F48
    ctx->pc = 0x20CB88u;
    SET_GPR_U32(ctx, 31, 0x20CB90u);
    ctx->pc = 0x20CB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CB88u;
    // 0x20cb8c: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127F48u, 0x20CB88u, 0x20CB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CB90u;
label_20cb90:
    // 0x20cb90: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x20cb90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_20cb94:
    // 0x20cb94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20cb94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20cb98:
    // 0x20cb98: 0x3e00008  jr          $ra
    ctx->pc = 0x20CB98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CB98u;
        // 0x20cb9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CB98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20CBA0u;
}
