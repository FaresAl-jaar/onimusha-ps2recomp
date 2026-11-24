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

// Function: sub_0031FC30
// Address: 0x31fc30 - 0x31fd78
void sub_0031FC30_0x31fc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031FC30_0x31fc30");
#endif

    switch (ctx->pc) {
        case 0x31fd58u: goto label_31fd58;
        case 0x31fd68u: goto label_31fd68;
        default: break;
    }

    ctx->pc = 0x31fc30u;

    // 0x31fc30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31fc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31fc34: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x31fc34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x31fc38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31fc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31fc3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31fc3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31fc40: 0x8c225f08  lw          $v0, 0x5F08($at)
    ctx->pc = 0x31fc40u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x695F08u));
    // 0x31fc44: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x31fc44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x31fc48: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x31fc48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x31fc4c: 0x8c225f10  lw          $v0, 0x5F10($at)
    ctx->pc = 0x31fc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x695F10u));
    // 0x31fc50: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x31fc50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x31fc54: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x31fc54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x31fc58: 0x8c225f1c  lw          $v0, 0x5F1C($at)
    ctx->pc = 0x31fc58u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x695F1Cu));
    // 0x31fc5c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x31fc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x31fc60: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x31fc60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x31fc64: 0x8c225f64  lw          $v0, 0x5F64($at)
    ctx->pc = 0x31fc64u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x695F64u));
    // 0x31fc68: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x31fc68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x31fc6c: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x31fc6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x31fc70: 0x8c225f6c  lw          $v0, 0x5F6C($at)
    ctx->pc = 0x31fc70u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x695F6Cu));
    // 0x31fc74: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x31fc74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x31fc78: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x31fc78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x31fc7c: 0x8c225f78  lw          $v0, 0x5F78($at)
    ctx->pc = 0x31fc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x695F78u));
    // 0x31fc80: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x31fc80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x31fc84: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x31fc84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x31fc88: 0x8c225fc0  lw          $v0, 0x5FC0($at)
    ctx->pc = 0x31fc88u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x695FC0u));
    // 0x31fc8c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x31fc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x31fc90: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x31fc90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x31fc94: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x31fc94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x31fc98: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x31fc98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x31fc9c: 0x8c225fc8  lw          $v0, 0x5FC8($at)
    ctx->pc = 0x31fc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x695FC8u));
    // 0x31fca0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x31fca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x31fca4: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x31fca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x31fca8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x31fca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x31fcac: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x31fcacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x31fcb0: 0x8c225fd4  lw          $v0, 0x5FD4($at)
    ctx->pc = 0x31fcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x695FD4u));
    // 0x31fcb4: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x31fcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x31fcb8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x31fcb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x31fcbc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x31fcbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x31fcc0: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x31fcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x31fcc4: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x31fcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x31fcc8: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x31fcc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x31fccc: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x31FCCCu;
    {
        const bool branch_taken_0x31fccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FCCCu;
        // 0x31fcd0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fccc) {
            ctx->pc = 0x31FD50u;
            goto label_31fd50;
        }
    }
    ctx->pc = 0x31FCD4u;
    // 0x31fcd4: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x31fcd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x31fcd8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x31fcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31fcdc: 0x8c225f64  lw          $v0, 0x5F64($at)
    ctx->pc = 0x31fcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x695F64u));
    // 0x31fce0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x31fce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x31fce4: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x31fce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x31fce8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x31fce8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x31fcec: 0x8c225f6c  lw          $v0, 0x5F6C($at)
    ctx->pc = 0x31fcecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x695F6Cu));
    // 0x31fcf0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x31fcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x31fcf4: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x31fcf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x31fcf8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x31fcf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x31fcfc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x31fcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x31fd00: 0x8c225f78  lw          $v0, 0x5F78($at)
    ctx->pc = 0x31fd00u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x695F78u));
    // 0x31fd04: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x31fd04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x31fd08: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x31fd08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x31fd0c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x31fd0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x31fd10: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x31fd10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x31fd14: 0x8c225fc0  lw          $v0, 0x5FC0($at)
    ctx->pc = 0x31fd14u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x695FC0u));
    // 0x31fd18: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x31fd18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31fd1c: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x31fd1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x31fd20: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x31fd20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x31fd24: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x31fd24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x31fd28: 0x8c225fc8  lw          $v0, 0x5FC8($at)
    ctx->pc = 0x31fd28u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x695FC8u));
    // 0x31fd2c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x31fd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x31fd30: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x31fd30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x31fd34: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x31fd34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x31fd38: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x31fd38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x31fd3c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x31fd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x31fd40: 0x8c225fd4  lw          $v0, 0x5FD4($at)
    ctx->pc = 0x31fd40u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x695FD4u));
    // 0x31fd44: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x31fd44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x31fd48: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x31fd48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x31fd4c: 0x0  nop
    ctx->pc = 0x31fd4cu;
    // NOP
label_31fd50:
    // 0x31fd50: 0xc0c7f60  jal         func_31FD80
    ctx->pc = 0x31FD50u;
    SET_GPR_U32(ctx, 31, 0x31FD58u);
    ctx->pc = 0x31FD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FD50u;
    // 0x31fd54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FD80u, 0x31FD50u, 0x31FD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FD58u;
label_31fd58:
    // 0x31fd58: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31FD58u;
    {
        const bool branch_taken_0x31fd58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FD58u;
        // 0x31fd5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fd58) {
            ctx->pc = 0x31FD68u;
            goto label_31fd68;
        }
    }
    ctx->pc = 0x31FD60u;
    // 0x31fd60: 0xc0c7f68  jal         func_31FDA0
    ctx->pc = 0x31FD60u;
    SET_GPR_U32(ctx, 31, 0x31FD68u);
    ctx->pc = 0x31FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FDA0u, 0x31FD60u, 0x31FD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FD68u;
label_31fd68:
    // 0x31fd68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31fd68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31fd6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31fd6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31fd70: 0x3e00008  jr          $ra
    ctx->pc = 0x31FD70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31FD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FD70u;
        // 0x31fd74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FD70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31FD78u;
}
