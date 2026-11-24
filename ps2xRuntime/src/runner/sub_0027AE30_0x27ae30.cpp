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

// Function: sub_0027AE30
// Address: 0x27ae30 - 0x27b0b0
void sub_0027AE30_0x27ae30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027AE30_0x27ae30");
#endif

    switch (ctx->pc) {
        case 0x27af00u: goto label_27af00;
        case 0x27af50u: goto label_27af50;
        case 0x27b040u: goto label_27b040;
        case 0x27b08cu: goto label_27b08c;
        default: break;
    }

    ctx->pc = 0x27ae30u;

    // 0x27ae30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27ae30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27ae34: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x27ae34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x27ae38: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x27ae38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x27ae3c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x27ae3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x27ae40: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x27ae40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ae44: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27ae44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x27ae48: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x27ae48u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x27ae4c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x27ae4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x27ae50: 0x94e40000  lhu         $a0, 0x0($a3)
    ctx->pc = 0x27ae50u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x27ae54: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27AE54u;
    {
        const bool branch_taken_0x27ae54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x27AE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AE54u;
        // 0x27ae58: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ae54) {
            ctx->pc = 0x27AE68u;
            goto label_27ae68;
        }
    }
    ctx->pc = 0x27AE5Cu;
    // 0x27ae5c: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x27AE5Cu;
    {
        const bool branch_taken_0x27ae5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AE5Cu;
        // 0x27ae60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ae5c) {
            ctx->pc = 0x27B090u;
            goto label_27b090;
        }
    }
    ctx->pc = 0x27AE64u;
    // 0x27ae64: 0x0  nop
    ctx->pc = 0x27ae64u;
    // NOP
label_27ae68:
    // 0x27ae68: 0xc64107b8  lwc1        $f1, 0x7B8($s2)
    ctx->pc = 0x27ae68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27ae6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27ae6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ae70: 0x0  nop
    ctx->pc = 0x27ae70u;
    // NOP
    // 0x27ae74: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x27ae74u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27ae78: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x27AE78u;
    {
        const bool branch_taken_0x27ae78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27AE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AE78u;
        // 0x27ae7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ae78) {
            ctx->pc = 0x27AE88u;
            goto label_27ae88;
        }
    }
    ctx->pc = 0x27AE80u;
    // 0x27ae80: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x27AE80u;
    {
        const bool branch_taken_0x27ae80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ae80) {
            ctx->pc = 0x27B090u;
            goto label_27b090;
        }
    }
    ctx->pc = 0x27AE88u;
label_27ae88:
    // 0x27ae88: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x27ae88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x27ae8c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x27ae8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x27ae90: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27AE90u;
    {
        const bool branch_taken_0x27ae90 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x27AE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AE90u;
        // 0x27ae94: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ae90) {
            ctx->pc = 0x27AEA4u;
            goto label_27aea4;
        }
    }
    ctx->pc = 0x27AE98u;
    // 0x27ae98: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x27ae98u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ae9c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27AE9Cu;
    {
        const bool branch_taken_0x27ae9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AE9Cu;
        // 0x27aea0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ae9c) {
            ctx->pc = 0x27AEBCu;
            goto label_27aebc;
        }
    }
    ctx->pc = 0x27AEA4u;
label_27aea4:
    // 0x27aea4: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x27aea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x27aea8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x27aea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x27aeac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27aeacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27aeb0: 0x0  nop
    ctx->pc = 0x27aeb0u;
    // NOP
    // 0x27aeb4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27aeb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27aeb8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x27aeb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_27aebc:
    // 0x27aebc: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x27aebcu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x27aec0: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x27aec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x27aec4: 0x3444d70a  ori         $a0, $v0, 0xD70A
    ctx->pc = 0x27aec4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x27aec8: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x27aec8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x27aecc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27aeccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27aed0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x27aed0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27aed4: 0x14620042  bne         $v1, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x27AED4u;
    {
        const bool branch_taken_0x27aed4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27AED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AED4u;
        // 0x27aed8: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aed4) {
            ctx->pc = 0x27AFE0u;
            goto label_27afe0;
        }
    }
    ctx->pc = 0x27AEDCu;
    // 0x27aedc: 0x8e4329c0  lw          $v1, 0x29C0($s2)
    ctx->pc = 0x27aedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10688)));
    // 0x27aee0: 0x3c020092  lui         $v0, 0x92
    ctx->pc = 0x27aee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)146 << 16));
    // 0x27aee4: 0x924429d0  lbu         $a0, 0x29D0($s2)
    ctx->pc = 0x27aee4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10704)));
    // 0x27aee8: 0x24421760  addiu       $v0, $v0, 0x1760
    ctx->pc = 0x27aee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5984));
    // 0x27aeec: 0x9063005f  lbu         $v1, 0x5F($v1)
    ctx->pc = 0x27aeecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 95)));
    // 0x27aef0: 0x31a40  sll         $v1, $v1, 9
    ctx->pc = 0x27aef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
    // 0x27aef4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27aef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27aef8: 0xc0bd100  jal         func_2F4400
    ctx->pc = 0x27AEF8u;
    SET_GPR_U32(ctx, 31, 0x27AF00u);
    ctx->pc = 0x27AEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AEF8u;
    // 0x27aefc: 0x24500110  addiu       $s0, $v0, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4400u, 0x27AEF8u, 0x27AF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AF00u;
label_27af00:
    // 0x27af00: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x27af00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27af04: 0x8e4229c0  lw          $v0, 0x29C0($s2)
    ctx->pc = 0x27af04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10688)));
    // 0x27af08: 0x90420004  lbu         $v0, 0x4($v0)
    ctx->pc = 0x27af08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27af0c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x27af0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x27af10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27af10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27af14: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27AF14u;
    {
        const bool branch_taken_0x27af14 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x27AF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AF14u;
        // 0x27af18: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27af14) {
            ctx->pc = 0x27AF28u;
            goto label_27af28;
        }
    }
    ctx->pc = 0x27AF1Cu;
    // 0x27af1c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x27af1cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27af20: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27AF20u;
    {
        const bool branch_taken_0x27af20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AF20u;
        // 0x27af24: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27af20) {
            ctx->pc = 0x27AF44u;
            goto label_27af44;
        }
    }
    ctx->pc = 0x27AF28u;
label_27af28:
    // 0x27af28: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x27af28u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x27af2c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x27af2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x27af30: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x27af30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x27af34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27af34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27af38: 0x0  nop
    ctx->pc = 0x27af38u;
    // NOP
    // 0x27af3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27af3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27af40: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x27af40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_27af44:
    // 0x27af44: 0x924429d0  lbu         $a0, 0x29D0($s2)
    ctx->pc = 0x27af44u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10704)));
    // 0x27af48: 0xc0bd100  jal         func_2F4400
    ctx->pc = 0x27AF48u;
    SET_GPR_U32(ctx, 31, 0x27AF50u);
    ctx->pc = 0x27AF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AF48u;
    // 0x27af4c: 0x46000d40  add.s       $f21, $f1, $f0 (Delay Slot)
    ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4400u, 0x27AF48u, 0x27AF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AF50u;
label_27af50:
    // 0x27af50: 0x92240002  lbu         $a0, 0x2($s1)
    ctx->pc = 0x27af50u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x27af54: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x27af54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27af58: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x27af58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x27af5c: 0x24422880  addiu       $v0, $v0, 0x2880
    ctx->pc = 0x27af5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10368));
    // 0x27af60: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x27af60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x27af64: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27af64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27af68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27af68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27af6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27af6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27af70: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x27af70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27af74: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x27AF74u;
    {
        const bool branch_taken_0x27af74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AF74u;
        // 0x27af78: 0x4600ad42  mul.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27af74) {
            ctx->pc = 0x27AF90u;
            goto label_27af90;
        }
    }
    ctx->pc = 0x27AF7Cu;
    // 0x27af7c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x27af7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x27af80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x27af80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27af84: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x27af84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x27af88: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x27af88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27af8c: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x27af8cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_27af90:
    // 0x27af90: 0x8602008c  lh          $v0, 0x8C($s0)
    ctx->pc = 0x27af90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x27af94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27af94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27af98: 0x0  nop
    ctx->pc = 0x27af98u;
    // NOP
    // 0x27af9c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27af9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27afa0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x27AFA0u;
    {
        const bool branch_taken_0x27afa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AFA0u;
        // 0x27afa4: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27afa0) {
            ctx->pc = 0x27AFC8u;
            goto label_27afc8;
        }
    }
    ctx->pc = 0x27AFA8u;
    // 0x27afa8: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x27afa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x27afac: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x27afacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x27afb0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x27afb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x27afb4: 0x8442008c  lh          $v0, 0x8C($v0)
    ctx->pc = 0x27afb4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x27afb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27afb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27afbc: 0x0  nop
    ctx->pc = 0x27afbcu;
    // NOP
    // 0x27afc0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27afc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27afc4: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x27afc4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_27afc8:
    // 0x27afc8: 0x824207bd  lb          $v0, 0x7BD($s2)
    ctx->pc = 0x27afc8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1981)));
    // 0x27afcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27afccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27afd0: 0x0  nop
    ctx->pc = 0x27afd0u;
    // NOP
    // 0x27afd4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27afd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27afd8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x27AFD8u;
    {
        const bool branch_taken_0x27afd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AFD8u;
        // 0x27afdc: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27afd8) {
            ctx->pc = 0x27B030u;
            goto label_27b030;
        }
    }
    ctx->pc = 0x27AFE0u;
label_27afe0:
    // 0x27afe0: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x27afe0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x27afe4: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x27afe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x27afe8: 0x24422876  addiu       $v0, $v0, 0x2876
    ctx->pc = 0x27afe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10358));
    // 0x27afec: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x27afecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x27aff0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27aff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27aff4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27aff4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27aff8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27aff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27affc: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x27affcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27b000: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27B000u;
    {
        const bool branch_taken_0x27b000 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x27B004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B000u;
        // 0x27b004: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b000) {
            ctx->pc = 0x27B014u;
            goto label_27b014;
        }
    }
    ctx->pc = 0x27B008u;
    // 0x27b008: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27b008u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27b00c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27B00Cu;
    {
        const bool branch_taken_0x27b00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B00Cu;
        // 0x27b010: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b00c) {
            ctx->pc = 0x27B02Cu;
            goto label_27b02c;
        }
    }
    ctx->pc = 0x27B014u;
label_27b014:
    // 0x27b014: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27b014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27b018: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x27b018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x27b01c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27b01cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27b020: 0x0  nop
    ctx->pc = 0x27b020u;
    // NOP
    // 0x27b024: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x27b024u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x27b028: 0x4615ad40  add.s       $f21, $f21, $f21
    ctx->pc = 0x27b028u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
label_27b02c:
    // 0x27b02c: 0x0  nop
    ctx->pc = 0x27b02cu;
    // NOP
label_27b030:
    // 0x27b030: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x27b030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x27b034: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x27b034u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x27b038: 0xc096968  jal         func_25A5A0
    ctx->pc = 0x27B038u;
    SET_GPR_U32(ctx, 31, 0x27B040u);
    ctx->pc = 0x27B03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B038u;
    // 0x27b03c: 0x4615a301  sub.s       $f12, $f20, $f21 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5A0u, 0x27B038u, 0x27B040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B040u;
label_27b040:
    // 0x27b040: 0xc64207b8  lwc1        $f2, 0x7B8($s2)
    ctx->pc = 0x27b040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27b044: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x27b044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x27b048: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27b048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27b04c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x27b04cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x27b050: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x27b050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x27b054: 0x90226c10  lbu         $v0, 0x6C10($at)
    ctx->pc = 0x27b054u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x8D6C10u));
    // 0x27b058: 0xc62307b4  lwc1        $f3, 0x7B4($s1)
    ctx->pc = 0x27b058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27b05c: 0x246360d0  addiu       $v1, $v1, 0x60D0
    ctx->pc = 0x27b05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24784));
    // 0x27b060: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x27b060u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x27b064: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x27b064u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27b068: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x27b068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27b06c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x27b06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27b070: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x27b070u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x27b074: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x27b074u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x27b078: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27b078u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27b07c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27b07cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x27b080: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x27b080u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x27b084: 0xc096974  jal         func_25A5D0
    ctx->pc = 0x27B084u;
    SET_GPR_U32(ctx, 31, 0x27B08Cu);
    ctx->pc = 0x27B088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B084u;
    // 0x27b088: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x27B084u, 0x27B08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B08Cu;
label_27b08c:
    // 0x27b08c: 0x0  nop
    ctx->pc = 0x27b08cu;
    // NOP
label_27b090:
    // 0x27b090: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x27b090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27b094: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x27b094u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27b098: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x27b098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27b09c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x27b09cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27b0a0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x27b0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27b0a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27b0a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27b0a8: 0x3e00008  jr          $ra
    ctx->pc = 0x27B0A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B0A8u;
        // 0x27b0ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B0A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B0B0u;
}
