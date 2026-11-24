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

// Function: sub_0030AA30
// Address: 0x30aa30 - 0x30ab98
void sub_0030AA30_0x30aa30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030AA30_0x30aa30");
#endif

    switch (ctx->pc) {
        case 0x30aab8u: goto label_30aab8;
        case 0x30ab60u: goto label_30ab60;
        default: break;
    }

    ctx->pc = 0x30aa30u;

    // 0x30aa30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x30aa30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30aa34: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x30aa34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x30aa38: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x30aa38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x30aa3c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x30aa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x30aa40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30aa40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30aa44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30aa44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30aa48: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x30aa48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30aa4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30aa4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30aa50: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x30aa50u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x30aa54: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30aa54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30aa58: 0x14600049  bnez        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x30AA58u;
    {
        const bool branch_taken_0x30aa58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30aa58) {
            ctx->pc = 0x30AB80u;
            goto label_30ab80;
        }
    }
    ctx->pc = 0x30AA60u;
    // 0x30aa60: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x30aa60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x30aa64: 0x10c00046  beqz        $a2, . + 4 + (0x46 << 2)
    ctx->pc = 0x30AA64u;
    {
        const bool branch_taken_0x30aa64 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AA64u;
        // 0x30aa68: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30aa64) {
            ctx->pc = 0x30AB80u;
            goto label_30ab80;
        }
    }
    ctx->pc = 0x30AA6Cu;
    // 0x30aa6c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x30aa6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x30aa70: 0x8c24cec4  lw          $a0, -0x313C($at)
    ctx->pc = 0x30aa70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954692)));
    // 0x30aa74: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30aa74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30aa78: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x30aa78u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x30aa7c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x30aa7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x30aa80: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x30aa80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30aa84: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x30aa84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x30aa88: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x30aa88u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x30aa8c: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x30AA8Cu;
    {
        const bool branch_taken_0x30aa8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30aa8c) {
            ctx->pc = 0x30AB80u;
            goto label_30ab80;
        }
    }
    ctx->pc = 0x30AA94u;
    // 0x30aa94: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x30aa94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x30aa98: 0x84d1000c  lh          $s1, 0xC($a2)
    ctx->pc = 0x30aa98u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x30aa9c: 0x8c23fde8  lw          $v1, -0x218($at)
    ctx->pc = 0x30aa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x80FDE8u));
    // 0x30aaa0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x30aaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30aaa4: 0xc4650000  lwc1        $f5, 0x0($v1)
    ctx->pc = 0x30aaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x30aaa8: 0xc4640004  lwc1        $f4, 0x4($v1)
    ctx->pc = 0x30aaa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30aaac: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x30aaacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30aab0: 0x12240023  beq         $s1, $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x30AAB0u;
    {
        const bool branch_taken_0x30aab0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 4));
        ctx->pc = 0x30AAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AAB0u;
        // 0x30aab4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30aab0) {
            ctx->pc = 0x30AB40u;
            goto label_30ab40;
        }
    }
    ctx->pc = 0x30AAB8u;
label_30aab8:
    // 0x30aab8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x30aab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x30aabc: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x30aabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x30aac0: 0x8c700010  lw          $s0, 0x10($v1)
    ctx->pc = 0x30aac0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x30aac4: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x30aac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30aac8: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x30aac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30aacc: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x30aaccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x30aad0: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x30aad0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30aad4: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x30AAD4u;
    {
        const bool branch_taken_0x30aad4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x30AAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AAD4u;
        // 0x30aad8: 0x46020800  add.s       $f0, $f1, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30aad4) {
            ctx->pc = 0x30AB30u;
            goto label_30ab30;
        }
    }
    ctx->pc = 0x30AADCu;
    // 0x30aadc: 0x46002836  c.le.s      $f5, $f0
    ctx->pc = 0x30aadcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30aae0: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x30AAE0u;
    {
        const bool branch_taken_0x30aae0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30aae0) {
            ctx->pc = 0x30AB30u;
            goto label_30ab30;
        }
    }
    ctx->pc = 0x30AAE8u;
    // 0x30aae8: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x30aae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30aaec: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x30aaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30aaf0: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x30aaf0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x30aaf4: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x30aaf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30aaf8: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x30AAF8u;
    {
        const bool branch_taken_0x30aaf8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x30AAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AAF8u;
        // 0x30aafc: 0x46020800  add.s       $f0, $f1, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30aaf8) {
            ctx->pc = 0x30AB30u;
            goto label_30ab30;
        }
    }
    ctx->pc = 0x30AB00u;
    // 0x30ab00: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x30ab00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30ab04: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x30AB04u;
    {
        const bool branch_taken_0x30ab04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30ab04) {
            ctx->pc = 0x30AB30u;
            goto label_30ab30;
        }
    }
    ctx->pc = 0x30AB0Cu;
    // 0x30ab0c: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x30ab0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30ab10: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x30ab10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ab14: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x30ab14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x30ab18: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x30ab18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30ab1c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x30AB1Cu;
    {
        const bool branch_taken_0x30ab1c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x30AB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AB1Cu;
        // 0x30ab20: 0x46020800  add.s       $f0, $f1, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ab1c) {
            ctx->pc = 0x30AB30u;
            goto label_30ab30;
        }
    }
    ctx->pc = 0x30AB24u;
    // 0x30ab24: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x30ab24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30ab28: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x30AB28u;
    {
        const bool branch_taken_0x30ab28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30ab28) {
            ctx->pc = 0x30AB40u;
            goto label_30ab40;
        }
    }
    ctx->pc = 0x30AB30u;
label_30ab30:
    // 0x30ab30: 0x86110018  lh          $s1, 0x18($s0)
    ctx->pc = 0x30ab30u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x30ab34: 0x1624ffe0  bne         $s1, $a0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x30AB34u;
    {
        const bool branch_taken_0x30ab34 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 4));
        if (branch_taken_0x30ab34) {
            ctx->pc = 0x30AAB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30aab8;
        }
    }
    ctx->pc = 0x30AB3Cu;
    // 0x30ab3c: 0x0  nop
    ctx->pc = 0x30ab3cu;
    // NOP
label_30ab40:
    // 0x30ab40: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x30ab40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30ab44: 0x1223000c  beq         $s1, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x30AB44u;
    {
        const bool branch_taken_0x30ab44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x30ab44) {
            ctx->pc = 0x30AB78u;
            goto label_30ab78;
        }
    }
    ctx->pc = 0x30AB4Cu;
    // 0x30ab4c: 0x1225000a  beq         $s1, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x30AB4Cu;
    {
        const bool branch_taken_0x30ab4c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 5));
        if (branch_taken_0x30ab4c) {
            ctx->pc = 0x30AB78u;
            goto label_30ab78;
        }
    }
    ctx->pc = 0x30AB54u;
    // 0x30ab54: 0x3225ffff  andi        $a1, $s1, 0xFFFF
    ctx->pc = 0x30ab54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x30ab58: 0xc0c2a28  jal         func_30A8A0
    ctx->pc = 0x30AB58u;
    SET_GPR_U32(ctx, 31, 0x30AB60u);
    ctx->pc = 0x30AB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AB58u;
    // 0x30ab5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A8A0u, 0x30AB58u, 0x30AB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AB60u;
label_30ab60:
    // 0x30ab60: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x30ab60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x30ab64: 0x8463000c  lh          $v1, 0xC($v1)
    ctx->pc = 0x30ab64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x30ab68: 0xa6030018  sh          $v1, 0x18($s0)
    ctx->pc = 0x30ab68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x30ab6c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x30ab6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x30ab70: 0xa471000c  sh          $s1, 0xC($v1)
    ctx->pc = 0x30ab70u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 17));
    // 0x30ab74: 0x0  nop
    ctx->pc = 0x30ab74u;
    // NOP
label_30ab78:
    // 0x30ab78: 0xa6510004  sh          $s1, 0x4($s2)
    ctx->pc = 0x30ab78u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 17));
    // 0x30ab7c: 0x0  nop
    ctx->pc = 0x30ab7cu;
    // NOP
label_30ab80:
    // 0x30ab80: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x30ab80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30ab84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30ab84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30ab88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30ab88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30ab8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30ab8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30ab90: 0x3e00008  jr          $ra
    ctx->pc = 0x30AB90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30AB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AB90u;
        // 0x30ab94: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30AB90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30AB98u;
}
