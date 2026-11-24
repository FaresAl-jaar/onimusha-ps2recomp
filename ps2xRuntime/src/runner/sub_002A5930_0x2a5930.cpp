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

// Function: sub_002A5930
// Address: 0x2a5930 - 0x2a5a1c
void sub_002A5930_0x2a5930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5930_0x2a5930");
#endif

    switch (ctx->pc) {
        case 0x2a5980u: goto label_2a5980;
        case 0x2a599cu: goto label_2a599c;
        case 0x2a59c8u: goto label_2a59c8;
        case 0x2a59fcu: goto label_2a59fc;
        default: break;
    }

    ctx->pc = 0x2a5930u;

    // 0x2a5930: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2a5930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2a5934: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x2a5934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2a5938: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2a5938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2a593c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2a593cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2a5940: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2a5940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x2a5944: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2a5944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2a5948: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2a5948u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a594c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2a594cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2a5950: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2a5950u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5954: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2a5954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2a5958: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2a5958u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a595c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2a595cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2a5960: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2a5960u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5964: 0x8cc5004c  lw          $a1, 0x4C($a2)
    ctx->pc = 0x2a5964u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 76)));
    // 0x2a5968: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2a5968u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a596c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2a596cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a5970: 0x8ca20094  lw          $v0, 0x94($a1)
    ctx->pc = 0x2a5970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
    // 0x2a5974: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a5974u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5978: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x2A5978u;
    SET_GPR_U32(ctx, 31, 0x2A5980u);
    ctx->pc = 0x2A597Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5978u;
    // 0x2a597c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x2A5978u, 0x2A5980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5980u;
label_2a5980:
    // 0x2a5980: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2a5980u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2a5984: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x2a5984u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x2a5988: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2a5988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2a598c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2a598cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a5990: 0x24c6b3f8  addiu       $a2, $a2, -0x4C08
    ctx->pc = 0x2a5990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947832));
    // 0x2a5994: 0xc05edcc  jal         func_17B730
    ctx->pc = 0x2A5994u;
    SET_GPR_U32(ctx, 31, 0x2A599Cu);
    ctx->pc = 0x2A5998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5994u;
    // 0x2a5998: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B730u, 0x2A5994u, 0x2A599Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A599Cu;
label_2a599c:
    // 0x2a599c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2a599cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2a59a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a59a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a59a4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2a59a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2a59a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a59a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a59ac: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x2a59acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a59b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a59b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a59b4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a59b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a59b8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a59b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a59bc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2a59bcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a59c0: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x2A59C0u;
    SET_GPR_U32(ctx, 31, 0x2A59C8u);
    ctx->pc = 0x2A59C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A59C0u;
    // 0x2a59c4: 0xffb30000  sd          $s3, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x2A59C0u, 0x2A59C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A59C8u;
label_2a59c8:
    // 0x2a59c8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2a59c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2a59cc: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2a59ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a59d0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2a59d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2a59d4: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x2a59d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a59d8: 0xffb00008  sd          $s0, 0x8($sp)
    ctx->pc = 0x2a59d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 16));
    // 0x2a59dc: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x2a59dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a59e0: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x2a59e0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a59e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a59e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a59e8: 0x24056340  addiu       $a1, $zero, 0x6340
    ctx->pc = 0x2a59e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25408));
    // 0x2a59ec: 0x2406029c  addiu       $a2, $zero, 0x29C
    ctx->pc = 0x2a59ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    // 0x2a59f0: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a59f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a59f4: 0xc097df4  jal         func_25F7D0
    ctx->pc = 0x2A59F4u;
    SET_GPR_U32(ctx, 31, 0x2A59FCu);
    ctx->pc = 0x2A59F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A59F4u;
    // 0x2a59f8: 0xffa00010  sd          $zero, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F7D0u, 0x2A59F4u, 0x2A59FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A59FCu;
label_2a59fc:
    // 0x2a59fc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2a59fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a5a00: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2a5a00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a5a04: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2a5a04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a5a08: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2a5a08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a5a0c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2a5a0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a5a10: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2a5a10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a5a14: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5A14u;
        // 0x2a5a18: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A5A1Cu;
}
