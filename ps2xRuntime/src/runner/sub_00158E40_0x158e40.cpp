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

// Function: sub_00158E40
// Address: 0x158e40 - 0x158edc
void sub_00158E40_0x158e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158E40_0x158e40");
#endif

    switch (ctx->pc) {
        case 0x158e68u: goto label_158e68;
        case 0x158e94u: goto label_158e94;
        case 0x158eb8u: goto label_158eb8;
        case 0x158ec0u: goto label_158ec0;
        case 0x158ec8u: goto label_158ec8;
        default: break;
    }

    ctx->pc = 0x158e40u;

    // 0x158e40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x158e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x158e44: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x158e44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x158e48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x158e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x158e4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x158e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x158e50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x158e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x158e54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x158e54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158e58: 0x90306c10  lbu         $s0, 0x6C10($at)
    ctx->pc = 0x158e58u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)FAST_READ8(0x8D6C10u));
    // 0x158e5c: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x158e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x158e60: 0xc0f55dc  jal         func_3D5770
    ctx->pc = 0x158E60u;
    SET_GPR_U32(ctx, 31, 0x158E68u);
    ctx->pc = 0x158E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158E60u;
    // 0x158e64: 0x24840740  addiu       $a0, $a0, 0x740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D5770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5770u, 0x158E60u, 0x158E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158E68u;
label_158e68:
    // 0x158e68: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x158e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x158e6c: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x158e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x158e70: 0x9423074c  lhu         $v1, 0x74C($at)
    ctx->pc = 0x158e70u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x93074Cu));
    // 0x158e74: 0x24846ac0  addiu       $a0, $a0, 0x6AC0
    ctx->pc = 0x158e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27328));
    // 0x158e78: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x158e78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x158e7c: 0x9422074e  lhu         $v0, 0x74E($at)
    ctx->pc = 0x158e7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x93074Eu));
    // 0x158e80: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x158e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x158e84: 0xa4236ace  sh          $v1, 0x6ACE($at)
    ctx->pc = 0x158e84u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7E6ACEu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7E6ACEu, _value); } while (0);
    // 0x158e88: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x158e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x158e8c: 0xc05455c  jal         func_151570
    ctx->pc = 0x158E8Cu;
    SET_GPR_U32(ctx, 31, 0x158E94u);
    ctx->pc = 0x158E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158E8Cu;
    // 0x158e90: 0xa0226ad0  sb          $v0, 0x6AD0($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 27344), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151570u, 0x158E8Cu, 0x158E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158E94u;
label_158e94:
    // 0x158e94: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x158e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x158e98: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x158e98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x158e9c: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x158e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x158ea0: 0xa6200002  sh          $zero, 0x2($s1)
    ctx->pc = 0x158ea0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x158ea4: 0xa6200004  sh          $zero, 0x4($s1)
    ctx->pc = 0x158ea4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x158ea8: 0x93848a54  lbu         $a0, -0x75AC($gp)
    ctx->pc = 0x158ea8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937172)));
    // 0x158eac: 0x93858a55  lbu         $a1, -0x75AB($gp)
    ctx->pc = 0x158eacu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937173)));
    // 0x158eb0: 0xc0e0f10  jal         func_383C40
    ctx->pc = 0x158EB0u;
    SET_GPR_U32(ctx, 31, 0x158EB8u);
    ctx->pc = 0x158EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158EB0u;
    // 0x158eb4: 0xa0306c10  sb          $s0, 0x6C10($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 27664), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x383C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383C40u, 0x158EB0u, 0x158EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158EB8u;
label_158eb8:
    // 0x158eb8: 0xc0d27e8  jal         func_349FA0
    ctx->pc = 0x158EB8u;
    SET_GPR_U32(ctx, 31, 0x158EC0u);
    ctx->pc = 0x349FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349FA0u, 0x158EB8u, 0x158EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158EC0u;
label_158ec0:
    // 0x158ec0: 0xc0d2800  jal         func_34A000
    ctx->pc = 0x158EC0u;
    SET_GPR_U32(ctx, 31, 0x158EC8u);
    ctx->pc = 0x34A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34A000u, 0x158EC0u, 0x158EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158EC8u;
label_158ec8:
    // 0x158ec8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x158ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x158ecc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x158eccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158ed0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x158ed0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158ed4: 0x3e00008  jr          $ra
    ctx->pc = 0x158ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158ED4u;
        // 0x158ed8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158ED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158EDCu;
}
