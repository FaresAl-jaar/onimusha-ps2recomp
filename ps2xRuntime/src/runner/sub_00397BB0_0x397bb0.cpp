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

// Function: sub_00397BB0
// Address: 0x397bb0 - 0x397ca0
void sub_00397BB0_0x397bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397BB0_0x397bb0");
#endif

    switch (ctx->pc) {
        case 0x397c24u: goto label_397c24;
        case 0x397c2cu: goto label_397c2c;
        case 0x397c38u: goto label_397c38;
        case 0x397c40u: goto label_397c40;
        case 0x397c60u: goto label_397c60;
        case 0x397c78u: goto label_397c78;
        case 0x397c8cu: goto label_397c8c;
        default: break;
    }

    ctx->pc = 0x397bb0u;

    // 0x397bb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x397bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x397bb4: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x397bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x397bb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x397bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x397bbc: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x397bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x397bc0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x397bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x397bc4: 0x24c6c860  addiu       $a2, $a2, -0x37A0
    ctx->pc = 0x397bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953056));
    // 0x397bc8: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x397bc8u;
    { uint32_t bits = FAST_READ32(0x65C860u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x397bcc: 0x24a5c250  addiu       $a1, $a1, -0x3DB0
    ctx->pc = 0x397bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951504));
    // 0x397bd0: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x397bd0u;
    { uint32_t bits = FAST_READ32(0x65C864u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x397bd4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x397bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x397bd8: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x397bd8u;
    { uint32_t bits = FAST_READ32(0x65C868u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x397bdc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x397bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x397be0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x397be0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397be4: 0xe4820090  swc1        $f2, 0x90($a0)
    ctx->pc = 0x397be4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
    // 0x397be8: 0xe4810094  swc1        $f1, 0x94($a0)
    ctx->pc = 0x397be8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 148), bits); }
    // 0x397bec: 0xe4800098  swc1        $f0, 0x98($a0)
    ctx->pc = 0x397becu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
    // 0x397bf0: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x397bf0u;
    { uint32_t bits = FAST_READ32(0x68C250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x397bf4: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x397bf4u;
    { uint32_t bits = FAST_READ32(0x68C254u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x397bf8: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x397bf8u;
    { uint32_t bits = FAST_READ32(0x68C258u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x397bfc: 0xe482009c  swc1        $f2, 0x9C($a0)
    ctx->pc = 0x397bfcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 156), bits); }
    // 0x397c00: 0xe48100a0  swc1        $f1, 0xA0($a0)
    ctx->pc = 0x397c00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 160), bits); }
    // 0x397c04: 0xe48000a4  swc1        $f0, 0xA4($a0)
    ctx->pc = 0x397c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 164), bits); }
    // 0x397c08: 0xa48301ae  sh          $v1, 0x1AE($a0)
    ctx->pc = 0x397c08u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 430), (uint16_t)GPR_U32(ctx, 3));
    // 0x397c0c: 0xa48001b0  sh          $zero, 0x1B0($a0)
    ctx->pc = 0x397c0cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 432), (uint16_t)GPR_U32(ctx, 0));
    // 0x397c10: 0xa48001b2  sh          $zero, 0x1B2($a0)
    ctx->pc = 0x397c10u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 434), (uint16_t)GPR_U32(ctx, 0));
    // 0x397c14: 0xac8001b4  sw          $zero, 0x1B4($a0)
    ctx->pc = 0x397c14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 436), GPR_U32(ctx, 0));
    // 0x397c18: 0xac8001b8  sw          $zero, 0x1B8($a0)
    ctx->pc = 0x397c18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 440), GPR_U32(ctx, 0));
    // 0x397c1c: 0xc0dc7f8  jal         func_371FE0
    ctx->pc = 0x397C1Cu;
    SET_GPR_U32(ctx, 31, 0x397C24u);
    ctx->pc = 0x397C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397C1Cu;
    // 0x397c20: 0xa48201ac  sh          $v0, 0x1AC($a0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 4), 428), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371FE0u, 0x397C1Cu, 0x397C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397C24u;
label_397c24:
    // 0x397c24: 0xc0ed6d8  jal         func_3B5B60
    ctx->pc = 0x397C24u;
    SET_GPR_U32(ctx, 31, 0x397C2Cu);
    ctx->pc = 0x3B5B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5B60u, 0x397C24u, 0x397C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397C2Cu;
label_397c2c:
    // 0x397c2c: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x397c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x397c30: 0xc0b78bc  jal         func_2DE2F0
    ctx->pc = 0x397C30u;
    SET_GPR_U32(ctx, 31, 0x397C38u);
    ctx->pc = 0x397C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397C30u;
    // 0x397c34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2F0u, 0x397C30u, 0x397C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397C38u;
label_397c38:
    // 0x397c38: 0xc0b78d0  jal         func_2DE340
    ctx->pc = 0x397C38u;
    SET_GPR_U32(ctx, 31, 0x397C40u);
    ctx->pc = 0x397C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397C38u;
    // 0x397c3c: 0x26040028  addiu       $a0, $s0, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE340u, 0x397C38u, 0x397C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397C40u;
label_397c40:
    // 0x397c40: 0x92030020  lbu         $v1, 0x20($s0)
    ctx->pc = 0x397c40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x397c44: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x397c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x397c48: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x397C48u;
    {
        const bool branch_taken_0x397c48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x397C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397C48u;
        // 0x397c4c: 0x3c040091  lui         $a0, 0x91 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397c48) {
            ctx->pc = 0x397C60u;
            goto label_397c60;
        }
    }
    ctx->pc = 0x397C50u;
    // 0x397c50: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x397c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x397c54: 0x24841270  addiu       $a0, $a0, 0x1270
    ctx->pc = 0x397c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    // 0x397c58: 0xc0cbe14  jal         func_32F850
    ctx->pc = 0x397C58u;
    SET_GPR_U32(ctx, 31, 0x397C60u);
    ctx->pc = 0x397C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397C58u;
    // 0x397c5c: 0x3406ffff  ori         $a2, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F850u, 0x397C58u, 0x397C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397C60u;
label_397c60:
    // 0x397c60: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x397c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x397c64: 0xa2020020  sb          $v0, 0x20($s0)
    ctx->pc = 0x397c64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x397c68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x397c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397c6c: 0xa2000021  sb          $zero, 0x21($s0)
    ctx->pc = 0x397c6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x397c70: 0xc0e5ec8  jal         func_397B20
    ctx->pc = 0x397C70u;
    SET_GPR_U32(ctx, 31, 0x397C78u);
    ctx->pc = 0x397C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397C70u;
    // 0x397c74: 0xa2000022  sb          $zero, 0x22($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 34), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397B20u, 0x397C70u, 0x397C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397C78u;
label_397c78:
    // 0x397c78: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x397C78u;
    {
        const bool branch_taken_0x397c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x397C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397C78u;
        // 0x397c7c: 0x3c040091  lui         $a0, 0x91 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397c78) {
            ctx->pc = 0x397C90u;
            goto label_397c90;
        }
    }
    ctx->pc = 0x397C80u;
    // 0x397c80: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x397c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x397c84: 0xc0cbed0  jal         func_32FB40
    ctx->pc = 0x397C84u;
    SET_GPR_U32(ctx, 31, 0x397C8Cu);
    ctx->pc = 0x397C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397C84u;
    // 0x397c88: 0x24841270  addiu       $a0, $a0, 0x1270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FB40u, 0x397C84u, 0x397C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397C8Cu;
label_397c8c:
    // 0x397c8c: 0x0  nop
    ctx->pc = 0x397c8cu;
    // NOP
label_397c90:
    // 0x397c90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x397c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x397c94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x397c94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x397c98: 0x3e00008  jr          $ra
    ctx->pc = 0x397C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397C98u;
        // 0x397c9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x397CA0u;
}
