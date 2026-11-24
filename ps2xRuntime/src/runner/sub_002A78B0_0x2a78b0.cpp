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

// Function: sub_002A78B0
// Address: 0x2a78b0 - 0x2a7978
void sub_002A78B0_0x2a78b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A78B0_0x2a78b0");
#endif

    switch (ctx->pc) {
        case 0x2a7924u: goto label_2a7924;
        case 0x2a7958u: goto label_2a7958;
        default: break;
    }

    ctx->pc = 0x2a78b0u;

    // 0x2a78b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2a78b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2a78b4: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x2a78b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2a78b8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2a78b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2a78bc: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2a78bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2a78c0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2a78c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x2a78c4: 0x3c021400  lui         $v0, 0x1400
    ctx->pc = 0x2a78c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5120 << 16));
    // 0x2a78c8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2a78c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2a78cc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2a78ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a78d0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2a78d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2a78d4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2a78d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a78d8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2a78d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2a78dc: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2a78dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2a78e0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2a78e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2a78e4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2a78e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a78e8: 0xffb30000  sd          $s3, 0x0($sp)
    ctx->pc = 0x2a78e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 19));
    // 0x2a78ec: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2a78ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a78f0: 0x8cc6004c  lw          $a2, 0x4C($a2)
    ctx->pc = 0x2a78f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 76)));
    // 0x2a78f4: 0x34458c02  ori         $a1, $v0, 0x8C02
    ctx->pc = 0x2a78f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35842);
    // 0x2a78f8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2a78f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a78fc: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2a78fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2a7900: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a7900u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7904: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a7904u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7908: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a7908u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a790c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2a790cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7910: 0x8cc20094  lw          $v0, 0x94($a2)
    ctx->pc = 0x2a7910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 148)));
    // 0x2a7914: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a7914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a7918: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a7918u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a791c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x2A791Cu;
    SET_GPR_U32(ctx, 31, 0x2A7924u);
    ctx->pc = 0x2A7920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A791Cu;
    // 0x2a7920: 0x24470030  addiu       $a3, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x2A791Cu, 0x2A7924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7924u;
label_2a7924:
    // 0x2a7924: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2a7924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2a7928: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2a7928u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a792c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2a792cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2a7930: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x2a7930u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7934: 0xffb00008  sd          $s0, 0x8($sp)
    ctx->pc = 0x2a7934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 16));
    // 0x2a7938: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x2a7938u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a793c: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x2a793cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7940: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a7940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7944: 0x3405e850  ori         $a1, $zero, 0xE850
    ctx->pc = 0x2a7944u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59472);
    // 0x2a7948: 0x24060058  addiu       $a2, $zero, 0x58
    ctx->pc = 0x2a7948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x2a794c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a794cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a7950: 0xc097df4  jal         func_25F7D0
    ctx->pc = 0x2A7950u;
    SET_GPR_U32(ctx, 31, 0x2A7958u);
    ctx->pc = 0x2A7954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7950u;
    // 0x2a7954: 0xffa00010  sd          $zero, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F7D0u, 0x2A7950u, 0x2A7958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7958u;
label_2a7958:
    // 0x2a7958: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2a7958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a795c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2a795cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a7960: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2a7960u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a7964: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2a7964u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a7968: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2a7968u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a796c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2a796cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a7970: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7970u;
        // 0x2a7974: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7978u;
}
