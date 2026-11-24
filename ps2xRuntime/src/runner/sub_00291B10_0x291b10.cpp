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

// Function: sub_00291B10
// Address: 0x291b10 - 0x291bc4
void sub_00291B10_0x291b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291B10_0x291b10");
#endif

    switch (ctx->pc) {
        case 0x291b34u: goto label_291b34;
        case 0x291b58u: goto label_291b58;
        default: break;
    }

    ctx->pc = 0x291b10u;

    // 0x291b10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x291b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x291b14: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x291b14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x291b18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x291b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x291b1c: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x291b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x291b20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x291b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x291b24: 0x3c11008d  lui         $s1, 0x8D
    ctx->pc = 0x291b24u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)141 << 16));
    // 0x291b28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x291b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x291b2c: 0xc095018  jal         func_254060
    ctx->pc = 0x291B2Cu;
    SET_GPR_U32(ctx, 31, 0x291B34u);
    ctx->pc = 0x291B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291B2Cu;
    // 0x291b30: 0x26312380  addiu       $s1, $s1, 0x2380 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 9088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x291B2Cu, 0x291B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291B34u;
label_291b34:
    // 0x291b34: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x291b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x291b38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x291b38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291b3c: 0xa4202380  sh          $zero, 0x2380($at)
    ctx->pc = 0x291b3cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8D2380u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8D2380u, _value); } while (0);
    // 0x291b40: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x291b40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x291b44: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x291b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x291b48: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x291b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x291b4c: 0x24842388  addiu       $a0, $a0, 0x2388
    ctx->pc = 0x291b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9096));
    // 0x291b50: 0xc0957bc  jal         func_255EF0
    ctx->pc = 0x291B50u;
    SET_GPR_U32(ctx, 31, 0x291B58u);
    ctx->pc = 0x291B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291B50u;
    // 0x291b54: 0xac222384  sw          $v0, 0x2384($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 9092), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255EF0u, 0x291B50u, 0x291B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291B58u;
label_291b58:
    // 0x291b58: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x291b58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x291b5c: 0x2603017c  addiu       $v1, $s0, 0x17C
    ctx->pc = 0x291b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 380));
    // 0x291b60: 0xa020238c  sb          $zero, 0x238C($at)
    ctx->pc = 0x291b60u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8D238Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8D238Cu, _value); } while (0);
    // 0x291b64: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x291b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x291b68: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x291b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x291b6c: 0xa423238a  sh          $v1, 0x238A($at)
    ctx->pc = 0x291b6cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8D238Au, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8D238Au, _value); } while (0);
    // 0x291b70: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x291b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x291b74: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x291b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x291b78: 0xa023238f  sb          $v1, 0x238F($at)
    ctx->pc = 0x291b78u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8D238Fu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8D238Fu, _value); } while (0);
    // 0x291b7c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x291b7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x291b80: 0x260301a4  addiu       $v1, $s0, 0x1A4
    ctx->pc = 0x291b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 420));
    // 0x291b84: 0xa0242391  sb          $a0, 0x2391($at)
    ctx->pc = 0x291b84u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x8D2391u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8D2391u, _value); } while (0);
    // 0x291b88: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x291b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x291b8c: 0xa4232396  sh          $v1, 0x2396($at)
    ctx->pc = 0x291b8cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8D2396u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8D2396u, _value); } while (0);
    // 0x291b90: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x291b90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x291b94: 0xa0242392  sb          $a0, 0x2392($at)
    ctx->pc = 0x291b94u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x8D2392u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8D2392u, _value); } while (0);
    // 0x291b98: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x291b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x291b9c: 0x9023fc8d  lbu         $v1, -0x373($at)
    ctx->pc = 0x291b9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Du));
    // 0x291ba0: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x291BA0u;
    {
        const bool branch_taken_0x291ba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x291BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291BA0u;
        // 0x291ba4: 0x2603016d  addiu       $v1, $s0, 0x16D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 365));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291ba0) {
            ctx->pc = 0x291BB0u;
            goto label_291bb0;
        }
    }
    ctx->pc = 0x291BA8u;
    // 0x291ba8: 0xa623000a  sh          $v1, 0xA($s1)
    ctx->pc = 0x291ba8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x291bac: 0x0  nop
    ctx->pc = 0x291bacu;
    // NOP
label_291bb0:
    // 0x291bb0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x291bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x291bb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x291bb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291bb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x291bb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x291BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291BBCu;
        // 0x291bc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291BC4u;
}
