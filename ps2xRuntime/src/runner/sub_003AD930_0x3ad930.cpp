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

// Function: sub_003AD930
// Address: 0x3ad930 - 0x3ad9dc
void sub_003AD930_0x3ad930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AD930_0x3ad930");
#endif

    switch (ctx->pc) {
        case 0x3ad9b8u: goto label_3ad9b8;
        default: break;
    }

    ctx->pc = 0x3ad930u;

    // 0x3ad930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ad930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ad934: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3ad934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3ad938: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ad938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3ad93c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3ad93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3ad940: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ad940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3ad944: 0x902399f4  lbu         $v1, -0x660C($at)
    ctx->pc = 0x3ad944u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x9299F4u));
    // 0x3ad948: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AD948u;
    {
        const bool branch_taken_0x3ad948 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3AD94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD948u;
        // 0x3ad94c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad948) {
            ctx->pc = 0x3AD958u;
            goto label_3ad958;
        }
    }
    ctx->pc = 0x3AD950u;
    // 0x3ad950: 0x36100001  ori         $s0, $s0, 0x1
    ctx->pc = 0x3ad950u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
    // 0x3ad954: 0x0  nop
    ctx->pc = 0x3ad954u;
    // NOP
label_3ad958:
    // 0x3ad958: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3ad958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3ad95c: 0x8c2399f8  lw          $v1, -0x6608($at)
    ctx->pc = 0x3ad95cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x9299F8u));
    // 0x3ad960: 0x24020090  addiu       $v0, $zero, 0x90
    ctx->pc = 0x3ad960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x3ad964: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3AD964u;
    {
        const bool branch_taken_0x3ad964 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ad964) {
            ctx->pc = 0x3AD970u;
            goto label_3ad970;
        }
    }
    ctx->pc = 0x3AD96Cu;
    // 0x3ad96c: 0x36100002  ori         $s0, $s0, 0x2
    ctx->pc = 0x3ad96cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2);
label_3ad970:
    // 0x3ad970: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3ad970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3ad974: 0x8c2399fc  lw          $v1, -0x6604($at)
    ctx->pc = 0x3ad974u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x9299FCu));
    // 0x3ad978: 0x24020330  addiu       $v0, $zero, 0x330
    ctx->pc = 0x3ad978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 816));
    // 0x3ad97c: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3AD97Cu;
    {
        const bool branch_taken_0x3ad97c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ad97c) {
            ctx->pc = 0x3AD988u;
            goto label_3ad988;
        }
    }
    ctx->pc = 0x3AD984u;
    // 0x3ad984: 0x36100004  ori         $s0, $s0, 0x4
    ctx->pc = 0x3ad984u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4);
label_3ad988:
    // 0x3ad988: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3ad988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3ad98c: 0x8c239a00  lw          $v1, -0x6600($at)
    ctx->pc = 0x3ad98cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x929A00u));
    // 0x3ad990: 0x24025eb0  addiu       $v0, $zero, 0x5EB0
    ctx->pc = 0x3ad990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24240));
    // 0x3ad994: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3AD994u;
    {
        const bool branch_taken_0x3ad994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ad994) {
            ctx->pc = 0x3AD9A0u;
            goto label_3ad9a0;
        }
    }
    ctx->pc = 0x3AD99Cu;
    // 0x3ad99c: 0x36100008  ori         $s0, $s0, 0x8
    ctx->pc = 0x3ad99cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8);
label_3ad9a0:
    // 0x3ad9a0: 0x80850007  lb          $a1, 0x7($a0)
    ctx->pc = 0x3ad9a0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x3ad9a4: 0x3c060068  lui         $a2, 0x68
    ctx->pc = 0x3ad9a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)104 << 16));
    // 0x3ad9a8: 0x24c628b8  addiu       $a2, $a2, 0x28B8
    ctx->pc = 0x3ad9a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10424));
    // 0x3ad9ac: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3ad9acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3ad9b0: 0xc052ba0  jal         func_14AE80
    ctx->pc = 0x3AD9B0u;
    SET_GPR_U32(ctx, 31, 0x3AD9B8u);
    ctx->pc = 0x3AD9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD9B0u;
    // 0x3ad9b4: 0x24848c10  addiu       $a0, $a0, -0x73F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AE80u, 0x3AD9B0u, 0x3AD9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD9B8u;
label_3ad9b8:
    // 0x3ad9b8: 0x240303c4  addiu       $v1, $zero, 0x3C4
    ctx->pc = 0x3ad9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
    // 0x3ad9bc: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3AD9BCu;
    {
        const bool branch_taken_0x3ad9bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ad9bc) {
            ctx->pc = 0x3AD9C8u;
            goto label_3ad9c8;
        }
    }
    ctx->pc = 0x3AD9C4u;
    // 0x3ad9c4: 0x36100010  ori         $s0, $s0, 0x10
    ctx->pc = 0x3ad9c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)16);
label_3ad9c8:
    // 0x3ad9c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3ad9c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad9cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ad9ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ad9d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ad9d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ad9d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3AD9D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AD9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD9D4u;
        // 0x3ad9d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD9D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AD9DCu;
}
