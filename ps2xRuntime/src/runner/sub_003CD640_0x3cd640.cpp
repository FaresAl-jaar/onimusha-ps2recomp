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

// Function: sub_003CD640
// Address: 0x3cd640 - 0x3cd6a8
void sub_003CD640_0x3cd640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CD640_0x3cd640");
#endif

    switch (ctx->pc) {
        case 0x3cd688u: goto label_3cd688;
        default: break;
    }

    ctx->pc = 0x3cd640u;

    // 0x3cd640: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3cd640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3cd644: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x3cd644u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x3cd648: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3cd648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3cd64c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3cd64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3cd650: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3cd650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3cd654: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3cd654u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd658: 0x30a6ffff  andi        $a2, $a1, 0xFFFF
    ctx->pc = 0x3cd658u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x3cd65c: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x3cd65cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x3cd660: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x3cd660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd664: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3cd664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3cd668: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3cd668u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3cd66c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3cd66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3cd670: 0x247101c4  addiu       $s1, $v1, 0x1C4
    ctx->pc = 0x3cd670u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 452));
    // 0x3cd674: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x3cd674u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x3cd678: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3cd678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3cd67c: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x3cd67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x3cd680: 0xc0bce3c  jal         func_2F38F0
    ctx->pc = 0x3CD680u;
    SET_GPR_U32(ctx, 31, 0x3CD688u);
    ctx->pc = 0x3CD684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD680u;
    // 0x3cd684: 0xa4470000  sh          $a3, 0x0($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F38F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F38F0u, 0x3CD680u, 0x3CD688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD688u;
label_3cd688:
    // 0x3cd688: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x3cd688u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x3cd68c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3cd68cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3cd690: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x3cd690u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x3cd694: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3cd694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3cd698: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3cd698u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3cd69c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3cd69cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3cd6a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3CD6A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CD6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD6A0u;
        // 0x3cd6a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CD6A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CD6A8u;
}
