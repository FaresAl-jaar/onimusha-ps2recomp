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

// Function: sub_002A7210
// Address: 0x2a7210 - 0x2a72b0
void sub_002A7210_0x2a7210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7210_0x2a7210");
#endif

    switch (ctx->pc) {
        case 0x2a7268u: goto label_2a7268;
        case 0x2a7294u: goto label_2a7294;
        default: break;
    }

    ctx->pc = 0x2a7210u;

    // 0x2a7210: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a7210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2a7214: 0x3c022600  lui         $v0, 0x2600
    ctx->pc = 0x2a7214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9728 << 16));
    // 0x2a7218: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2a7218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2a721c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a721cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7220: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2a7220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2a7224: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a7224u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7228: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2a7228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2a722c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2a722cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7230: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a7230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2a7234: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2a7234u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7238: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a7238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a723c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2a723cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7240: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2a7240u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7244: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2a7244u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2a7248: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2a7248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2a724c: 0x34458a02  ori         $a1, $v0, 0x8A02
    ctx->pc = 0x2a724cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35330);
    // 0x2a7250: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a7250u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7254: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2a7254u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7258: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a7258u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a725c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2a725cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7260: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x2A7260u;
    SET_GPR_U32(ctx, 31, 0x2A7268u);
    ctx->pc = 0x2A7264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7260u;
    // 0x2a7264: 0xffb20000  sd          $s2, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x2A7260u, 0x2A7268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7268u;
label_2a7268:
    // 0x2a7268: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a7268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a726c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2a726cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7270: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x2a7270u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7274: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x2a7274u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7278: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a7278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a727c: 0x3405c658  ori         $a1, $zero, 0xC658
    ctx->pc = 0x2a727cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50776);
    // 0x2a7280: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x2a7280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x2a7284: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a7284u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a7288: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a7288u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a728c: 0xc097cdc  jal         func_25F370
    ctx->pc = 0x2A728Cu;
    SET_GPR_U32(ctx, 31, 0x2A7294u);
    ctx->pc = 0x2A7290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A728Cu;
    // 0x2a7290: 0xffa00008  sd          $zero, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F370u, 0x2A728Cu, 0x2A7294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7294u;
label_2a7294:
    // 0x2a7294: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2a7294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a7298: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2a7298u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a729c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2a729cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a72a0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2a72a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a72a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a72a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a72a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A72A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A72ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A72A8u;
        // 0x2a72ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A72A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A72B0u;
}
