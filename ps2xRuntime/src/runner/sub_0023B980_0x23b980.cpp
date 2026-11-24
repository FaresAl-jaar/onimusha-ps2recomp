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

// Function: sub_0023B980
// Address: 0x23b980 - 0x23baac
void sub_0023B980_0x23b980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B980_0x23b980");
#endif

    switch (ctx->pc) {
        case 0x23b9acu: goto label_23b9ac;
        case 0x23b9ccu: goto label_23b9cc;
        case 0x23b9f0u: goto label_23b9f0;
        case 0x23ba00u: goto label_23ba00;
        case 0x23ba2cu: goto label_23ba2c;
        case 0x23ba94u: goto label_23ba94;
        default: break;
    }

    ctx->pc = 0x23b980u;

    // 0x23b980: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23b980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23b984: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x23b984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x23b988: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x23b988u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b98c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x23b98cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x23b990: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23b990u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b994: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x23b994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x23b998: 0x16400007  bnez        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x23B998u;
    {
        const bool branch_taken_0x23b998 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B998u;
        // 0x23b99c: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b998) {
            ctx->pc = 0x23B9B8u;
            goto label_23b9b8;
        }
    }
    ctx->pc = 0x23B9A0u;
    // 0x23b9a0: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x23b9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x23b9a4: 0xc08baa4  jal         func_22EA90
    ctx->pc = 0x23B9A4u;
    SET_GPR_U32(ctx, 31, 0x23B9ACu);
    ctx->pc = 0x23B9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B9A4u;
    // 0x23b9a8: 0x2484b650  addiu       $a0, $a0, -0x49B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA90u, 0x23B9A4u, 0x23B9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B9ACu;
label_23b9ac:
    // 0x23b9ac: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x23B9ACu;
    {
        const bool branch_taken_0x23b9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B9ACu;
        // 0x23b9b0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b9ac) {
            ctx->pc = 0x23BA98u;
            goto label_23ba98;
        }
    }
    ctx->pc = 0x23B9B4u;
    // 0x23b9b4: 0x0  nop
    ctx->pc = 0x23b9b4u;
    // NOP
label_23b9b8:
    // 0x23b9b8: 0x82420072  lb          $v0, 0x72($s2)
    ctx->pc = 0x23b9b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 114)));
    // 0x23b9bc: 0x12020035  beq         $s0, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x23B9BCu;
    {
        const bool branch_taken_0x23b9bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x23B9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B9BCu;
        // 0x23b9c0: 0x82510001  lb          $s1, 0x1($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b9bc) {
            ctx->pc = 0x23BA94u;
            goto label_23ba94;
        }
    }
    ctx->pc = 0x23B9C4u;
    // 0x23b9c4: 0xc08b528  jal         func_22D4A0
    ctx->pc = 0x23B9C4u;
    SET_GPR_U32(ctx, 31, 0x23B9CCu);
    ctx->pc = 0x22D4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4A0u, 0x23B9C4u, 0x23B9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B9CCu;
label_23b9cc:
    // 0x23b9cc: 0x2622fffd  addiu       $v0, $s1, -0x3
    ctx->pc = 0x23b9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967293));
    // 0x23b9d0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x23b9d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x23b9d4: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x23B9D4u;
    {
        const bool branch_taken_0x23b9d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B9D4u;
        // 0x23b9d8: 0xa2500072  sb          $s0, 0x72($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 114), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b9d4) {
            ctx->pc = 0x23BA8Cu;
            goto label_23ba8c;
        }
    }
    ctx->pc = 0x23B9DCu;
    // 0x23b9dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23b9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23b9e0: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23B9E0u;
    {
        const bool branch_taken_0x23b9e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x23B9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B9E0u;
        // 0x23b9e4: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b9e0) {
            ctx->pc = 0x23B9F8u;
            goto label_23b9f8;
        }
    }
    ctx->pc = 0x23B9E8u;
    // 0x23b9e8: 0xc08d558  jal         func_235560
    ctx->pc = 0x23B9E8u;
    SET_GPR_U32(ctx, 31, 0x23B9F0u);
    ctx->pc = 0x23B9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B9E8u;
    // 0x23b9ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235560u, 0x23B9E8u, 0x23B9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B9F0u;
label_23b9f0:
    // 0x23b9f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x23B9F0u;
    {
        const bool branch_taken_0x23b9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B9F0u;
        // 0x23b9f4: 0x3c10004d  lui         $s0, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)77 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b9f0) {
            ctx->pc = 0x23BA10u;
            goto label_23ba10;
        }
    }
    ctx->pc = 0x23B9F8u;
label_23b9f8:
    // 0x23b9f8: 0xc08d558  jal         func_235560
    ctx->pc = 0x23B9F8u;
    SET_GPR_U32(ctx, 31, 0x23BA00u);
    ctx->pc = 0x23B9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B9F8u;
    // 0x23b9fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235560u, 0x23B9F8u, 0x23BA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BA00u;
label_23ba00:
    // 0x23ba00: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x23ba00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x23ba04: 0x8c43ef80  lw          $v1, -0x1080($v0)
    ctx->pc = 0x23ba04u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4BEF80u));
    // 0x23ba08: 0xae4300a0  sw          $v1, 0xA0($s2)
    ctx->pc = 0x23ba08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 3));
    // 0x23ba0c: 0x3c10004d  lui         $s0, 0x4D
    ctx->pc = 0x23ba0cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)77 << 16));
label_23ba10:
    // 0x23ba10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23ba10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ba14: 0x26108f84  addiu       $s0, $s0, -0x707C
    ctx->pc = 0x23ba14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294938500));
    // 0x23ba18: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x23ba18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ba1c: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x23ba1cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23ba20: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x23ba20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x23ba24: 0xc08e824  jal         func_23A090
    ctx->pc = 0x23BA24u;
    SET_GPR_U32(ctx, 31, 0x23BA2Cu);
    ctx->pc = 0x23BA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BA24u;
    // 0x23ba28: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A090u, 0x23BA24u, 0x23BA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BA2Cu;
label_23ba2c:
    // 0x23ba2c: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x23ba2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x23ba30: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x23ba30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23ba34: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23ba34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x23ba38: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x23ba38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x23ba3c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x23ba3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x23ba40: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x23ba40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23ba44: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x23ba44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x23ba48: 0xc4418fd0  lwc1        $f1, -0x7030($v0)
    ctx->pc = 0x23ba48u;
    { uint32_t bits = FAST_READ32(0x4C8FD0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ba4c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x23ba4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x23ba50: 0x0  nop
    ctx->pc = 0x23ba50u;
    // NOP
    // 0x23ba54: 0x0  nop
    ctx->pc = 0x23ba54u;
    // NOP
    // 0x23ba58: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x23ba58u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x23ba5c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x23ba5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x23ba60: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x23ba60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23ba64: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x23ba64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x23ba68: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x23ba68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x23ba6c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x23BA6Cu;
    {
        const bool branch_taken_0x23ba6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23BA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA6Cu;
        // 0x23ba70: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ba6c) {
            ctx->pc = 0x23BA88u;
            goto label_23ba88;
        }
    }
    ctx->pc = 0x23BA74u;
    // 0x23ba74: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x23ba74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x23ba78: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x23ba78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x23ba7c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x23ba7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x23ba80: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x23ba80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x23ba84: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x23ba84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_23ba88:
    // 0x23ba88: 0xae43009c  sw          $v1, 0x9C($s2)
    ctx->pc = 0x23ba88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 3));
label_23ba8c:
    // 0x23ba8c: 0xc08b52e  jal         func_22D4B8
    ctx->pc = 0x23BA8Cu;
    SET_GPR_U32(ctx, 31, 0x23BA94u);
    ctx->pc = 0x22D4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4B8u, 0x23BA8Cu, 0x23BA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BA94u;
label_23ba94:
    // 0x23ba94: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x23ba94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23ba98:
    // 0x23ba98: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x23ba98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23ba9c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23ba9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23baa0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x23baa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23baa4: 0x3e00008  jr          $ra
    ctx->pc = 0x23BAA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23BAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BAA4u;
        // 0x23baa8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BAA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23BAACu;
}
