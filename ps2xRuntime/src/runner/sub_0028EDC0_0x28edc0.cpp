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

// Function: sub_0028EDC0
// Address: 0x28edc0 - 0x28ee94
void sub_0028EDC0_0x28edc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028EDC0_0x28edc0");
#endif

    switch (ctx->pc) {
        case 0x28ee0cu: goto label_28ee0c;
        case 0x28ee14u: goto label_28ee14;
        case 0x28ee20u: goto label_28ee20;
        case 0x28ee78u: goto label_28ee78;
        default: break;
    }

    ctx->pc = 0x28edc0u;

    // 0x28edc0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x28edc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x28edc4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x28edc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x28edc8: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x28edc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x28edcc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28edccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28edd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28edd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28edd4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x28edd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28edd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28edd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28eddc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x28eddcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ede0: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x28ede0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28ede4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x28ede4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ede8: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x28ede8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28edec: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x28edecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28edf0: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x28edf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28edf4: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x28edf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28edf8: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x28edf8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x28edfc: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x28edfcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x28ee00: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x28ee00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x28ee04: 0xc09d210  jal         func_274840
    ctx->pc = 0x28EE04u;
    SET_GPR_U32(ctx, 31, 0x28EE0Cu);
    ctx->pc = 0x28EE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EE04u;
    // 0x28ee08: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x274840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274840u, 0x28EE04u, 0x28EE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EE0Cu;
label_28ee0c:
    // 0x28ee0c: 0xc0a43fc  jal         func_290FF0
    ctx->pc = 0x28EE0Cu;
    SET_GPR_U32(ctx, 31, 0x28EE14u);
    ctx->pc = 0x28EE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EE0Cu;
    // 0x28ee10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290FF0u, 0x28EE0Cu, 0x28EE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EE14u;
label_28ee14:
    // 0x28ee14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28ee14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ee18: 0xc0a4408  jal         func_291020
    ctx->pc = 0x28EE18u;
    SET_GPR_U32(ctx, 31, 0x28EE20u);
    ctx->pc = 0x28EE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EE18u;
    // 0x28ee1c: 0xa3a20069  sb          $v0, 0x69($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 105), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291020u, 0x28EE18u, 0x28EE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EE20u;
label_28ee20:
    // 0x28ee20: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x28ee20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28ee24: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x28ee24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x28ee28: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x28ee28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x28ee2c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x28ee2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x28ee30: 0x2403020a  addiu       $v1, $zero, 0x20A
    ctx->pc = 0x28ee30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 522));
    // 0x28ee34: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x28ee34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x28ee38: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x28ee38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    // 0x28ee3c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x28ee3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28ee40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28ee40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ee44: 0xa3a3006c  sb          $v1, 0x6C($sp)
    ctx->pc = 0x28ee44u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 108), (uint8_t)GPR_U32(ctx, 3));
    // 0x28ee48: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x28ee48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28ee4c: 0x27a3004c  addiu       $v1, $sp, 0x4C
    ctx->pc = 0x28ee4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x28ee50: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x28ee50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28ee54: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x28ee54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28ee58: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x28ee58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28ee5c: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x28ee5cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x28ee60: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x28ee60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x28ee64: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x28ee64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x28ee68: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x28ee68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x28ee6c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x28ee6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x28ee70: 0xc09d1ac  jal         func_2746B0
    ctx->pc = 0x28EE70u;
    SET_GPR_U32(ctx, 31, 0x28EE78u);
    ctx->pc = 0x28EE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EE70u;
    // 0x28ee74: 0xa7b0005c  sh          $s0, 0x5C($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 92), (uint16_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2746B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2746B0u, 0x28EE70u, 0x28EE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EE78u;
label_28ee78:
    // 0x28ee78: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x28ee78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28ee7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28ee7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ee80: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28ee80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28ee84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28ee84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28ee88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28ee88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ee8c: 0x3e00008  jr          $ra
    ctx->pc = 0x28EE8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28EE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EE8Cu;
        // 0x28ee90: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EE8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28EE94u;
}
