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

// Function: sub_0035FED0
// Address: 0x35fed0 - 0x3600a0
void sub_0035FED0_0x35fed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035FED0_0x35fed0");
#endif

    switch (ctx->pc) {
        case 0x35ffacu: goto label_35ffac;
        case 0x35ffc4u: goto label_35ffc4;
        case 0x35ffe4u: goto label_35ffe4;
        default: break;
    }

    ctx->pc = 0x35fed0u;

    // 0x35fed0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35fed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35fed4: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x35fed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x35fed8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35fed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35fedc: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x35fedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x35fee0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35fee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35fee4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35fee4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fee8: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x35fee8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x35feec: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x35feecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x35fef0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x35fef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x35fef4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x35fef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35fef8: 0x10800065  beqz        $a0, . + 4 + (0x65 << 2)
    ctx->pc = 0x35FEF8u;
    {
        const bool branch_taken_0x35fef8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x35fef8) {
            ctx->pc = 0x360090u;
            goto label_360090;
        }
    }
    ctx->pc = 0x35FF00u;
    // 0x35ff00: 0x8e031fb8  lw          $v1, 0x1FB8($s0)
    ctx->pc = 0x35ff00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8120)));
    // 0x35ff04: 0x10600062  beqz        $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x35FF04u;
    {
        const bool branch_taken_0x35ff04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35ff04) {
            ctx->pc = 0x360090u;
            goto label_360090;
        }
    }
    ctx->pc = 0x35FF0Cu;
    // 0x35ff0c: 0xc48c0020  lwc1        $f12, 0x20($a0)
    ctx->pc = 0x35ff0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x35ff10: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x35ff10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35ff14: 0x460c0836  c.le.s      $f1, $f12
    ctx->pc = 0x35ff14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35ff18: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x35FF18u;
    {
        const bool branch_taken_0x35ff18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x35ff18) {
            ctx->pc = 0x35FF30u;
            goto label_35ff30;
        }
    }
    ctx->pc = 0x35FF20u;
    // 0x35ff20: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x35ff20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35ff24: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x35ff24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35ff28: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x35FF28u;
    {
        const bool branch_taken_0x35ff28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x35ff28) {
            ctx->pc = 0x35FF98u;
            goto label_35ff98;
        }
    }
    ctx->pc = 0x35FF30u;
label_35ff30:
    // 0x35ff30: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x35ff30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35ff34: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x35ff34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35ff38: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x35FF38u;
    {
        const bool branch_taken_0x35ff38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x35ff38) {
            ctx->pc = 0x35FF50u;
            goto label_35ff50;
        }
    }
    ctx->pc = 0x35FF40u;
    // 0x35ff40: 0x46016036  c.le.s      $f12, $f1
    ctx->pc = 0x35ff40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35ff44: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x35FF44u;
    {
        const bool branch_taken_0x35ff44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x35ff44) {
            ctx->pc = 0x35FF98u;
            goto label_35ff98;
        }
    }
    ctx->pc = 0x35FF4Cu;
    // 0x35ff4c: 0x0  nop
    ctx->pc = 0x35ff4cu;
    // NOP
label_35ff50:
    // 0x35ff50: 0xc4820028  lwc1        $f2, 0x28($a0)
    ctx->pc = 0x35ff50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35ff54: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x35ff54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35ff58: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x35ff58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35ff5c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x35FF5Cu;
    {
        const bool branch_taken_0x35ff5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x35ff5c) {
            ctx->pc = 0x35FF78u;
            goto label_35ff78;
        }
    }
    ctx->pc = 0x35FF64u;
    // 0x35ff64: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x35ff64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35ff68: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x35ff68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35ff6c: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x35FF6Cu;
    {
        const bool branch_taken_0x35ff6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x35ff6c) {
            ctx->pc = 0x35FF98u;
            goto label_35ff98;
        }
    }
    ctx->pc = 0x35FF74u;
    // 0x35ff74: 0x0  nop
    ctx->pc = 0x35ff74u;
    // NOP
label_35ff78:
    // 0x35ff78: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x35ff78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35ff7c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x35ff7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35ff80: 0x45000043  bc1f        . + 4 + (0x43 << 2)
    ctx->pc = 0x35FF80u;
    {
        const bool branch_taken_0x35ff80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x35ff80) {
            ctx->pc = 0x360090u;
            goto label_360090;
        }
    }
    ctx->pc = 0x35FF88u;
    // 0x35ff88: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x35ff88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35ff8c: 0x45000040  bc1f        . + 4 + (0x40 << 2)
    ctx->pc = 0x35FF8Cu;
    {
        const bool branch_taken_0x35ff8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x35ff8c) {
            ctx->pc = 0x360090u;
            goto label_360090;
        }
    }
    ctx->pc = 0x35FF94u;
    // 0x35ff94: 0x0  nop
    ctx->pc = 0x35ff94u;
    // NOP
label_35ff98:
    // 0x35ff98: 0x82021fb7  lb          $v0, 0x1FB7($s0)
    ctx->pc = 0x35ff98u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 8119)));
    // 0x35ff9c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x35FF9Cu;
    {
        const bool branch_taken_0x35ff9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35FFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FF9Cu;
        // 0x35ffa0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ff9c) {
            ctx->pc = 0x35FFD0u;
            goto label_35ffd0;
        }
    }
    ctx->pc = 0x35FFA4u;
    // 0x35ffa4: 0xc0a6a38  jal         func_29A8E0
    ctx->pc = 0x35FFA4u;
    SET_GPR_U32(ctx, 31, 0x35FFACu);
    ctx->pc = 0x29A8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A8E0u, 0x35FFA4u, 0x35FFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FFACu;
label_35ffac:
    // 0x35ffac: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x35ffacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x35ffb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35ffb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ffb4: 0xc7ad0028  lwc1        $f13, 0x28($sp)
    ctx->pc = 0x35ffb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x35ffb8: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x35ffb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x35ffbc: 0xc0d82f0  jal         func_360BC0
    ctx->pc = 0x35FFBCu;
    SET_GPR_U32(ctx, 31, 0x35FFC4u);
    ctx->pc = 0x35FFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FFBCu;
    // 0x35ffc0: 0x27a60038  addiu       $a2, $sp, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360BC0u, 0x35FFBCu, 0x35FFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FFC4u;
label_35ffc4:
    // 0x35ffc4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x35FFC4u;
    {
        const bool branch_taken_0x35ffc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35ffc4) {
            ctx->pc = 0x35FFE8u;
            goto label_35ffe8;
        }
    }
    ctx->pc = 0x35FFCCu;
    // 0x35ffcc: 0x0  nop
    ctx->pc = 0x35ffccu;
    // NOP
label_35ffd0:
    // 0x35ffd0: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x35ffd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x35ffd4: 0xc48d0028  lwc1        $f13, 0x28($a0)
    ctx->pc = 0x35ffd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x35ffd8: 0x27a60038  addiu       $a2, $sp, 0x38
    ctx->pc = 0x35ffd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x35ffdc: 0xc0d82f0  jal         func_360BC0
    ctx->pc = 0x35FFDCu;
    SET_GPR_U32(ctx, 31, 0x35FFE4u);
    ctx->pc = 0x35FFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FFDCu;
    // 0x35ffe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360BC0u, 0x35FFDCu, 0x35FFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FFE4u;
label_35ffe4:
    // 0x35ffe4: 0x0  nop
    ctx->pc = 0x35ffe4u;
    // NOP
label_35ffe8:
    // 0x35ffe8: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x35ffe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x35ffec: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35FFECu;
    {
        const bool branch_taken_0x35ffec = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x35FFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FFECu;
        // 0x35fff0: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ffec) {
            ctx->pc = 0x35FFFCu;
            goto label_35fffc;
        }
    }
    ctx->pc = 0x35FFF4u;
    // 0x35fff4: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x35fff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x35fff8: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x35fff8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_35fffc:
    // 0x35fffc: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x35fffcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x360000: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x360000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
    // 0x360004: 0x3c039249  lui         $v1, 0x9249
    ctx->pc = 0x360004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37449 << 16));
    // 0x360008: 0x8fa7003c  lw          $a3, 0x3C($sp)
    ctx->pc = 0x360008u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x36000c: 0x34632493  ori         $v1, $v1, 0x2493
    ctx->pc = 0x36000cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9363);
    // 0x360010: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x360010u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x360014: 0x627c2  srl         $a0, $a2, 31
    ctx->pc = 0x360014u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x360018: 0x72943  sra         $a1, $a3, 5
    ctx->pc = 0x360018u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 7), 5));
    // 0x36001c: 0x1810  mfhi        $v1
    ctx->pc = 0x36001cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x360020: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x360020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x360024: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x360024u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x360028: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x360028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x36002c: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x36002Cu;
    {
        const bool branch_taken_0x36002c = (GPR_S64(ctx, 7) >= 0);
        ctx->pc = 0x360030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36002Cu;
        // 0x360030: 0xafa30038  sw          $v1, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36002c) {
            ctx->pc = 0x36003Cu;
            goto label_36003c;
        }
    }
    ctx->pc = 0x360034u;
    // 0x360034: 0x24e3001f  addiu       $v1, $a3, 0x1F
    ctx->pc = 0x360034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 31));
    // 0x360038: 0x32943  sra         $a1, $v1, 5
    ctx->pc = 0x360038u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 5));
label_36003c:
    // 0x36003c: 0x86030004  lh          $v1, 0x4($s0)
    ctx->pc = 0x36003cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x360040: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x360040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x360044: 0x2861003f  slti        $at, $v1, 0x3F
    ctx->pc = 0x360044u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)63) ? 1 : 0);
    // 0x360048: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x360048u;
    {
        const bool branch_taken_0x360048 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x36004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360048u;
        // 0x36004c: 0x853021  addu        $a2, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360048) {
            ctx->pc = 0x360090u;
            goto label_360090;
        }
    }
    ctx->pc = 0x360050u;
    // 0x360050: 0x28c10020  slti        $at, $a2, 0x20
    ctx->pc = 0x360050u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x360054: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x360054u;
    {
        const bool branch_taken_0x360054 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x360054) {
            ctx->pc = 0x360090u;
            goto label_360090;
        }
    }
    ctx->pc = 0x36005Cu;
    // 0x36005c: 0x4c0000c  bltz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x36005Cu;
    {
        const bool branch_taken_0x36005c = (GPR_S64(ctx, 6) < 0);
        if (branch_taken_0x36005c) {
            ctx->pc = 0x360090u;
            goto label_360090;
        }
    }
    ctx->pc = 0x360064u;
    // 0x360064: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x360064u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x360068: 0x30e5001f  andi        $a1, $a3, 0x1F
    ctx->pc = 0x360068u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)31);
    // 0x36006c: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x36006cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x360070: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x360070u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x360074: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x360074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x360078: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x360078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36007c: 0xa32804  sllv        $a1, $v1, $a1
    ctx->pc = 0x36007cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x360080: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x360080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x360084: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x360084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x360088: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x360088u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x36008c: 0x0  nop
    ctx->pc = 0x36008cu;
    // NOP
label_360090:
    // 0x360090: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x360090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x360094: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x360094u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x360098: 0x3e00008  jr          $ra
    ctx->pc = 0x360098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360098u;
        // 0x36009c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3600A0u;
}
