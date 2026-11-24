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

// Function: sub_002A4660
// Address: 0x2a4660 - 0x2a4714
void sub_002A4660_0x2a4660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4660_0x2a4660");
#endif

    switch (ctx->pc) {
        case 0x2a46a4u: goto label_2a46a4;
        case 0x2a46d0u: goto label_2a46d0;
        case 0x2a46f8u: goto label_2a46f8;
        default: break;
    }

    ctx->pc = 0x2a4660u;

    // 0x2a4660: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a4660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2a4664: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2a4664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2a4668: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2a4668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2a466c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2a466cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2a4670: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2a4670u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4674: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a4674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2a4678: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2a4678u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a467c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a467cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a4680: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2a4680u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4684: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2a4684u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4688: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2a4688u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2a468c: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x2a468cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x2a4690: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2a4690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2a4694: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a4694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a4698: 0x24c6d220  addiu       $a2, $a2, -0x2DE0
    ctx->pc = 0x2a4698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955552));
    // 0x2a469c: 0xc05edcc  jal         func_17B730
    ctx->pc = 0x2A469Cu;
    SET_GPR_U32(ctx, 31, 0x2A46A4u);
    ctx->pc = 0x2A46A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A469Cu;
    // 0x2a46a0: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B730u, 0x2A469Cu, 0x2A46A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A46A4u;
label_2a46a4:
    // 0x2a46a4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2a46a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2a46a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a46a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a46ac: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2a46acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2a46b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a46b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a46b4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2a46b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a46b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a46b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a46bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a46bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a46c0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a46c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a46c4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2a46c4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a46c8: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x2A46C8u;
    SET_GPR_U32(ctx, 31, 0x2A46D0u);
    ctx->pc = 0x2A46CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A46C8u;
    // 0x2a46cc: 0xffb20000  sd          $s2, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x2A46C8u, 0x2A46D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A46D0u;
label_2a46d0:
    // 0x2a46d0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2a46d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a46d4: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x2a46d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a46d8: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x2a46d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a46dc: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x2a46dcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a46e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a46e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a46e4: 0x24051b70  addiu       $a1, $zero, 0x1B70
    ctx->pc = 0x2a46e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7024));
    // 0x2a46e8: 0x24060330  addiu       $a2, $zero, 0x330
    ctx->pc = 0x2a46e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 816));
    // 0x2a46ec: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a46ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a46f0: 0xc097bb8  jal         func_25EEE0
    ctx->pc = 0x2A46F0u;
    SET_GPR_U32(ctx, 31, 0x2A46F8u);
    ctx->pc = 0x2A46F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A46F0u;
    // 0x2a46f4: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EEE0u, 0x2A46F0u, 0x2A46F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A46F8u;
label_2a46f8:
    // 0x2a46f8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2a46f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a46fc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2a46fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a4700: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2a4700u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a4704: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2a4704u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a4708: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a4708u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a470c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A470Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A470Cu;
        // 0x2a4710: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A470Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4714u;
}
