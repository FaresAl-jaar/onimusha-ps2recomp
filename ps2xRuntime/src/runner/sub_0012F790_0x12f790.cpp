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

// Function: sub_0012F790
// Address: 0x12f790 - 0x12f88c
void sub_0012F790_0x12f790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012F790_0x12f790");
#endif

    switch (ctx->pc) {
        case 0x12f7c4u: goto label_12f7c4;
        case 0x12f7d8u: goto label_12f7d8;
        case 0x12f81cu: goto label_12f81c;
        case 0x12f830u: goto label_12f830;
        case 0x12f84cu: goto label_12f84c;
        case 0x12f86cu: goto label_12f86c;
        case 0x12f878u: goto label_12f878;
        default: break;
    }

    ctx->pc = 0x12f790u;

    // 0x12f790: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x12f790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x12f794: 0x3c010040  lui         $at, 0x40
    ctx->pc = 0x12f794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)64 << 16));
    // 0x12f798: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12f798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12f79c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12f79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12f7a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12f7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12f7a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12f7a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f7a8: 0xc4800040  lwc1        $f0, 0x40($a0)
    ctx->pc = 0x12f7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f7ac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12f7acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f7b0: 0xe42064f8  swc1        $f0, 0x64F8($at)
    ctx->pc = 0x12f7b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x4064F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4064F8u, _value); } while (0); }
    // 0x12f7b4: 0x86250020  lh          $a1, 0x20($s1)
    ctx->pc = 0x12f7b4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x12f7b8: 0x86260022  lh          $a2, 0x22($s1)
    ctx->pc = 0x12f7b8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x12f7bc: 0xc04d548  jal         func_135520
    ctx->pc = 0x12F7BCu;
    SET_GPR_U32(ctx, 31, 0x12F7C4u);
    ctx->pc = 0x12F7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F7BCu;
    // 0x12f7c0: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135520u, 0x12F7BCu, 0x12F7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F7C4u;
label_12f7c4:
    // 0x12f7c4: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x12f7c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x12f7c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12f7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f7cc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x12f7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12f7d0: 0xc041442  jal         func_105108
    ctx->pc = 0x12F7D0u;
    SET_GPR_U32(ctx, 31, 0x12F7D8u);
    ctx->pc = 0x12F7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F7D0u;
    // 0x12f7d4: 0x24c664f0  addiu       $a2, $a2, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x12F7D0u, 0x12F7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F7D8u;
label_12f7d8:
    // 0x12f7d8: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x12f7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12f7dc: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x12f7dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x12f7e0: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x12f7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f7e4: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x12f7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x12f7e8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x12f7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12f7ec: 0x24c664d0  addiu       $a2, $a2, 0x64D0
    ctx->pc = 0x12f7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25808));
    // 0x12f7f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12f7f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12f7f4: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x12f7f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x12f7f8: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x12f7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12f7fc: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x12f7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f800: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12f800u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12f804: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x12f804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x12f808: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x12f808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12f80c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x12f80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f810: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12f810u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12f814: 0xc041442  jal         func_105108
    ctx->pc = 0x12F814u;
    SET_GPR_U32(ctx, 31, 0x12F81Cu);
    ctx->pc = 0x12F818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F814u;
    // 0x12f818: 0xe6200008  swc1        $f0, 0x8($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x12F814u, 0x12F81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F81Cu;
label_12f81c:
    // 0x12f81c: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x12f81cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x12f820: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x12f820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x12f824: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x12f824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12f828: 0xc041442  jal         func_105108
    ctx->pc = 0x12F828u;
    SET_GPR_U32(ctx, 31, 0x12F830u);
    ctx->pc = 0x12F82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F828u;
    // 0x12f82c: 0x24c664c0  addiu       $a2, $a2, 0x64C0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x12F828u, 0x12F830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F830u;
label_12f830:
    // 0x12f830: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12F830u;
    {
        const bool branch_taken_0x12f830 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f830) {
            ctx->pc = 0x12F858u;
            goto label_12f858;
        }
    }
    ctx->pc = 0x12F838u;
    // 0x12f838: 0xc62c0038  lwc1        $f12, 0x38($s1)
    ctx->pc = 0x12f838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12f83c: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x12f83cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x12f840: 0x24845a40  addiu       $a0, $a0, 0x5A40
    ctx->pc = 0x12f840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23104));
    // 0x12f844: 0xc050cf0  jal         func_1433C0
    ctx->pc = 0x12F844u;
    SET_GPR_U32(ctx, 31, 0x12F84Cu);
    ctx->pc = 0x12F848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F844u;
    // 0x12f848: 0x26250060  addiu       $a1, $s1, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1433C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1433C0u, 0x12F844u, 0x12F84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F84Cu;
label_12f84c:
    // 0x12f84c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x12F84Cu;
    {
        const bool branch_taken_0x12f84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f84c) {
            ctx->pc = 0x12F870u;
            goto label_12f870;
        }
    }
    ctx->pc = 0x12F854u;
    // 0x12f854: 0x0  nop
    ctx->pc = 0x12f854u;
    // NOP
label_12f858:
    // 0x12f858: 0x86260024  lh          $a2, 0x24($s1)
    ctx->pc = 0x12f858u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x12f85c: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x12f85cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x12f860: 0x26250060  addiu       $a1, $s1, 0x60
    ctx->pc = 0x12f860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x12f864: 0xc050cd4  jal         func_143350
    ctx->pc = 0x12F864u;
    SET_GPR_U32(ctx, 31, 0x12F86Cu);
    ctx->pc = 0x12F868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F864u;
    // 0x12f868: 0x24845a40  addiu       $a0, $a0, 0x5A40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143350u, 0x12F864u, 0x12F86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F86Cu;
label_12f86c:
    // 0x12f86c: 0x0  nop
    ctx->pc = 0x12f86cu;
    // NOP
label_12f870:
    // 0x12f870: 0xc04be24  jal         func_12F890
    ctx->pc = 0x12F870u;
    SET_GPR_U32(ctx, 31, 0x12F878u);
    ctx->pc = 0x12F874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F870u;
    // 0x12f874: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F890u, 0x12F870u, 0x12F878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F878u;
label_12f878:
    // 0x12f878: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12f878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12f87c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12f87cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12f880: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12f880u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f884: 0x3e00008  jr          $ra
    ctx->pc = 0x12F884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F884u;
        // 0x12f888: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12F88Cu;
}
