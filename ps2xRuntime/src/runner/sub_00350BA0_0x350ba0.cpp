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

// Function: sub_00350BA0
// Address: 0x350ba0 - 0x350c54
void sub_00350BA0_0x350ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350BA0_0x350ba0");
#endif

    switch (ctx->pc) {
        case 0x350c3cu: goto label_350c3c;
        default: break;
    }

    ctx->pc = 0x350ba0u;

    // 0x350ba0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x350ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x350ba4: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x350ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x350ba8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x350ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x350bac: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x350bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x350bb0: 0x90256c1c  lbu         $a1, 0x6C1C($at)
    ctx->pc = 0x350bb0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x350bb4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x350bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x350bb8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x350bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x350bbc: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x350bbcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x350bc0: 0x11200021  beqz        $t1, . + 4 + (0x21 << 2)
    ctx->pc = 0x350BC0u;
    {
        const bool branch_taken_0x350bc0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x350bc0) {
            ctx->pc = 0x350C48u;
            goto label_350c48;
        }
    }
    ctx->pc = 0x350BC8u;
    // 0x350bc8: 0x9083002a  lbu         $v1, 0x2A($a0)
    ctx->pc = 0x350bc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x350bcc: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x350bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x350bd0: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x350BD0u;
    {
        const bool branch_taken_0x350bd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x350bd0) {
            ctx->pc = 0x350C40u;
            goto label_350c40;
        }
    }
    ctx->pc = 0x350BD8u;
    // 0x350bd8: 0xc5200020  lwc1        $f0, 0x20($t1)
    ctx->pc = 0x350bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350bdc: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x350bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x350be0: 0x3c02c6ea  lui         $v0, 0xC6EA
    ctx->pc = 0x350be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50922 << 16));
    // 0x350be4: 0x24637aa0  addiu       $v1, $v1, 0x7AA0
    ctx->pc = 0x350be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31392));
    // 0x350be8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x350be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x350bec: 0x34426000  ori         $v0, $v0, 0x6000
    ctx->pc = 0x350becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    // 0x350bf0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x350bf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350bf4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x350bf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x350bf8: 0xe4800050  swc1        $f0, 0x50($a0)
    ctx->pc = 0x350bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
    // 0x350bfc: 0xc5200024  lwc1        $f0, 0x24($t1)
    ctx->pc = 0x350bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350c00: 0xe4800054  swc1        $f0, 0x54($a0)
    ctx->pc = 0x350c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
    // 0x350c04: 0xc5200028  lwc1        $f0, 0x28($t1)
    ctx->pc = 0x350c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350c08: 0xe4800058  swc1        $f0, 0x58($a0)
    ctx->pc = 0x350c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x350c0c: 0x852800c2  lh          $t0, 0xC2($t1)
    ctx->pc = 0x350c0cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 194)));
    // 0x350c10: 0xa4880060  sh          $t0, 0x60($a0)
    ctx->pc = 0x350c10u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 96), (uint16_t)GPR_U32(ctx, 8));
    // 0x350c14: 0x9088002a  lbu         $t0, 0x2A($a0)
    ctx->pc = 0x350c14u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x350c18: 0x35080010  ori         $t0, $t0, 0x10
    ctx->pc = 0x350c18u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)16);
    // 0x350c1c: 0xa088002a  sb          $t0, 0x2A($a0)
    ctx->pc = 0x350c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 42), (uint8_t)GPR_U32(ctx, 8));
    // 0x350c20: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x350c20u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x657AA0u));
    // 0x350c24: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x350c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350c28: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x350c28u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x350c2c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x350c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x350c30: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x350c30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x350c34: 0xc0a68b8  jal         func_29A2E0
    ctx->pc = 0x350C34u;
    SET_GPR_U32(ctx, 31, 0x350C3Cu);
    ctx->pc = 0x350C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350C34u;
    // 0x350c38: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A2E0u, 0x350C34u, 0x350C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350C3Cu;
label_350c3c:
    // 0x350c3c: 0x0  nop
    ctx->pc = 0x350c3cu;
    // NOP
label_350c40:
    // 0x350c40: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x350C40u;
    {
        const bool branch_taken_0x350c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x350c40) {
            ctx->pc = 0x350C48u;
            goto label_350c48;
        }
    }
    ctx->pc = 0x350C48u;
label_350c48:
    // 0x350c48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x350c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x350c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x350C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350C4Cu;
        // 0x350c50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350C54u;
}
