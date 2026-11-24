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

// Function: sub_002FE900
// Address: 0x2fe900 - 0x2fe9b0
void sub_002FE900_0x2fe900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE900_0x2fe900");
#endif

    switch (ctx->pc) {
        case 0x2fe930u: goto label_2fe930;
        case 0x2fe97cu: goto label_2fe97c;
        case 0x2fe98cu: goto label_2fe98c;
        case 0x2fe99cu: goto label_2fe99c;
        default: break;
    }

    ctx->pc = 0x2fe900u;

    // 0x2fe900: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2fe900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2fe904: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2fe904u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe908: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fe908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2fe90c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fe90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2fe910: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fe910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2fe914: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fe914u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe918: 0xac8700fc  sw          $a3, 0xFC($a0)
    ctx->pc = 0x2fe918u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 252), GPR_U32(ctx, 7));
    // 0x2fe91c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2fe91cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe920: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x2fe920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2fe924: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fe924u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe928: 0xc096fd8  jal         func_25BF60
    ctx->pc = 0x2FE928u;
    SET_GPR_U32(ctx, 31, 0x2FE930u);
    ctx->pc = 0x2FE92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE928u;
    // 0x2fe92c: 0x262400a0  addiu       $a0, $s1, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BF60u, 0x2FE928u, 0x2FE930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE930u;
label_2fe930:
    // 0x2fe930: 0x8e2200fc  lw          $v0, 0xFC($s1)
    ctx->pc = 0x2fe930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
    // 0x2fe934: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2FE934u;
    {
        const bool branch_taken_0x2fe934 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x2fe934) {
            ctx->pc = 0x2FE940u;
            goto label_2fe940;
        }
    }
    ctx->pc = 0x2FE93Cu;
    // 0x2fe93c: 0xae2000fc  sw          $zero, 0xFC($s1)
    ctx->pc = 0x2fe93cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 252), GPR_U32(ctx, 0));
label_2fe940:
    // 0x2fe940: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x2fe940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x2fe944: 0x78225c10  lq          $v0, 0x5C10($at)
    ctx->pc = 0x2fe944u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C10u));
    // 0x2fe948: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2fe948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2fe94c: 0x262500f0  addiu       $a1, $s1, 0xF0
    ctx->pc = 0x2fe94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    // 0x2fe950: 0x7e2200d0  sq          $v0, 0xD0($s1)
    ctx->pc = 0x2fe950u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 208), GPR_VEC(ctx, 2));
    // 0x2fe954: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x2fe954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x2fe958: 0x78225c80  lq          $v0, 0x5C80($at)
    ctx->pc = 0x2fe958u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C80u));
    // 0x2fe95c: 0x7e2200e0  sq          $v0, 0xE0($s1)
    ctx->pc = 0x2fe95cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 224), GPR_VEC(ctx, 2));
    // 0x2fe960: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x2fe960u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fe964: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x2fe964u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    // 0x2fe968: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x2fe968u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2fe96c: 0xae2200f4  sw          $v0, 0xF4($s1)
    ctx->pc = 0x2fe96cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
    // 0x2fe970: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x2fe970u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2fe974: 0xc076570  jal         func_1D95C0
    ctx->pc = 0x2FE974u;
    SET_GPR_U32(ctx, 31, 0x2FE97Cu);
    ctx->pc = 0x2FE978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE974u;
    // 0x2fe978: 0xae2200f8  sw          $v0, 0xF8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D95C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D95C0u, 0x2FE974u, 0x2FE97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE97Cu;
label_2fe97c:
    // 0x2fe97c: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x2fe97cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x2fe980: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2fe980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2fe984: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x2FE984u;
    SET_GPR_U32(ctx, 31, 0x2FE98Cu);
    ctx->pc = 0x2FE988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE984u;
    // 0x2fe988: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x2FE984u, 0x2FE98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE98Cu;
label_2fe98c:
    // 0x2fe98c: 0x262400e0  addiu       $a0, $s1, 0xE0
    ctx->pc = 0x2fe98cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x2fe990: 0x262500a0  addiu       $a1, $s1, 0xA0
    ctx->pc = 0x2fe990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x2fe994: 0xc0767a8  jal         func_1D9EA0
    ctx->pc = 0x2FE994u;
    SET_GPR_U32(ctx, 31, 0x2FE99Cu);
    ctx->pc = 0x2FE998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE994u;
    // 0x2fe998: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9EA0u, 0x2FE994u, 0x2FE99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE99Cu;
label_2fe99c:
    // 0x2fe99c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fe99cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fe9a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fe9a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fe9a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fe9a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe9a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE9A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE9A8u;
        // 0x2fe9ac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE9A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE9B0u;
}
