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

// Function: sub_002C8760
// Address: 0x2c8760 - 0x2c884c
void sub_002C8760_0x2c8760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C8760_0x2c8760");
#endif

    switch (ctx->pc) {
        case 0x2c87e4u: goto label_2c87e4;
        default: break;
    }

    ctx->pc = 0x2c8760u;

    // 0x2c8760: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c8760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c8764: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c8764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c8768: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c8768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c876c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c876cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c8770: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8770u;
    {
        const bool branch_taken_0x2c8770 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8770u;
        // 0x2c8774: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8770) {
            ctx->pc = 0x2C8780u;
            goto label_2c8780;
        }
    }
    ctx->pc = 0x2C8778u;
    // 0x2c8778: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2C8778u;
    {
        const bool branch_taken_0x2c8778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C877Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8778u;
        // 0x2c877c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8778) {
            ctx->pc = 0x2C8838u;
            goto label_2c8838;
        }
    }
    ctx->pc = 0x2C8780u;
label_2c8780:
    // 0x2c8780: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x2c8780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2c8784: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x2c8784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c8788: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2c8788u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c878c: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x2c878cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8790: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2c8790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c8794: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x2c8794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8798: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c8798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c879c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c879cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c87a0: 0xe4e20000  swc1        $f2, 0x0($a3)
    ctx->pc = 0x2c87a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x2c87a4: 0xe4e10004  swc1        $f1, 0x4($a3)
    ctx->pc = 0x2c87a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x2c87a8: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x2c87a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x2c87ac: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x2c87acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c87b0: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x2c87b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c87b4: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x2c87b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c87b8: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x2c87b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2c87bc: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x2c87bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x2c87c0: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x2c87c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x2c87c4: 0x8e30002c  lw          $s0, 0x2C($s1)
    ctx->pc = 0x2c87c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x2c87c8: 0xa38389d0  sb          $v1, -0x7630($gp)
    ctx->pc = 0x2c87c8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937040), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c87cc: 0xa38089d8  sb          $zero, -0x7628($gp)
    ctx->pc = 0x2c87ccu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c87d0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2c87d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c87d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c87d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c87d8: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x2c87d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2c87dc: 0xc0b1a24  jal         func_2C6890
    ctx->pc = 0x2C87DCu;
    SET_GPR_U32(ctx, 31, 0x2C87E4u);
    ctx->pc = 0x2C87E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C87DCu;
    // 0x2c87e0: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6890u, 0x2C87DCu, 0x2C87E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C87E4u;
label_2c87e4:
    // 0x2c87e4: 0x938489d8  lbu         $a0, -0x7628($gp)
    ctx->pc = 0x2c87e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937048)));
    // 0x2c87e8: 0x14800011  bnez        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C87E8u;
    {
        const bool branch_taken_0x2c87e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C87ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C87E8u;
        // 0x2c87ec: 0xa38089d0  sb          $zero, -0x7630($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294937040), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c87e8) {
            ctx->pc = 0x2C8830u;
            goto label_2c8830;
        }
    }
    ctx->pc = 0x2C87F0u;
    // 0x2c87f0: 0xae30002c  sw          $s0, 0x2C($s1)
    ctx->pc = 0x2c87f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 16));
    // 0x2c87f4: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x2c87f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c87f8: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2c87f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c87fc: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x2c87fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c8800: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2c8800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8804: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2c8804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8808: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x2c8808u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2c880c: 0xe621000c  swc1        $f1, 0xC($s1)
    ctx->pc = 0x2c880cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x2c8810: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x2c8810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x2c8814: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2c8814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c8818: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2c8818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c881c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2c881cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8820: 0xe6220014  swc1        $f2, 0x14($s1)
    ctx->pc = 0x2c8820u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x2c8824: 0xe6210018  swc1        $f1, 0x18($s1)
    ctx->pc = 0x2c8824u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x2c8828: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x2c8828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x2c882c: 0x0  nop
    ctx->pc = 0x2c882cu;
    // NOP
label_2c8830:
    // 0x2c8830: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x2c8830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2c8834: 0x0  nop
    ctx->pc = 0x2c8834u;
    // NOP
label_2c8838:
    // 0x2c8838: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c8838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c883c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c883cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c8840: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c8840u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c8844: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8844u;
        // 0x2c8848: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C884Cu;
}
