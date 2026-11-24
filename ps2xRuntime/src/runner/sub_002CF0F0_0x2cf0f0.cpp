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

// Function: sub_002CF0F0
// Address: 0x2cf0f0 - 0x2cf14c
void sub_002CF0F0_0x2cf0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF0F0_0x2cf0f0");
#endif

    switch (ctx->pc) {
        case 0x2cf10cu: goto label_2cf10c;
        default: break;
    }

    ctx->pc = 0x2cf0f0u;

    // 0x2cf0f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cf0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cf0f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cf0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2cf0f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cf0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cf0fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cf0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cf100: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2cf100u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf104: 0xc0a5fcc  jal         func_297F30
    ctx->pc = 0x2CF104u;
    SET_GPR_U32(ctx, 31, 0x2CF10Cu);
    ctx->pc = 0x2CF108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF104u;
    // 0x2cf108: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297F30u, 0x2CF104u, 0x2CF10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF10Cu;
label_2cf10c:
    // 0x2cf10c: 0x2301821  addu        $v1, $s1, $s0
    ctx->pc = 0x2cf10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2cf110: 0x24652b5c  addiu       $a1, $v1, 0x2B5C
    ctx->pc = 0x2cf110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 11100));
    // 0x2cf114: 0x90632b5c  lbu         $v1, 0x2B5C($v1)
    ctx->pc = 0x2cf114u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11100)));
    // 0x2cf118: 0x286100ff  slti        $at, $v1, 0xFF
    ctx->pc = 0x2cf118u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x2cf11c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CF11Cu;
    {
        const bool branch_taken_0x2cf11c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF11Cu;
        // 0x2cf120: 0x24640001  addiu       $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf11c) {
            ctx->pc = 0x2CF130u;
            goto label_2cf130;
        }
    }
    ctx->pc = 0x2CF124u;
    // 0x2cf124: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cf124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cf128: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x2cf128u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2cf12c: 0xa20329d1  sb          $v1, 0x29D1($s0)
    ctx->pc = 0x2cf12cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10705), (uint8_t)GPR_U32(ctx, 3));
label_2cf130:
    // 0x2cf130: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cf130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cf134: 0xa2032b5a  sb          $v1, 0x2B5A($s0)
    ctx->pc = 0x2cf134u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11098), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cf138: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cf138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cf13c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cf13cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf140: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cf140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf144: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF144u;
        // 0x2cf148: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF14Cu;
}
