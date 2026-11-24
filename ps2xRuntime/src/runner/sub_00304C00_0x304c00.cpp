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

// Function: sub_00304C00
// Address: 0x304c00 - 0x3051d0
void sub_00304C00_0x304c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304C00_0x304c00");
#endif

    switch (ctx->pc) {
        case 0x304c58u: goto label_304c58;
        case 0x304d08u: goto label_304d08;
        case 0x304d10u: goto label_304d10;
        case 0x304e00u: goto label_304e00;
        case 0x304e08u: goto label_304e08;
        case 0x304e24u: goto label_304e24;
        case 0x304e30u: goto label_304e30;
        case 0x304f50u: goto label_304f50;
        case 0x304f5cu: goto label_304f5c;
        case 0x304f70u: goto label_304f70;
        case 0x304f8cu: goto label_304f8c;
        case 0x304fecu: goto label_304fec;
        case 0x304ffcu: goto label_304ffc;
        case 0x30500cu: goto label_30500c;
        case 0x305014u: goto label_305014;
        case 0x305100u: goto label_305100;
        default: break;
    }

    ctx->pc = 0x304c00u;

    // 0x304c00: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x304c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x304c04: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x304c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x304c08: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x304c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x304c0c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x304c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x304c10: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x304c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x304c14: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x304c14u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304c18: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x304c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x304c1c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x304c1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304c20: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x304c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x304c24: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x304c24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304c28: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x304c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x304c2c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x304c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x304c30: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x304c30u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x304c34: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x304c34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x304c38: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x304c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x304c3c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x304c3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x304c40: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x304c40u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x304c44: 0x1020014c  beqz        $at, . + 4 + (0x14C << 2)
    ctx->pc = 0x304C44u;
    {
        const bool branch_taken_0x304c44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x304C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304C44u;
        // 0x304c48: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304c44) {
            ctx->pc = 0x305178u;
            goto label_305178;
        }
    }
    ctx->pc = 0x304C4Cu;
    // 0x304c4c: 0x311600ff  andi        $s6, $t0, 0xFF
    ctx->pc = 0x304c4cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x304c50: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x304c50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304c54: 0x0  nop
    ctx->pc = 0x304c54u;
    // NOP
label_304c58:
    // 0x304c58: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x304c58u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x304c5c: 0x92240001  lbu         $a0, 0x1($s1)
    ctx->pc = 0x304c5cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x304c60: 0x30820021  andi        $v0, $a0, 0x21
    ctx->pc = 0x304c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)33);
    // 0x304c64: 0x1440013e  bnez        $v0, . + 4 + (0x13E << 2)
    ctx->pc = 0x304C64u;
    {
        const bool branch_taken_0x304c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x304c64) {
            ctx->pc = 0x305160u;
            goto label_305160;
        }
    }
    ctx->pc = 0x304C6Cu;
    // 0x304c6c: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x304c6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x304c70: 0x3163c  dsll32      $v0, $v1, 24
    ctx->pc = 0x304c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 24));
    // 0x304c74: 0x216fe  dsrl32      $v0, $v0, 27
    ctx->pc = 0x304c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 27));
    // 0x304c78: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x304c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x304c7c: 0x10400138  beqz        $v0, . + 4 + (0x138 << 2)
    ctx->pc = 0x304C7Cu;
    {
        const bool branch_taken_0x304c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x304c7c) {
            ctx->pc = 0x305160u;
            goto label_305160;
        }
    }
    ctx->pc = 0x304C84u;
    // 0x304c84: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x304c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x304c88: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x304c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x304c8c: 0x106200ac  beq         $v1, $v0, . + 4 + (0xAC << 2)
    ctx->pc = 0x304C8Cu;
    {
        const bool branch_taken_0x304c8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x304C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304C8Cu;
        // 0x304c90: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304c8c) {
            ctx->pc = 0x304F40u;
            goto label_304f40;
        }
    }
    ctx->pc = 0x304C94u;
    // 0x304c94: 0x10620056  beq         $v1, $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x304C94u;
    {
        const bool branch_taken_0x304c94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x304c94) {
            ctx->pc = 0x304DF0u;
            goto label_304df0;
        }
    }
    ctx->pc = 0x304C9Cu;
    // 0x304c9c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x304c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x304ca0: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x304CA0u;
    {
        const bool branch_taken_0x304ca0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x304CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304CA0u;
        // 0x304ca4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304ca0) {
            ctx->pc = 0x304CF8u;
            goto label_304cf8;
        }
    }
    ctx->pc = 0x304CA8u;
    // 0x304ca8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x304CA8u;
    {
        const bool branch_taken_0x304ca8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x304ca8) {
            ctx->pc = 0x304CB8u;
            goto label_304cb8;
        }
    }
    ctx->pc = 0x304CB0u;
    // 0x304cb0: 0x1000012b  b           . + 4 + (0x12B << 2)
    ctx->pc = 0x304CB0u;
    {
        const bool branch_taken_0x304cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x304cb0) {
            ctx->pc = 0x305160u;
            goto label_305160;
        }
    }
    ctx->pc = 0x304CB8u;
label_304cb8:
    // 0x304cb8: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x304cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x304cbc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x304CBCu;
    {
        const bool branch_taken_0x304cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x304cbc) {
            ctx->pc = 0x304CE0u;
            goto label_304ce0;
        }
    }
    ctx->pc = 0x304CC4u;
    // 0x304cc4: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x304cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304cc8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x304cc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x304ccc: 0x45000124  bc1f        . + 4 + (0x124 << 2)
    ctx->pc = 0x304CCCu;
    {
        const bool branch_taken_0x304ccc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x304ccc) {
            ctx->pc = 0x305160u;
            goto label_305160;
        }
    }
    ctx->pc = 0x304CD4u;
    // 0x304cd4: 0x10000122  b           . + 4 + (0x122 << 2)
    ctx->pc = 0x304CD4u;
    {
        const bool branch_taken_0x304cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304CD4u;
        // 0x304cd8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x304cd4) {
            ctx->pc = 0x305160u;
            goto label_305160;
        }
    }
    ctx->pc = 0x304CDCu;
    // 0x304cdc: 0x0  nop
    ctx->pc = 0x304cdcu;
    // NOP
label_304ce0:
    // 0x304ce0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x304ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x304ce4: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x304ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x304ce8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x304ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x304cec: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x304cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x304cf0: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x304CF0u;
    {
        const bool branch_taken_0x304cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304CF0u;
        // 0x304cf4: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304cf0) {
            ctx->pc = 0x3050E8u;
            goto label_3050e8;
        }
    }
    ctx->pc = 0x304CF8u;
label_304cf8:
    // 0x304cf8: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x304cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x304cfc: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x304cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x304d00: 0xc0414d0  jal         func_105340
    ctx->pc = 0x304D00u;
    SET_GPR_U32(ctx, 31, 0x304D08u);
    ctx->pc = 0x304D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304D00u;
    // 0x304d04: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x304D00u, 0x304D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304D08u;
label_304d08:
    // 0x304d08: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x304D08u;
    SET_GPR_U32(ctx, 31, 0x304D10u);
    ctx->pc = 0x304D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304D08u;
    // 0x304d0c: 0x26240030  addiu       $a0, $s1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x304D08u, 0x304D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304D10u;
label_304d10:
    // 0x304d10: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x304d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304d14: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x304d14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x304d18: 0x45000111  bc1f        . + 4 + (0x111 << 2)
    ctx->pc = 0x304D18u;
    {
        const bool branch_taken_0x304d18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x304d18) {
            ctx->pc = 0x305160u;
            goto label_305160;
        }
    }
    ctx->pc = 0x304D20u;
    // 0x304d20: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x304d20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x304d24: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x304d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x304d28: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x304D28u;
    {
        const bool branch_taken_0x304d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x304d28) {
            ctx->pc = 0x304D88u;
            goto label_304d88;
        }
    }
    ctx->pc = 0x304D30u;
    // 0x304d30: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x304d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x304d34: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x304d34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x304d38: 0x0  nop
    ctx->pc = 0x304d38u;
    // NOP
    // 0x304d3c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x304d3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x304d40: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x304d40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x304d44: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x304D44u;
    {
        const bool branch_taken_0x304d44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x304d44) {
            ctx->pc = 0x304D54u;
            goto label_304d54;
        }
    }
    ctx->pc = 0x304D4Cu;
    // 0x304d4c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x304D4Cu;
    {
        const bool branch_taken_0x304d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304D4Cu;
        // 0x304d50: 0xc620000c  lwc1        $f0, 0xC($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x304d4c) {
            ctx->pc = 0x304D70u;
            goto label_304d70;
        }
    }
    ctx->pc = 0x304D54u;
label_304d54:
    // 0x304d54: 0xc6230010  lwc1        $f3, 0x10($s1)
    ctx->pc = 0x304d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x304d58: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x304d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x304d5c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x304d5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x304d60: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x304d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304d64: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x304d64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x304d68: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x304d68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x304d6c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x304d6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_304d70:
    // 0x304d70: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x304d70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x304d74: 0x450000fa  bc1f        . + 4 + (0xFA << 2)
    ctx->pc = 0x304D74u;
    {
        const bool branch_taken_0x304d74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x304d74) {
            ctx->pc = 0x305160u;
            goto label_305160;
        }
    }
    ctx->pc = 0x304D7Cu;
    // 0x304d7c: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x304D7Cu;
    {
        const bool branch_taken_0x304d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304D7Cu;
        // 0x304d80: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x304d7c) {
            ctx->pc = 0x305160u;
            goto label_305160;
        }
    }
    ctx->pc = 0x304D84u;
    // 0x304d84: 0x0  nop
    ctx->pc = 0x304d84u;
    // NOP
label_304d88:
    // 0x304d88: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x304d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x304d8c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x304d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x304d90: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x304d90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x304d94: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x304d94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x304d98: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x304d98u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x304d9c: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x304d9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x304da0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x304DA0u;
    {
        const bool branch_taken_0x304da0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x304DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304DA0u;
        // 0x304da4: 0x832024  and         $a0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304da0) {
            ctx->pc = 0x304DB8u;
            goto label_304db8;
        }
    }
    ctx->pc = 0x304DA8u;
    // 0x304da8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x304da8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x304dac: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x304dacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x304db0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x304DB0u;
    {
        const bool branch_taken_0x304db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304DB0u;
        // 0x304db4: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304db0) {
            ctx->pc = 0x304DD4u;
            goto label_304dd4;
        }
    }
    ctx->pc = 0x304DB8u;
label_304db8:
    // 0x304db8: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x304db8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x304dbc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x304dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x304dc0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x304dc0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x304dc4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x304dc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x304dc8: 0x0  nop
    ctx->pc = 0x304dc8u;
    // NOP
    // 0x304dcc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x304dccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x304dd0: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x304dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
label_304dd4:
    // 0x304dd4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x304dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x304dd8: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x304dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x304ddc: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x304ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x304de0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x304de0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x304de4: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x304DE4u;
    {
        const bool branch_taken_0x304de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304DE4u;
        // 0x304de8: 0xe620003c  swc1        $f0, 0x3C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x304de4) {
            ctx->pc = 0x3050E8u;
            goto label_3050e8;
        }
    }
    ctx->pc = 0x304DECu;
    // 0x304dec: 0x0  nop
    ctx->pc = 0x304decu;
    // NOP
label_304df0:
    // 0x304df0: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x304df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x304df4: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x304df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x304df8: 0xc0414d0  jal         func_105340
    ctx->pc = 0x304DF8u;
    SET_GPR_U32(ctx, 31, 0x304E00u);
    ctx->pc = 0x304DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304DF8u;
    // 0x304dfc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x304DF8u, 0x304E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304E00u;
label_304e00:
    // 0x304e00: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x304E00u;
    SET_GPR_U32(ctx, 31, 0x304E08u);
    ctx->pc = 0x304E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304E00u;
    // 0x304e04: 0x26240040  addiu       $a0, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x304E00u, 0x304E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304E08u;
label_304e08:
    // 0x304e08: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x304e08u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x304e0c: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x304e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304e10: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x304e10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x304e14: 0x450000d2  bc1f        . + 4 + (0xD2 << 2)
    ctx->pc = 0x304E14u;
    {
        const bool branch_taken_0x304e14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x304E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304E14u;
        // 0x304e18: 0x26240040  addiu       $a0, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304e14) {
            ctx->pc = 0x305160u;
            goto label_305160;
        }
    }
    ctx->pc = 0x304E1Cu;
    // 0x304e1c: 0xc041472  jal         func_1051C8
    ctx->pc = 0x304E1Cu;
    SET_GPR_U32(ctx, 31, 0x304E24u);
    ctx->pc = 0x304E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304E1Cu;
    // 0x304e20: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x304E1Cu, 0x304E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304E24u;
label_304e24:
    // 0x304e24: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x304e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x304e28: 0xc041468  jal         func_1051A0
    ctx->pc = 0x304E28u;
    SET_GPR_U32(ctx, 31, 0x304E30u);
    ctx->pc = 0x304E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304E28u;
    // 0x304e2c: 0x26250030  addiu       $a1, $s1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x304E28u, 0x304E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304E30u;
label_304e30:
    // 0x304e30: 0xc6210058  lwc1        $f1, 0x58($s1)
    ctx->pc = 0x304e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304e34: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x304e34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x304e38: 0x450100c9  bc1t        . + 4 + (0xC9 << 2)
    ctx->pc = 0x304E38u;
    {
        const bool branch_taken_0x304e38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x304e38) {
            ctx->pc = 0x305160u;
            goto label_305160;
        }
    }
    ctx->pc = 0x304E40u;
    // 0x304e40: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x304e40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x304e44: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x304e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x304e48: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x304E48u;
    {
        const bool branch_taken_0x304e48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x304e48) {
            ctx->pc = 0x304ED8u;
            goto label_304ed8;
        }
    }
    ctx->pc = 0x304E50u;
    // 0x304e50: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x304e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x304e54: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x304e54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x304e58: 0x4602ad41  sub.s       $f21, $f21, $f2
    ctx->pc = 0x304e58u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
    // 0x304e5c: 0x4601a836  c.le.s      $f21, $f1
    ctx->pc = 0x304e5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x304e60: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x304E60u;
    {
        const bool branch_taken_0x304e60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x304E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304E60u;
        // 0x304e64: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304e60) {
            ctx->pc = 0x304E78u;
            goto label_304e78;
        }
    }
    ctx->pc = 0x304E68u;
    // 0x304e68: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x304e68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x304e6c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x304E6Cu;
    {
        const bool branch_taken_0x304e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304E6Cu;
        // 0x304e70: 0x460010c6  mov.s       $f3, $f2 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x304e6c) {
            ctx->pc = 0x304E90u;
            goto label_304e90;
        }
    }
    ctx->pc = 0x304E74u;
    // 0x304e74: 0x0  nop
    ctx->pc = 0x304e74u;
    // NOP
label_304e78:
    // 0x304e78: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x304e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x304e7c: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x304e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304e80: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x304e80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x304e84: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x304e84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x304e88: 0x460110c1  sub.s       $f3, $f2, $f1
    ctx->pc = 0x304e88u;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x304e8c: 0x0  nop
    ctx->pc = 0x304e8cu;
    // NOP
label_304e90:
    // 0x304e90: 0xc6210054  lwc1        $f1, 0x54($s1)
    ctx->pc = 0x304e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304e94: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x304e94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x304e98: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x304E98u;
    {
        const bool branch_taken_0x304e98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x304e98) {
            ctx->pc = 0x304EB8u;
            goto label_304eb8;
        }
    }
    ctx->pc = 0x304EA0u;
    // 0x304ea0: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x304ea0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x304ea4: 0xc6200050  lwc1        $f0, 0x50($s1)
    ctx->pc = 0x304ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304ea8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x304ea8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x304eac: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x304eacu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x304eb0: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x304eb0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x304eb4: 0x0  nop
    ctx->pc = 0x304eb4u;
    // NOP
label_304eb8:
    // 0x304eb8: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x304eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304ebc: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x304ebcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x304ec0: 0x4603a034  c.lt.s      $f20, $f3
    ctx->pc = 0x304ec0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x304ec4: 0x450000a6  bc1f        . + 4 + (0xA6 << 2)
    ctx->pc = 0x304EC4u;
    {
        const bool branch_taken_0x304ec4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x304ec4) {
            ctx->pc = 0x305160u;
            goto label_305160;
        }
    }
    ctx->pc = 0x304ECCu;
    // 0x304ecc: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x304ECCu;
    {
        const bool branch_taken_0x304ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304ECCu;
        // 0x304ed0: 0x46001d06  mov.s       $f20, $f3 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x304ecc) {
            ctx->pc = 0x305160u;
            goto label_305160;
        }
    }
    ctx->pc = 0x304ED4u;
    // 0x304ed4: 0x0  nop
    ctx->pc = 0x304ed4u;
    // NOP
label_304ed8:
    // 0x304ed8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x304ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x304edc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x304edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x304ee0: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x304ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x304ee4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x304ee4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x304ee8: 0x0  nop
    ctx->pc = 0x304ee8u;
    // NOP
    // 0x304eec: 0x46150836  c.le.s      $f1, $f21
    ctx->pc = 0x304eecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x304ef0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x304EF0u;
    {
        const bool branch_taken_0x304ef0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x304EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304EF0u;
        // 0x304ef4: 0x832024  and         $a0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304ef0) {
            ctx->pc = 0x304F08u;
            goto label_304f08;
        }
    }
    ctx->pc = 0x304EF8u;
    // 0x304ef8: 0x4600a864  .word       0x4600A864                   # cvt.w.s     $f1, $f21 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x304ef8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[21]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x304efc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x304efcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x304f00: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x304F00u;
    {
        const bool branch_taken_0x304f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304F00u;
        // 0x304f04: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304f00) {
            ctx->pc = 0x304F24u;
            goto label_304f24;
        }
    }
    ctx->pc = 0x304F08u;
label_304f08:
    // 0x304f08: 0x4601a841  sub.s       $f1, $f21, $f1
    ctx->pc = 0x304f08u;
    ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
    // 0x304f0c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x304f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x304f10: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x304f10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x304f14: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x304f14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x304f18: 0x0  nop
    ctx->pc = 0x304f18u;
    // NOP
    // 0x304f1c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x304f1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x304f20: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x304f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
label_304f24:
    // 0x304f24: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x304f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x304f28: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x304f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x304f2c: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x304f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x304f30: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x304f30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x304f34: 0xe635004c  swc1        $f21, 0x4C($s1)
    ctx->pc = 0x304f34u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
    // 0x304f38: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x304F38u;
    {
        const bool branch_taken_0x304f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304F38u;
        // 0x304f3c: 0xe620005c  swc1        $f0, 0x5C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x304f38) {
            ctx->pc = 0x3050E8u;
            goto label_3050e8;
        }
    }
    ctx->pc = 0x304F40u;
label_304f40:
    // 0x304f40: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x304f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x304f44: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x304f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x304f48: 0xc0414d0  jal         func_105340
    ctx->pc = 0x304F48u;
    SET_GPR_U32(ctx, 31, 0x304F50u);
    ctx->pc = 0x304F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304F48u;
    // 0x304f4c: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x304F48u, 0x304F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304F50u;
label_304f50:
    // 0x304f50: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x304f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x304f54: 0xc041468  jal         func_1051A0
    ctx->pc = 0x304F54u;
    SET_GPR_U32(ctx, 31, 0x304F5Cu);
    ctx->pc = 0x304F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304F54u;
    // 0x304f58: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x304F54u, 0x304F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304F5Cu;
label_304f5c:
    // 0x304f5c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x304f5cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x304f60: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x304f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x304f64: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x304f64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304f68: 0xc0414d0  jal         func_105340
    ctx->pc = 0x304F68u;
    SET_GPR_U32(ctx, 31, 0x304F70u);
    ctx->pc = 0x304F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304F68u;
    // 0x304f6c: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x304F68u, 0x304F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304F70u;
label_304f70:
    // 0x304f70: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x304f70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x304f74: 0x0  nop
    ctx->pc = 0x304f74u;
    // NOP
    // 0x304f78: 0x460ca836  c.le.s      $f21, $f12
    ctx->pc = 0x304f78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x304f7c: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x304F7Cu;
    {
        const bool branch_taken_0x304f7c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x304F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304F7Cu;
        // 0x304f80: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304f7c) {
            ctx->pc = 0x304FA4u;
            goto label_304fa4;
        }
    }
    ctx->pc = 0x304F84u;
    // 0x304f84: 0xc041468  jal         func_1051A0
    ctx->pc = 0x304F84u;
    SET_GPR_U32(ctx, 31, 0x304F8Cu);
    ctx->pc = 0x304F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304F84u;
    // 0x304f88: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x304F84u, 0x304F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304F8Cu;
label_304f8c:
    // 0x304f8c: 0x0  nop
    ctx->pc = 0x304f8cu;
    // NOP
    // 0x304f90: 0x0  nop
    ctx->pc = 0x304f90u;
    // NOP
    // 0x304f94: 0x46150303  div.s       $f12, $f0, $f21
    ctx->pc = 0x304f94u;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[21]); }
    // 0x304f98: 0x0  nop
    ctx->pc = 0x304f98u;
    // NOP
    // 0x304f9c: 0x0  nop
    ctx->pc = 0x304f9cu;
    // NOP
    // 0x304fa0: 0x0  nop
    ctx->pc = 0x304fa0u;
    // NOP
label_304fa4:
    // 0x304fa4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x304fa4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304fa8: 0x0  nop
    ctx->pc = 0x304fa8u;
    // NOP
    // 0x304fac: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x304facu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x304fb0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x304FB0u;
    {
        const bool branch_taken_0x304fb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x304fb0) {
            ctx->pc = 0x304FC0u;
            goto label_304fc0;
        }
    }
    ctx->pc = 0x304FB8u;
    // 0x304fb8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x304fb8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x304fbc: 0x0  nop
    ctx->pc = 0x304fbcu;
    // NOP
label_304fc0:
    // 0x304fc0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x304fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x304fc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x304fc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304fc8: 0x0  nop
    ctx->pc = 0x304fc8u;
    // NOP
    // 0x304fcc: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x304fccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x304fd0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x304FD0u;
    {
        const bool branch_taken_0x304fd0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x304fd0) {
            ctx->pc = 0x304FE0u;
            goto label_304fe0;
        }
    }
    ctx->pc = 0x304FD8u;
    // 0x304fd8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x304fd8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x304fdc: 0x0  nop
    ctx->pc = 0x304fdcu;
    // NOP
label_304fe0:
    // 0x304fe0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x304fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x304fe4: 0xc0414dc  jal         func_105370
    ctx->pc = 0x304FE4u;
    SET_GPR_U32(ctx, 31, 0x304FECu);
    ctx->pc = 0x304FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304FE4u;
    // 0x304fe8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x304FE4u, 0x304FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304FECu;
label_304fec:
    // 0x304fec: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x304fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x304ff0: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x304ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x304ff4: 0xc0414ca  jal         func_105328
    ctx->pc = 0x304FF4u;
    SET_GPR_U32(ctx, 31, 0x304FFCu);
    ctx->pc = 0x304FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304FF4u;
    // 0x304ff8: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x304FF4u, 0x304FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304FFCu;
label_304ffc:
    // 0x304ffc: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x304ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x305000: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x305000u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305004: 0xc0414d0  jal         func_105340
    ctx->pc = 0x305004u;
    SET_GPR_U32(ctx, 31, 0x30500Cu);
    ctx->pc = 0x305008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305004u;
    // 0x305008: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x305004u, 0x30500Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30500Cu;
label_30500c:
    // 0x30500c: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x30500Cu;
    SET_GPR_U32(ctx, 31, 0x305014u);
    ctx->pc = 0x305010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30500Cu;
    // 0x305010: 0x26240040  addiu       $a0, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x30500Cu, 0x305014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305014u;
label_305014:
    // 0x305014: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x305014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x305018: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x305018u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30501c: 0x45000050  bc1f        . + 4 + (0x50 << 2)
    ctx->pc = 0x30501Cu;
    {
        const bool branch_taken_0x30501c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30501c) {
            ctx->pc = 0x305160u;
            goto label_305160;
        }
    }
    ctx->pc = 0x305024u;
    // 0x305024: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x305024u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x305028: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x305028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x30502c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x30502Cu;
    {
        const bool branch_taken_0x30502c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30502c) {
            ctx->pc = 0x305088u;
            goto label_305088;
        }
    }
    ctx->pc = 0x305034u;
    // 0x305034: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x305034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x305038: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x305038u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30503c: 0x0  nop
    ctx->pc = 0x30503cu;
    // NOP
    // 0x305040: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x305040u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x305044: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x305044u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x305048: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x305048u;
    {
        const bool branch_taken_0x305048 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x305048) {
            ctx->pc = 0x305058u;
            goto label_305058;
        }
    }
    ctx->pc = 0x305050u;
    // 0x305050: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x305050u;
    {
        const bool branch_taken_0x305050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305050u;
        // 0x305054: 0xc620000c  lwc1        $f0, 0xC($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x305050) {
            ctx->pc = 0x305074u;
            goto label_305074;
        }
    }
    ctx->pc = 0x305058u;
label_305058:
    // 0x305058: 0xc6230010  lwc1        $f3, 0x10($s1)
    ctx->pc = 0x305058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30505c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x30505cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x305060: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x305060u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x305064: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x305064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x305068: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x305068u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x30506c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x30506cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x305070: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x305070u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_305074:
    // 0x305074: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x305074u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x305078: 0x45000039  bc1f        . + 4 + (0x39 << 2)
    ctx->pc = 0x305078u;
    {
        const bool branch_taken_0x305078 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x305078) {
            ctx->pc = 0x305160u;
            goto label_305160;
        }
    }
    ctx->pc = 0x305080u;
    // 0x305080: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x305080u;
    {
        const bool branch_taken_0x305080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305080u;
        // 0x305084: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x305080) {
            ctx->pc = 0x305160u;
            goto label_305160;
        }
    }
    ctx->pc = 0x305088u;
label_305088:
    // 0x305088: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x305088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x30508c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x30508cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x305090: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x305090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x305094: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x305094u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x305098: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x305098u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x30509c: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x30509cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3050a0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3050A0u;
    {
        const bool branch_taken_0x3050a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3050A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3050A0u;
        // 0x3050a4: 0x832024  and         $a0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3050a0) {
            ctx->pc = 0x3050B8u;
            goto label_3050b8;
        }
    }
    ctx->pc = 0x3050A8u;
    // 0x3050a8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3050a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3050ac: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3050acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3050b0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3050B0u;
    {
        const bool branch_taken_0x3050b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3050B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3050B0u;
        // 0x3050b4: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3050b0) {
            ctx->pc = 0x3050D4u;
            goto label_3050d4;
        }
    }
    ctx->pc = 0x3050B8u;
label_3050b8:
    // 0x3050b8: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3050b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x3050bc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3050bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3050c0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3050c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3050c4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3050c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3050c8: 0x0  nop
    ctx->pc = 0x3050c8u;
    // NOP
    // 0x3050cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3050ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3050d0: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x3050d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
label_3050d4:
    // 0x3050d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3050d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3050d8: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x3050d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x3050dc: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x3050dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3050e0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3050e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x3050e4: 0xe620004c  swc1        $f0, 0x4C($s1)
    ctx->pc = 0x3050e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
label_3050e8:
    // 0x3050e8: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x3050e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3050ec: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x3050ecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3050f0: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x3050F0u;
    {
        const bool branch_taken_0x3050f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3050F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3050F0u;
        // 0x3050f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3050f0) {
            ctx->pc = 0x305138u;
            goto label_305138;
        }
    }
    ctx->pc = 0x3050F8u;
    // 0x3050f8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3050f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3050fc: 0x0  nop
    ctx->pc = 0x3050fcu;
    // NOP
label_305100:
    // 0x305100: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x305100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x305104: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x305104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x305108: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x305108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x30510c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x30510cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x305110: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x305110u;
    {
        const bool branch_taken_0x305110 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x305110) {
            ctx->pc = 0x305120u;
            goto label_305120;
        }
    }
    ctx->pc = 0x305118u;
    // 0x305118: 0xacb10004  sw          $s1, 0x4($a1)
    ctx->pc = 0x305118u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 17));
    // 0x30511c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30511cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_305120:
    // 0x305120: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x305120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x305124: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x305124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x305128: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x305128u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x30512c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x30512Cu;
    {
        const bool branch_taken_0x30512c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x305130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30512Cu;
        // 0x305130: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30512c) {
            ctx->pc = 0x305100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_305100;
        }
    }
    ctx->pc = 0x305134u;
    // 0x305134: 0x0  nop
    ctx->pc = 0x305134u;
    // NOP
label_305138:
    // 0x305138: 0x2c610004  sltiu       $at, $v1, 0x4
    ctx->pc = 0x305138u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x30513c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x30513Cu;
    {
        const bool branch_taken_0x30513c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x30513c) {
            ctx->pc = 0x305160u;
            goto label_305160;
        }
    }
    ctx->pc = 0x305144u;
    // 0x305144: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x305144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x305148: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x305148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30514c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x30514cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x305150: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x305150u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x305154: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x305154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x305158: 0xac510004  sw          $s1, 0x4($v0)
    ctx->pc = 0x305158u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
    // 0x30515c: 0x0  nop
    ctx->pc = 0x30515cu;
    // NOP
label_305160:
    // 0x305160: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x305160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x305164: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x305164u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x305168: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x305168u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x30516c: 0x1440feba  bnez        $v0, . + 4 + (-0x146 << 2)
    ctx->pc = 0x30516Cu;
    {
        const bool branch_taken_0x30516c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x305170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30516Cu;
        // 0x305170: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30516c) {
            ctx->pc = 0x304C58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_304c58;
        }
    }
    ctx->pc = 0x305174u;
    // 0x305174: 0x0  nop
    ctx->pc = 0x305174u;
    // NOP
label_305178:
    // 0x305178: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x305178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x30517c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30517cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x305180: 0x0  nop
    ctx->pc = 0x305180u;
    // NOP
    // 0x305184: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x305184u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x305188: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x305188u;
    {
        const bool branch_taken_0x305188 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x305188) {
            ctx->pc = 0x30519Cu;
            goto label_30519c;
        }
    }
    ctx->pc = 0x305190u;
    // 0x305190: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x305190u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x305194: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x305194u;
    {
        const bool branch_taken_0x305194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305194u;
        // 0x305198: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305194) {
            ctx->pc = 0x3051A4u;
            goto label_3051a4;
        }
    }
    ctx->pc = 0x30519Cu;
label_30519c:
    // 0x30519c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x30519cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x3051a0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3051a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_3051a4:
    // 0x3051a4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3051a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3051a8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3051a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3051ac: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3051acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3051b0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3051b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3051b4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3051b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3051b8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3051b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3051bc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3051bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3051c0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3051c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3051c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3051c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3051c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3051C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3051CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3051C8u;
        // 0x3051cc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3051C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3051D0u;
}
