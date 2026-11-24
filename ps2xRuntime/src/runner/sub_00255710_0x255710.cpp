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

// Function: sub_00255710
// Address: 0x255710 - 0x255860
void sub_00255710_0x255710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255710_0x255710");
#endif

    ctx->pc = 0x255710u;

    // 0x255710: 0x3102ffff  andi        $v0, $t0, 0xFFFF
    ctx->pc = 0x255710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x255714: 0xa4c00000  sh          $zero, 0x0($a2)
    ctx->pc = 0x255714u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x255718: 0x24428000  addiu       $v0, $v0, -0x8000
    ctx->pc = 0x255718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    // 0x25571c: 0x2448a000  addiu       $t0, $v0, -0x6000
    ctx->pc = 0x25571cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942720));
    // 0x255720: 0x3104ffff  andi        $a0, $t0, 0xFFFF
    ctx->pc = 0x255720u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x255724: 0x2c820200  sltiu       $v0, $a0, 0x200
    ctx->pc = 0x255724u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x255728: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x255728u;
    {
        const bool branch_taken_0x255728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25572Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255728u;
        // 0x25572c: 0xa4e00000  sh          $zero, 0x0($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255728) {
            ctx->pc = 0x255738u;
            goto label_255738;
        }
    }
    ctx->pc = 0x255730u;
    // 0x255730: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x255730u;
    {
        const bool branch_taken_0x255730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255730u;
        // 0x255734: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255730) {
            ctx->pc = 0x255858u;
            goto label_255858;
        }
    }
    ctx->pc = 0x255738u;
label_255738:
    // 0x255738: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x255738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x25573c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25573cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x255740: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x255740u;
    {
        const bool branch_taken_0x255740 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x255744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255740u;
        // 0x255744: 0x2881000c  slti        $at, $a0, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x255740) {
            ctx->pc = 0x255758u;
            goto label_255758;
        }
    }
    ctx->pc = 0x255748u;
    // 0x255748: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x255748u;
    {
        const bool branch_taken_0x255748 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x25574Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255748u;
        // 0x25574c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255748) {
            ctx->pc = 0x255758u;
            goto label_255758;
        }
    }
    ctx->pc = 0x255750u;
    // 0x255750: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x255750u;
    {
        const bool branch_taken_0x255750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x255750) {
            ctx->pc = 0x255858u;
            goto label_255858;
        }
    }
    ctx->pc = 0x255758u;
label_255758:
    // 0x255758: 0x5200004  bltz        $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x255758u;
    {
        const bool branch_taken_0x255758 = (GPR_S64(ctx, 9) < 0);
        ctx->pc = 0x25575Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255758u;
        // 0x25575c: 0x91842  srl         $v1, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255758) {
            ctx->pc = 0x25576Cu;
            goto label_25576c;
        }
    }
    ctx->pc = 0x255760u;
    // 0x255760: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x255760u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x255764: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x255764u;
    {
        const bool branch_taken_0x255764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255764u;
        // 0x255768: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x255764) {
            ctx->pc = 0x255784u;
            goto label_255784;
        }
    }
    ctx->pc = 0x25576Cu;
label_25576c:
    // 0x25576c: 0x31220001  andi        $v0, $t1, 0x1
    ctx->pc = 0x25576cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x255770: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x255770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x255774: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x255774u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x255778: 0x0  nop
    ctx->pc = 0x255778u;
    // NOP
    // 0x25577c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x25577cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x255780: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x255780u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_255784:
    // 0x255784: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x255784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x255788: 0x3102ffff  andi        $v0, $t0, 0xFFFF
    ctx->pc = 0x255788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x25578c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25578cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x255790: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x255790u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x255794: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x255794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x255798: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x255798u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x25579c: 0x3c03008c  lui         $v1, 0x8C
    ctx->pc = 0x25579cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)140 << 16));
    // 0x2557a0: 0x2463e5f0  addiu       $v1, $v1, -0x1A10
    ctx->pc = 0x2557a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960624));
    // 0x2557a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2557a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2557a8: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x2557a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2557ac: 0x41903  sra         $v1, $a0, 4
    ctx->pc = 0x2557acu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
    // 0x2557b0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2557b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2557b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2557b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2557b8: 0x0  nop
    ctx->pc = 0x2557b8u;
    // NOP
    // 0x2557bc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2557bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2557c0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2557c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2557c4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2557c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2557c8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2557C8u;
    {
        const bool branch_taken_0x2557c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2557c8) {
            ctx->pc = 0x2557E0u;
            goto label_2557e0;
        }
    }
    ctx->pc = 0x2557D0u;
    // 0x2557d0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2557d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2557d4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2557d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2557d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2557D8u;
    {
        const bool branch_taken_0x2557d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2557DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2557D8u;
        // 0x2557dc: 0x3082000f  andi        $v0, $a0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2557d8) {
            ctx->pc = 0x2557FCu;
            goto label_2557fc;
        }
    }
    ctx->pc = 0x2557E0u;
label_2557e0:
    // 0x2557e0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2557e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2557e4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2557e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2557e8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2557e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2557ec: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2557ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2557f0: 0x0  nop
    ctx->pc = 0x2557f0u;
    // NOP
    // 0x2557f4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2557f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2557f8: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x2557f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
label_2557fc:
    // 0x2557fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2557fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x255800: 0x0  nop
    ctx->pc = 0x255800u;
    // NOP
    // 0x255804: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x255804u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x255808: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x255808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x25580c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x25580cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x255810: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x255810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x255814: 0x0  nop
    ctx->pc = 0x255814u;
    // NOP
    // 0x255818: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x255818u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25581c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x25581Cu;
    {
        const bool branch_taken_0x25581c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x255820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25581Cu;
        // 0x255820: 0xa4c30000  sh          $v1, 0x0($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25581c) {
            ctx->pc = 0x255834u;
            goto label_255834;
        }
    }
    ctx->pc = 0x255824u;
    // 0x255824: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x255824u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x255828: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x255828u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x25582c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25582Cu;
    {
        const bool branch_taken_0x25582c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25582Cu;
        // 0x255830: 0xa4e30000  sh          $v1, 0x0($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25582c) {
            ctx->pc = 0x255850u;
            goto label_255850;
        }
    }
    ctx->pc = 0x255834u;
label_255834:
    // 0x255834: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x255834u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x255838: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x255838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x25583c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x25583cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x255840: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x255840u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x255844: 0x0  nop
    ctx->pc = 0x255844u;
    // NOP
    // 0x255848: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x255848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x25584c: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x25584cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
label_255850:
    // 0x255850: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x255850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x255854: 0x0  nop
    ctx->pc = 0x255854u;
    // NOP
label_255858:
    // 0x255858: 0x3e00008  jr          $ra
    ctx->pc = 0x255858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255860u;
}
