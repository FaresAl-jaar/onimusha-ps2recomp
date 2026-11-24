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

// Function: sub_00388850
// Address: 0x388850 - 0x388a54
void sub_00388850_0x388850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00388850_0x388850");
#endif

    switch (ctx->pc) {
        case 0x388870u: goto label_388870;
        case 0x3888f8u: goto label_3888f8;
        case 0x388904u: goto label_388904;
        case 0x388918u: goto label_388918;
        case 0x388940u: goto label_388940;
        case 0x388950u: goto label_388950;
        case 0x388960u: goto label_388960;
        case 0x38896cu: goto label_38896c;
        case 0x3889ecu: goto label_3889ec;
        case 0x388a3cu: goto label_388a3c;
        default: break;
    }

    ctx->pc = 0x388850u;

    // 0x388850: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x388850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x388854: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x388854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388858: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x388858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x38885c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x38885cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388860: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x388860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x388864: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x388864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x388868: 0xc09ffb0  jal         func_27FEC0
    ctx->pc = 0x388868u;
    SET_GPR_U32(ctx, 31, 0x388870u);
    ctx->pc = 0x38886Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388868u;
    // 0x38886c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27FEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27FEC0u, 0x388868u, 0x388870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388870u;
label_388870:
    // 0x388870: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x388870u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x388874: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x388874u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x388878: 0x10200071  beqz        $at, . + 4 + (0x71 << 2)
    ctx->pc = 0x388878u;
    {
        const bool branch_taken_0x388878 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x38887Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388878u;
        // 0x38887c: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388878) {
            ctx->pc = 0x388A40u;
            goto label_388a40;
        }
    }
    ctx->pc = 0x388880u;
    // 0x388880: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x388880u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x388884: 0x24841f80  addiu       $a0, $a0, 0x1F80
    ctx->pc = 0x388884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8064));
    // 0x388888: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x388888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x38888c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x38888cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x388890: 0x600008  jr          $v1
    ctx->pc = 0x388890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x388898u: goto label_388898;
            case 0x3888C8u: goto label_3888c8;
            case 0x3888E0u: goto label_3888e0;
            case 0x3889A8u: goto label_3889a8;
            case 0x3889D8u: goto label_3889d8;
            case 0x3889F8u: goto label_3889f8;
            case 0x388A28u: goto label_388a28;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x388890u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x388898u;
label_388898:
    // 0x388898: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x388898u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x38889c: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x38889cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3888a0: 0x2403009b  addiu       $v1, $zero, 0x9B
    ctx->pc = 0x3888a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
    // 0x3888a4: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x3888a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3888a8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3888a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3888ac: 0xa20307f5  sb          $v1, 0x7F5($s0)
    ctx->pc = 0x3888acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x3888b0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3888b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3888b4: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x3888b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3888b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3888b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3888bc: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x3888bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
    // 0x3888c0: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3888c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x3888c4: 0x0  nop
    ctx->pc = 0x3888c4u;
    // NOP
label_3888c8:
    // 0x3888c8: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x3888c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x3888cc: 0x1060005c  beqz        $v1, . + 4 + (0x5C << 2)
    ctx->pc = 0x3888CCu;
    {
        const bool branch_taken_0x3888cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3888D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3888CCu;
        // 0x3888d0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3888cc) {
            ctx->pc = 0x388A40u;
            goto label_388a40;
        }
    }
    ctx->pc = 0x3888D4u;
    // 0x3888d4: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x3888D4u;
    {
        const bool branch_taken_0x3888d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3888D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3888D4u;
        // 0x3888d8: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3888d4) {
            ctx->pc = 0x388A40u;
            goto label_388a40;
        }
    }
    ctx->pc = 0x3888DCu;
    // 0x3888dc: 0x0  nop
    ctx->pc = 0x3888dcu;
    // NOP
label_3888e0:
    // 0x3888e0: 0x14400057  bnez        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x3888E0u;
    {
        const bool branch_taken_0x3888e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3888e0) {
            ctx->pc = 0x388A40u;
            goto label_388a40;
        }
    }
    ctx->pc = 0x3888E8u;
    // 0x3888e8: 0x260207a0  addiu       $v0, $s0, 0x7A0
    ctx->pc = 0x3888e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1952));
    // 0x3888ec: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x3888ecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x3888f0: 0xc0e1cf8  jal         func_3873E0
    ctx->pc = 0x3888F0u;
    SET_GPR_U32(ctx, 31, 0x3888F8u);
    ctx->pc = 0x3888F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3888F0u;
    // 0x3888f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3873E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3873E0u, 0x3888F0u, 0x3888F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3888F8u;
label_3888f8:
    // 0x3888f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3888f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3888fc: 0xc0e1d0c  jal         func_387430
    ctx->pc = 0x3888FCu;
    SET_GPR_U32(ctx, 31, 0x388904u);
    ctx->pc = 0x388900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3888FCu;
    // 0x388900: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387430u, 0x3888FCu, 0x388904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388904u;
label_388904:
    // 0x388904: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x388904u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388908: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x388908u;
    {
        const bool branch_taken_0x388908 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x38890Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388908u;
        // 0x38890c: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388908) {
            ctx->pc = 0x388998u;
            goto label_388998;
        }
    }
    ctx->pc = 0x388910u;
    // 0x388910: 0xc076670  jal         func_1D99C0
    ctx->pc = 0x388910u;
    SET_GPR_U32(ctx, 31, 0x388918u);
    ctx->pc = 0x388914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388910u;
    // 0x388914: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D99C0u, 0x388910u, 0x388918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388918u;
label_388918:
    // 0x388918: 0x3c03481c  lui         $v1, 0x481C
    ctx->pc = 0x388918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18460 << 16));
    // 0x38891c: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x38891cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x388920: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x388920u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x388924: 0x0  nop
    ctx->pc = 0x388924u;
    // NOP
    // 0x388928: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x388928u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38892c: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x38892Cu;
    {
        const bool branch_taken_0x38892c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x38892c) {
            ctx->pc = 0x388998u;
            goto label_388998;
        }
    }
    ctx->pc = 0x388934u;
    // 0x388934: 0x860500c2  lh          $a1, 0xC2($s0)
    ctx->pc = 0x388934u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x388938: 0xc096e34  jal         func_25B8D0
    ctx->pc = 0x388938u;
    SET_GPR_U32(ctx, 31, 0x388940u);
    ctx->pc = 0x38893Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388938u;
    // 0x38893c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8D0u, 0x388938u, 0x388940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388940u;
label_388940:
    // 0x388940: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x388940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x388944: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x388944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x388948: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x388948u;
    SET_GPR_U32(ctx, 31, 0x388950u);
    ctx->pc = 0x38894Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388948u;
    // 0x38894c: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x388948u, 0x388950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388950u;
label_388950:
    // 0x388950: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x388950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x388954: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x388954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x388958: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x388958u;
    SET_GPR_U32(ctx, 31, 0x388960u);
    ctx->pc = 0x38895Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388958u;
    // 0x38895c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x388958u, 0x388960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388960u;
label_388960:
    // 0x388960: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x388960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x388964: 0xc076654  jal         func_1D9950
    ctx->pc = 0x388964u;
    SET_GPR_U32(ctx, 31, 0x38896Cu);
    ctx->pc = 0x388968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388964u;
    // 0x388968: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9950u, 0x388964u, 0x38896Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38896Cu;
label_38896c:
    // 0x38896c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x38896cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x388970: 0x0  nop
    ctx->pc = 0x388970u;
    // NOP
    // 0x388974: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x388974u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x388978: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x388978u;
    {
        const bool branch_taken_0x388978 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x38897Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388978u;
        // 0x38897c: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388978) {
            ctx->pc = 0x388988u;
            goto label_388988;
        }
    }
    ctx->pc = 0x388980u;
    // 0x388980: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x388980u;
    {
        const bool branch_taken_0x388980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388980u;
        // 0x388984: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388980) {
            ctx->pc = 0x388A40u;
            goto label_388a40;
        }
    }
    ctx->pc = 0x388988u;
label_388988:
    // 0x388988: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x388988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x38898c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x38898Cu;
    {
        const bool branch_taken_0x38898c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38898Cu;
        // 0x388990: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38898c) {
            ctx->pc = 0x388A40u;
            goto label_388a40;
        }
    }
    ctx->pc = 0x388994u;
    // 0x388994: 0x0  nop
    ctx->pc = 0x388994u;
    // NOP
label_388998:
    // 0x388998: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x388998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x38899c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x38899Cu;
    {
        const bool branch_taken_0x38899c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3889A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38899Cu;
        // 0x3889a0: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38899c) {
            ctx->pc = 0x388A40u;
            goto label_388a40;
        }
    }
    ctx->pc = 0x3889A4u;
    // 0x3889a4: 0x0  nop
    ctx->pc = 0x3889a4u;
    // NOP
label_3889a8:
    // 0x3889a8: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3889a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3889ac: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3889acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3889b0: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x3889b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x3889b4: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x3889b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3889b8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3889b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3889bc: 0xa20307f5  sb          $v1, 0x7F5($s0)
    ctx->pc = 0x3889bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x3889c0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3889c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3889c4: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x3889c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3889c8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3889c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3889cc: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x3889ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
    // 0x3889d0: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3889d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x3889d4: 0x0  nop
    ctx->pc = 0x3889d4u;
    // NOP
label_3889d8:
    // 0x3889d8: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x3889d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x3889dc: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x3889DCu;
    {
        const bool branch_taken_0x3889dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3889E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3889DCu;
        // 0x3889e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3889dc) {
            ctx->pc = 0x388A40u;
            goto label_388a40;
        }
    }
    ctx->pc = 0x3889E4u;
    // 0x3889e4: 0xc0a012c  jal         func_2804B0
    ctx->pc = 0x3889E4u;
    SET_GPR_U32(ctx, 31, 0x3889ECu);
    ctx->pc = 0x2804B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2804B0u, 0x3889E4u, 0x3889ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3889ECu;
label_3889ec:
    // 0x3889ec: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3889ECu;
    {
        const bool branch_taken_0x3889ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3889ec) {
            ctx->pc = 0x388A40u;
            goto label_388a40;
        }
    }
    ctx->pc = 0x3889F4u;
    // 0x3889f4: 0x0  nop
    ctx->pc = 0x3889f4u;
    // NOP
label_3889f8:
    // 0x3889f8: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3889f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3889fc: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3889fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x388a00: 0x24030065  addiu       $v1, $zero, 0x65
    ctx->pc = 0x388a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x388a04: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x388a04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x388a08: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x388a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x388a0c: 0xa20307f5  sb          $v1, 0x7F5($s0)
    ctx->pc = 0x388a0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x388a10: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x388a10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x388a14: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x388a14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x388a18: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x388a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x388a1c: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x388a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
    // 0x388a20: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x388a20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x388a24: 0x0  nop
    ctx->pc = 0x388a24u;
    // NOP
label_388a28:
    // 0x388a28: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x388a28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x388a2c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x388A2Cu;
    {
        const bool branch_taken_0x388a2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x388A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388A2Cu;
        // 0x388a30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388a2c) {
            ctx->pc = 0x388A40u;
            goto label_388a40;
        }
    }
    ctx->pc = 0x388A34u;
    // 0x388a34: 0xc0a012c  jal         func_2804B0
    ctx->pc = 0x388A34u;
    SET_GPR_U32(ctx, 31, 0x388A3Cu);
    ctx->pc = 0x2804B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2804B0u, 0x388A34u, 0x388A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388A3Cu;
label_388a3c:
    // 0x388a3c: 0x0  nop
    ctx->pc = 0x388a3cu;
    // NOP
label_388a40:
    // 0x388a40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x388a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x388a44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x388a44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x388a48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x388a48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x388a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x388A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x388A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388A4Cu;
        // 0x388a50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x388A4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x388A54u;
}
