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

// Function: sub_00328A40
// Address: 0x328a40 - 0x328b68
void sub_00328A40_0x328a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00328A40_0x328a40");
#endif

    switch (ctx->pc) {
        case 0x328a80u: goto label_328a80;
        case 0x328a9cu: goto label_328a9c;
        case 0x328b44u: goto label_328b44;
        case 0x328b58u: goto label_328b58;
        default: break;
    }

    ctx->pc = 0x328a40u;

    // 0x328a40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x328a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x328a44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x328a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x328a48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x328a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x328a4c: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x328a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x328a50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x328a50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328a54: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x328a54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x328a58: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x328a58u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x328a5c: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x328a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x328a60: 0xa080001c  sb          $zero, 0x1C($a0)
    ctx->pc = 0x328a60u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x328a64: 0xa080001d  sb          $zero, 0x1D($a0)
    ctx->pc = 0x328a64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 29), (uint8_t)GPR_U32(ctx, 0));
    // 0x328a68: 0xa080002a  sb          $zero, 0x2A($a0)
    ctx->pc = 0x328a68u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 42), (uint8_t)GPR_U32(ctx, 0));
    // 0x328a6c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x328a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x328a70: 0xa4800020  sh          $zero, 0x20($a0)
    ctx->pc = 0x328a70u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x328a74: 0xa4800028  sh          $zero, 0x28($a0)
    ctx->pc = 0x328a74u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 40), (uint16_t)GPR_U32(ctx, 0));
    // 0x328a78: 0xc0e1314  jal         func_384C50
    ctx->pc = 0x328A78u;
    SET_GPR_U32(ctx, 31, 0x328A80u);
    ctx->pc = 0x328A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328A78u;
    // 0x328a7c: 0xa480002c  sh          $zero, 0x2C($a0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 4), 44), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384C50u, 0x328A78u, 0x328A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328A80u;
label_328a80:
    // 0x328a80: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x328a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x328a84: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x328a84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x328a88: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x328a88u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x328a8c: 0x24844060  addiu       $a0, $a0, 0x4060
    ctx->pc = 0x328a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    // 0x328a90: 0xa203002f  sb          $v1, 0x2F($s0)
    ctx->pc = 0x328a90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 47), (uint8_t)GPR_U32(ctx, 3));
    // 0x328a94: 0xc0ceb08  jal         func_33AC20
    ctx->pc = 0x328A94u;
    SET_GPR_U32(ctx, 31, 0x328A9Cu);
    ctx->pc = 0x328A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328A94u;
    // 0x328a98: 0xa2000030  sb          $zero, 0x30($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AC20u, 0x328A94u, 0x328A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328A9Cu;
label_328a9c:
    // 0x328a9c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x328a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x328aa0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x328aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x328aa4: 0xa0200e73  sb          $zero, 0xE73($at)
    ctx->pc = 0x328aa4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B0E73u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6B0E73u, _value); } while (0);
    // 0x328aa8: 0x34437fff  ori         $v1, $v0, 0x7FFF
    ctx->pc = 0x328aa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x328aac: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x328aacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x328ab0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x328ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x328ab4: 0xa0200e72  sb          $zero, 0xE72($at)
    ctx->pc = 0x328ab4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B0E72u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6B0E72u, _value); } while (0);
    // 0x328ab8: 0x2405dfff  addiu       $a1, $zero, -0x2001
    ctx->pc = 0x328ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x328abc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x328abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x328ac0: 0x2404fff7  addiu       $a0, $zero, -0x9
    ctx->pc = 0x328ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x328ac4: 0xa0200e71  sb          $zero, 0xE71($at)
    ctx->pc = 0x328ac4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B0E71u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6B0E71u, _value); } while (0);
    // 0x328ac8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x328ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x328acc: 0xa0200e75  sb          $zero, 0xE75($at)
    ctx->pc = 0x328accu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B0E75u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6B0E75u, _value); } while (0);
    // 0x328ad0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x328ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x328ad4: 0xa0200e70  sb          $zero, 0xE70($at)
    ctx->pc = 0x328ad4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B0E70u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6B0E70u, _value); } while (0);
    // 0x328ad8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x328ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x328adc: 0xa0220e74  sb          $v0, 0xE74($at)
    ctx->pc = 0x328adcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B0E74u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6B0E74u, _value); } while (0);
    // 0x328ae0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x328ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x328ae4: 0xa0200e76  sb          $zero, 0xE76($at)
    ctx->pc = 0x328ae4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B0E76u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6B0E76u, _value); } while (0);
    // 0x328ae8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x328ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x328aec: 0x8c26cebc  lw          $a2, -0x3144($at)
    ctx->pc = 0x328aecu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x328af0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x328af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x328af4: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x328af4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x328af8: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x328af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
    // 0x328afc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x328afcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x328b00: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x328b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x328b04: 0xac25cebc  sw          $a1, -0x3144($at)
    ctx->pc = 0x328b04u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 5));
    // 0x328b08: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x328b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x328b0c: 0xac22ceb8  sw          $v0, -0x3148($at)
    ctx->pc = 0x328b0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x328b10: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x328b10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x328b14: 0x8c24ceb8  lw          $a0, -0x3148($at)
    ctx->pc = 0x328b14u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x328b18: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x328b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x328b1c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x328b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x328b20: 0x8c22cebc  lw          $v0, -0x3144($at)
    ctx->pc = 0x328b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
    // 0x328b24: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x328b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x328b28: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x328b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x328b2c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x328B2Cu;
    {
        const bool branch_taken_0x328b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x328B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328B2Cu;
        // 0x328b30: 0xac23ceb8  sw          $v1, -0x3148($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328b2c) {
            ctx->pc = 0x328B50u;
            goto label_328b50;
        }
    }
    ctx->pc = 0x328B34u;
    // 0x328b34: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x328b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x328b38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x328b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328b3c: 0xc0ca4a4  jal         func_329290
    ctx->pc = 0x328B3Cu;
    SET_GPR_U32(ctx, 31, 0x328B44u);
    ctx->pc = 0x328B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328B3Cu;
    // 0x328b40: 0xa202002a  sb          $v0, 0x2A($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 42), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329290u, 0x328B3Cu, 0x328B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328B44u;
label_328b44:
    // 0x328b44: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x328B44u;
    {
        const bool branch_taken_0x328b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x328b44) {
            ctx->pc = 0x328B58u;
            goto label_328b58;
        }
    }
    ctx->pc = 0x328B4Cu;
    // 0x328b4c: 0x0  nop
    ctx->pc = 0x328b4cu;
    // NOP
label_328b50:
    // 0x328b50: 0xc0ca308  jal         func_328C20
    ctx->pc = 0x328B50u;
    SET_GPR_U32(ctx, 31, 0x328B58u);
    ctx->pc = 0x328B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328B50u;
    // 0x328b54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328C20u, 0x328B50u, 0x328B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328B58u;
label_328b58:
    // 0x328b58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x328b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x328b5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x328b5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328b60: 0x3e00008  jr          $ra
    ctx->pc = 0x328B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328B60u;
        // 0x328b64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328B60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328B68u;
}
