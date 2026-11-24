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

// Function: sub_0012F690
// Address: 0x12f690 - 0x12f78c
void sub_0012F690_0x12f690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012F690_0x12f690");
#endif

    switch (ctx->pc) {
        case 0x12f6c8u: goto label_12f6c8;
        case 0x12f6dcu: goto label_12f6dc;
        case 0x12f720u: goto label_12f720;
        case 0x12f734u: goto label_12f734;
        case 0x12f750u: goto label_12f750;
        case 0x12f76cu: goto label_12f76c;
        case 0x12f778u: goto label_12f778;
        default: break;
    }

    ctx->pc = 0x12f690u;

    // 0x12f690: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x12f690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x12f694: 0x3c010040  lui         $at, 0x40
    ctx->pc = 0x12f694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)64 << 16));
    // 0x12f698: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12f698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12f69c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12f69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12f6a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12f6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12f6a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12f6a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f6a8: 0xc4800040  lwc1        $f0, 0x40($a0)
    ctx->pc = 0x12f6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f6ac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12f6acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f6b0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x12f6b0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x12f6b4: 0xe42064e8  swc1        $f0, 0x64E8($at)
    ctx->pc = 0x12f6b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x4064E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4064E8u, _value); } while (0); }
    // 0x12f6b8: 0x86250020  lh          $a1, 0x20($s1)
    ctx->pc = 0x12f6b8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x12f6bc: 0x86260022  lh          $a2, 0x22($s1)
    ctx->pc = 0x12f6bcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x12f6c0: 0xc04d548  jal         func_135520
    ctx->pc = 0x12F6C0u;
    SET_GPR_U32(ctx, 31, 0x12F6C8u);
    ctx->pc = 0x12F6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F6C0u;
    // 0x12f6c4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135520u, 0x12F6C0u, 0x12F6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F6C8u;
label_12f6c8:
    // 0x12f6c8: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x12f6c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x12f6cc: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x12f6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x12f6d0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x12f6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12f6d4: 0xc041442  jal         func_105108
    ctx->pc = 0x12F6D4u;
    SET_GPR_U32(ctx, 31, 0x12F6DCu);
    ctx->pc = 0x12F6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F6D4u;
    // 0x12f6d8: 0x24c664e0  addiu       $a2, $a2, 0x64E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x12F6D4u, 0x12F6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F6DCu;
label_12f6dc:
    // 0x12f6dc: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x12f6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12f6e0: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x12f6e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x12f6e4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x12f6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f6e8: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x12f6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x12f6ec: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x12f6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12f6f0: 0x24c664d0  addiu       $a2, $a2, 0x64D0
    ctx->pc = 0x12f6f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25808));
    // 0x12f6f4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x12f6f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x12f6f8: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x12f6f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x12f6fc: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x12f6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12f700: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x12f700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f704: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12f704u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12f708: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x12f708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x12f70c: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x12f70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12f710: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x12f710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f714: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12f714u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12f718: 0xc041442  jal         func_105108
    ctx->pc = 0x12F718u;
    SET_GPR_U32(ctx, 31, 0x12F720u);
    ctx->pc = 0x12F71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F718u;
    // 0x12f71c: 0xe6200018  swc1        $f0, 0x18($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x12F718u, 0x12F720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F720u;
label_12f720:
    // 0x12f720: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x12f720u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x12f724: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x12f724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x12f728: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x12f728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12f72c: 0xc041442  jal         func_105108
    ctx->pc = 0x12F72Cu;
    SET_GPR_U32(ctx, 31, 0x12F734u);
    ctx->pc = 0x12F730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F72Cu;
    // 0x12f730: 0x24c664c0  addiu       $a2, $a2, 0x64C0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x12F72Cu, 0x12F734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F734u;
label_12f734:
    // 0x12f734: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12F734u;
    {
        const bool branch_taken_0x12f734 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f734) {
            ctx->pc = 0x12F758u;
            goto label_12f758;
        }
    }
    ctx->pc = 0x12F73Cu;
    // 0x12f73c: 0xc62c0038  lwc1        $f12, 0x38($s1)
    ctx->pc = 0x12f73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12f740: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x12f740u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x12f744: 0x24845a40  addiu       $a0, $a0, 0x5A40
    ctx->pc = 0x12f744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23104));
    // 0x12f748: 0xc050cf0  jal         func_1433C0
    ctx->pc = 0x12F748u;
    SET_GPR_U32(ctx, 31, 0x12F750u);
    ctx->pc = 0x12F74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F748u;
    // 0x12f74c: 0x26250060  addiu       $a1, $s1, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1433C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1433C0u, 0x12F748u, 0x12F750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F750u;
label_12f750:
    // 0x12f750: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12F750u;
    {
        const bool branch_taken_0x12f750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f750) {
            ctx->pc = 0x12F770u;
            goto label_12f770;
        }
    }
    ctx->pc = 0x12F758u;
label_12f758:
    // 0x12f758: 0x86260024  lh          $a2, 0x24($s1)
    ctx->pc = 0x12f758u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x12f75c: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x12f75cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x12f760: 0x26250060  addiu       $a1, $s1, 0x60
    ctx->pc = 0x12f760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x12f764: 0xc050cd4  jal         func_143350
    ctx->pc = 0x12F764u;
    SET_GPR_U32(ctx, 31, 0x12F76Cu);
    ctx->pc = 0x12F768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F764u;
    // 0x12f768: 0x24845a40  addiu       $a0, $a0, 0x5A40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143350u, 0x12F764u, 0x12F76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F76Cu;
label_12f76c:
    // 0x12f76c: 0x0  nop
    ctx->pc = 0x12f76cu;
    // NOP
label_12f770:
    // 0x12f770: 0xc04be24  jal         func_12F890
    ctx->pc = 0x12F770u;
    SET_GPR_U32(ctx, 31, 0x12F778u);
    ctx->pc = 0x12F774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F770u;
    // 0x12f774: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F890u, 0x12F770u, 0x12F778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F778u;
label_12f778:
    // 0x12f778: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12f778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12f77c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12f77cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12f780: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12f780u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f784: 0x3e00008  jr          $ra
    ctx->pc = 0x12F784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F784u;
        // 0x12f788: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12F78Cu;
}
