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

// Function: sub_001D16B0
// Address: 0x1d16b0 - 0x1d1734
void sub_001D16B0_0x1d16b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D16B0_0x1d16b0");
#endif

    switch (ctx->pc) {
        case 0x1d16e0u: goto label_1d16e0;
        case 0x1d171cu: goto label_1d171c;
        default: break;
    }

    ctx->pc = 0x1d16b0u;

    // 0x1d16b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d16b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d16b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d16b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d16b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d16b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d16bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d16bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d16c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d16c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d16c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d16c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d16c8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d16c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d16cc: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x1d16ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x1d16d0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1d16d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d16d4: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x1d16d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x1d16d8: 0xc05e360  jal         func_178D80
    ctx->pc = 0x1D16D8u;
    SET_GPR_U32(ctx, 31, 0x1D16E0u);
    ctx->pc = 0x1D16DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D16D8u;
    // 0x1d16dc: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x1D16D8u, 0x1D16E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D16E0u;
label_1d16e0:
    // 0x1d16e0: 0x2e030008  sltiu       $v1, $s0, 0x8
    ctx->pc = 0x1d16e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d16e4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D16E4u;
    {
        const bool branch_taken_0x1d16e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d16e4) {
            ctx->pc = 0x1D16F0u;
            goto label_1d16f0;
        }
    }
    ctx->pc = 0x1D16ECu;
    // 0x1d16ec: 0x24100007  addiu       $s0, $zero, 0x7
    ctx->pc = 0x1d16ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1d16f0:
    // 0x1d16f0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1d16f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1d16f4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1d16f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1d16f8: 0x3c030808  lui         $v1, 0x808
    ctx->pc = 0x1d16f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2056 << 16));
    // 0x1d16fc: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1d16fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1d1700: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x1d1700u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x1d1704: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x1d1704u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
    // 0x1d1708: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d1708u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d170c: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x1d170cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x1d1710: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d1710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1714: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x1D1714u;
    SET_GPR_U32(ctx, 31, 0x1D171Cu);
    ctx->pc = 0x1D1718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1714u;
    // 0x1d1718: 0xac51000c  sw          $s1, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x1D1714u, 0x1D171Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D171Cu;
label_1d171c:
    // 0x1d171c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d171cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d1720: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d1720u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d1724: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d1724u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d1728: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d1728u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d172c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D172Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D172Cu;
        // 0x1d1730: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D172Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1734u;
}
