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

// Function: sub_0033E9E0
// Address: 0x33e9e0 - 0x33ead0
void sub_0033E9E0_0x33e9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033E9E0_0x33e9e0");
#endif

    switch (ctx->pc) {
        case 0x33e9f8u: goto label_33e9f8;
        case 0x33ea18u: goto label_33ea18;
        case 0x33ea40u: goto label_33ea40;
        case 0x33ea70u: goto label_33ea70;
        case 0x33ea94u: goto label_33ea94;
        case 0x33eab8u: goto label_33eab8;
        default: break;
    }

    ctx->pc = 0x33e9e0u;

    // 0x33e9e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33e9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33e9e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x33e9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33e9e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33e9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33e9ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33e9ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e9f0: 0xc06039c  jal         func_180E70
    ctx->pc = 0x33E9F0u;
    SET_GPR_U32(ctx, 31, 0x33E9F8u);
    ctx->pc = 0x33E9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E9F0u;
    // 0x33e9f4: 0x8c840054  lw          $a0, 0x54($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180E70u, 0x33E9F0u, 0x33E9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E9F8u;
label_33e9f8:
    // 0x33e9f8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x33e9f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33e9fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33e9fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ea00: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x33ea00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x33ea04: 0x2442f0f0  addiu       $v0, $v0, -0xF10
    ctx->pc = 0x33ea04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963440));
    // 0x33ea08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33ea08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33ea0c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x33ea0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33ea10: 0xc098770  jal         func_261DC0
    ctx->pc = 0x33EA10u;
    SET_GPR_U32(ctx, 31, 0x33EA18u);
    ctx->pc = 0x33EA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33EA10u;
    // 0x33ea14: 0xa2020924  sb          $v0, 0x924($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2340), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261DC0u, 0x33EA10u, 0x33EA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EA18u;
label_33ea18:
    // 0x33ea18: 0xde030500  ld          $v1, 0x500($s0)
    ctx->pc = 0x33ea18u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 1280)));
    // 0x33ea1c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x33ea1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x33ea20: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x33EA20u;
    {
        const bool branch_taken_0x33ea20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ea20) {
            ctx->pc = 0x33EA40u;
            goto label_33ea40;
        }
    }
    ctx->pc = 0x33EA28u;
    // 0x33ea28: 0x9203065c  lbu         $v1, 0x65C($s0)
    ctx->pc = 0x33ea28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x33ea2c: 0x28610080  slti        $at, $v1, 0x80
    ctx->pc = 0x33ea2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x33ea30: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x33EA30u;
    {
        const bool branch_taken_0x33ea30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EA30u;
        // 0x33ea34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ea30) {
            ctx->pc = 0x33EA40u;
            goto label_33ea40;
        }
    }
    ctx->pc = 0x33EA38u;
    // 0x33ea38: 0xc0a27ec  jal         func_289FB0
    ctx->pc = 0x33EA38u;
    SET_GPR_U32(ctx, 31, 0x33EA40u);
    ctx->pc = 0x289FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289FB0u, 0x33EA38u, 0x33EA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EA40u;
label_33ea40:
    // 0x33ea40: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x33ea40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x33ea44: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x33ea44u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x33ea48: 0x24030184  addiu       $v1, $zero, 0x184
    ctx->pc = 0x33ea48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
    // 0x33ea4c: 0x1483001c  bne         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x33EA4Cu;
    {
        const bool branch_taken_0x33ea4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x33ea4c) {
            ctx->pc = 0x33EAC0u;
            goto label_33eac0;
        }
    }
    ctx->pc = 0x33EA54u;
    // 0x33ea54: 0x3c024626  lui         $v0, 0x4626
    ctx->pc = 0x33ea54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17958 << 16));
    // 0x33ea58: 0x3443a400  ori         $v1, $v0, 0xA400
    ctx->pc = 0x33ea58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41984);
    // 0x33ea5c: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x33ea5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x33ea60: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x33ea60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x33ea64: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x33ea64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x33ea68: 0xc096960  jal         func_25A580
    ctx->pc = 0x33EA68u;
    SET_GPR_U32(ctx, 31, 0x33EA70u);
    ctx->pc = 0x33EA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33EA68u;
    // 0x33ea6c: 0xc60e0020  lwc1        $f14, 0x20($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A580u, 0x33EA68u, 0x33EA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EA70u;
label_33ea70:
    // 0x33ea70: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x33ea70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x33ea74: 0x3c02451d  lui         $v0, 0x451D
    ctx->pc = 0x33ea74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17693 << 16));
    // 0x33ea78: 0x3443d000  ori         $v1, $v0, 0xD000
    ctx->pc = 0x33ea78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x33ea7c: 0x3c02453b  lui         $v0, 0x453B
    ctx->pc = 0x33ea7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17723 << 16));
    // 0x33ea80: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x33ea80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x33ea84: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x33ea84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x33ea88: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x33ea88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x33ea8c: 0xc096960  jal         func_25A580
    ctx->pc = 0x33EA8Cu;
    SET_GPR_U32(ctx, 31, 0x33EA94u);
    ctx->pc = 0x33EA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33EA8Cu;
    // 0x33ea90: 0xc60e0024  lwc1        $f14, 0x24($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A580u, 0x33EA8Cu, 0x33EA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EA94u;
label_33ea94:
    // 0x33ea94: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x33ea94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x33ea98: 0x3c024699  lui         $v0, 0x4699
    ctx->pc = 0x33ea98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18073 << 16));
    // 0x33ea9c: 0x3443f800  ori         $v1, $v0, 0xF800
    ctx->pc = 0x33ea9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x33eaa0: 0x3c0246a7  lui         $v0, 0x46A7
    ctx->pc = 0x33eaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18087 << 16));
    // 0x33eaa4: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x33eaa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x33eaa8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x33eaa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x33eaac: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x33eaacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x33eab0: 0xc096960  jal         func_25A580
    ctx->pc = 0x33EAB0u;
    SET_GPR_U32(ctx, 31, 0x33EAB8u);
    ctx->pc = 0x33EAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33EAB0u;
    // 0x33eab4: 0xc60e0028  lwc1        $f14, 0x28($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A580u, 0x33EAB0u, 0x33EAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EAB8u;
label_33eab8:
    // 0x33eab8: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x33eab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x33eabc: 0x0  nop
    ctx->pc = 0x33eabcu;
    // NOP
label_33eac0:
    // 0x33eac0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33eac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33eac4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33eac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33eac8: 0x3e00008  jr          $ra
    ctx->pc = 0x33EAC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33EACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EAC8u;
        // 0x33eacc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33EAC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33EAD0u;
}
