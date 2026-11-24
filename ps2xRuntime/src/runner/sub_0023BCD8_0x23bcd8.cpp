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

// Function: sub_0023BCD8
// Address: 0x23bcd8 - 0x23bdbc
void sub_0023BCD8_0x23bcd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023BCD8_0x23bcd8");
#endif

    switch (ctx->pc) {
        case 0x23bd10u: goto label_23bd10;
        case 0x23bd18u: goto label_23bd18;
        case 0x23bd30u: goto label_23bd30;
        default: break;
    }

    ctx->pc = 0x23bcd8u;

    // 0x23bcd8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23bcd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23bcdc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x23bcdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x23bce0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x23bce0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bce4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x23bce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x23bce8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x23bce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x23bcec: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x23bcecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x23bcf0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x23bcf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x23bcf4: 0x82630072  lb          $v1, 0x72($s3)
    ctx->pc = 0x23bcf4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 114)));
    // 0x23bcf8: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x23BCF8u;
    {
        const bool branch_taken_0x23bcf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BCF8u;
        // 0x23bcfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bcf8) {
            ctx->pc = 0x23BDA0u;
            goto label_23bda0;
        }
    }
    ctx->pc = 0x23BD00u;
    // 0x23bd00: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x23bd00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x23bd04: 0x3c10004d  lui         $s0, 0x4D
    ctx->pc = 0x23bd04u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)77 << 16));
    // 0x23bd08: 0xc08d5cc  jal         func_235730
    ctx->pc = 0x23BD08u;
    SET_GPR_U32(ctx, 31, 0x23BD10u);
    ctx->pc = 0x23BD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BD08u;
    // 0x23bd0c: 0x26108f84  addiu       $s0, $s0, -0x707C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294938500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235730u, 0x23BD08u, 0x23BD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BD10u;
label_23bd10:
    // 0x23bd10: 0xc08ecfe  jal         func_23B3F8
    ctx->pc = 0x23BD10u;
    SET_GPR_U32(ctx, 31, 0x23BD18u);
    ctx->pc = 0x23BD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BD10u;
    // 0x23bd14: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B3F8u, 0x23BD10u, 0x23BD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BD18u;
label_23bd18:
    // 0x23bd18: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x23bd18u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23bd1c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x23bd1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bd20: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x23bd20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x23bd24: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23bd24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bd28: 0xc08e824  jal         func_23A090
    ctx->pc = 0x23BD28u;
    SET_GPR_U32(ctx, 31, 0x23BD30u);
    ctx->pc = 0x23BD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BD28u;
    // 0x23bd2c: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A090u, 0x23BD28u, 0x23BD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BD30u;
label_23bd30:
    // 0x23bd30: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x23bd30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x23bd34: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x23bd34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23bd38: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23bd38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x23bd3c: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x23bd3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x23bd40: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x23bd40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x23bd44: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x23bd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23bd48: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x23bd48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x23bd4c: 0xc4418fd0  lwc1        $f1, -0x7030($v0)
    ctx->pc = 0x23bd4cu;
    { uint32_t bits = FAST_READ32(0x4C8FD0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23bd50: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x23bd50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x23bd54: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x23bd54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x23bd58: 0x0  nop
    ctx->pc = 0x23bd58u;
    // NOP
    // 0x23bd5c: 0x0  nop
    ctx->pc = 0x23bd5cu;
    // NOP
    // 0x23bd60: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x23bd60u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x23bd64: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x23bd64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x23bd68: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x23bd68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23bd6c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x23bd6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x23bd70: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x23bd70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x23bd74: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x23BD74u;
    {
        const bool branch_taken_0x23bd74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23BD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD74u;
        // 0x23bd78: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bd74) {
            ctx->pc = 0x23BD90u;
            goto label_23bd90;
        }
    }
    ctx->pc = 0x23BD7Cu;
    // 0x23bd7c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x23bd7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x23bd80: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x23bd80u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x23bd84: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x23bd84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x23bd88: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x23bd88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x23bd8c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x23bd8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_23bd90:
    // 0x23bd90: 0xae64009c  sw          $a0, 0x9C($s3)
    ctx->pc = 0x23bd90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 4));
    // 0x23bd94: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x23bd94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x23bd98: 0x8c64ef80  lw          $a0, -0x1080($v1)
    ctx->pc = 0x23bd98u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4BEF80u));
    // 0x23bd9c: 0xae6400a0  sw          $a0, 0xA0($s3)
    ctx->pc = 0x23bd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 4));
label_23bda0:
    // 0x23bda0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x23bda0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23bda4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x23bda4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23bda8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23bda8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23bdac: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x23bdacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23bdb0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x23bdb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23bdb4: 0x3e00008  jr          $ra
    ctx->pc = 0x23BDB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23BDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BDB4u;
        // 0x23bdb8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BDB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23BDBCu;
}
