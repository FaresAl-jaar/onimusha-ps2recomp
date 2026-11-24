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

// Function: sub_003ABBE0
// Address: 0x3abbe0 - 0x3abc60
void sub_003ABBE0_0x3abbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ABBE0_0x3abbe0");
#endif

    switch (ctx->pc) {
        case 0x3abc04u: goto label_3abc04;
        case 0x3abc14u: goto label_3abc14;
        default: break;
    }

    ctx->pc = 0x3abbe0u;

    // 0x3abbe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3abbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3abbe4: 0x3c050093  lui         $a1, 0x93
    ctx->pc = 0x3abbe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)147 << 16));
    // 0x3abbe8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3abbe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3abbec: 0x24a599e0  addiu       $a1, $a1, -0x6620
    ctx->pc = 0x3abbecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941152));
    // 0x3abbf0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3abbf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3abbf4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3abbf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3abbf8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3abbf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3abbfc: 0xc049522  jal         func_125488
    ctx->pc = 0x3ABBFCu;
    SET_GPR_U32(ctx, 31, 0x3ABC04u);
    ctx->pc = 0x3ABC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABBFCu;
    // 0x3abc00: 0x26040100  addiu       $a0, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x3ABBFCu, 0x3ABC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABC04u;
label_3abc04:
    // 0x3abc04: 0x3c050093  lui         $a1, 0x93
    ctx->pc = 0x3abc04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)147 << 16));
    // 0x3abc08: 0x26040128  addiu       $a0, $s0, 0x128
    ctx->pc = 0x3abc08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 296));
    // 0x3abc0c: 0xc0f8c70  jal         func_3E31C0
    ctx->pc = 0x3ABC0Cu;
    SET_GPR_U32(ctx, 31, 0x3ABC14u);
    ctx->pc = 0x3ABC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABC0Cu;
    // 0x3abc10: 0x24a59a08  addiu       $a1, $a1, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E31C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E31C0u, 0x3ABC0Cu, 0x3ABC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABC14u;
label_3abc14:
    // 0x3abc14: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3abc14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3abc18: 0x92040110  lbu         $a0, 0x110($s0)
    ctx->pc = 0x3abc18u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x3abc1c: 0x902399f0  lbu         $v1, -0x6610($at)
    ctx->pc = 0x3abc1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x9299F0u));
    // 0x3abc20: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x3abc20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3abc24: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3abc24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3abc28: 0xa2030110  sb          $v1, 0x110($s0)
    ctx->pc = 0x3abc28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 272), (uint8_t)GPR_U32(ctx, 3));
    // 0x3abc2c: 0x902399f1  lbu         $v1, -0x660F($at)
    ctx->pc = 0x3abc2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x9299F1u));
    // 0x3abc30: 0x92040111  lbu         $a0, 0x111($s0)
    ctx->pc = 0x3abc30u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 273)));
    // 0x3abc34: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3abc34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3abc38: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x3abc38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3abc3c: 0xa2030111  sb          $v1, 0x111($s0)
    ctx->pc = 0x3abc3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 273), (uint8_t)GPR_U32(ctx, 3));
    // 0x3abc40: 0x96040112  lhu         $a0, 0x112($s0)
    ctx->pc = 0x3abc40u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 274)));
    // 0x3abc44: 0x942399f2  lhu         $v1, -0x660E($at)
    ctx->pc = 0x3abc44u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x9299F2u));
    // 0x3abc48: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x3abc48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3abc4c: 0xa6030112  sh          $v1, 0x112($s0)
    ctx->pc = 0x3abc4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 274), (uint16_t)GPR_U32(ctx, 3));
    // 0x3abc50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3abc50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3abc54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3abc54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3abc58: 0x3e00008  jr          $ra
    ctx->pc = 0x3ABC58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ABC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABC58u;
        // 0x3abc5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ABC58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ABC60u;
}
