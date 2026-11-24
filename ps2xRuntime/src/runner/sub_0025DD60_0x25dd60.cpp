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

// Function: sub_0025DD60
// Address: 0x25dd60 - 0x25e084
void sub_0025DD60_0x25dd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025DD60_0x25dd60");
#endif

    switch (ctx->pc) {
        case 0x25dd84u: goto label_25dd84;
        case 0x25dd98u: goto label_25dd98;
        case 0x25dde0u: goto label_25dde0;
        case 0x25de00u: goto label_25de00;
        case 0x25dec4u: goto label_25dec4;
        case 0x25df08u: goto label_25df08;
        case 0x25df18u: goto label_25df18;
        case 0x25df28u: goto label_25df28;
        case 0x25df48u: goto label_25df48;
        case 0x25df9cu: goto label_25df9c;
        case 0x25dfe0u: goto label_25dfe0;
        case 0x25dff0u: goto label_25dff0;
        case 0x25e000u: goto label_25e000;
        case 0x25e020u: goto label_25e020;
        default: break;
    }

    ctx->pc = 0x25dd60u;

    // 0x25dd60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x25dd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x25dd64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25dd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25dd68: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25dd68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25dd6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25dd6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dd70: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x25dd70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x25dd74: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x25dd74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25dd78: 0x8e060028  lw          $a2, 0x28($s0)
    ctx->pc = 0x25dd78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x25dd7c: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x25DD7Cu;
    SET_GPR_U32(ctx, 31, 0x25DD84u);
    ctx->pc = 0x25DD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DD7Cu;
    // 0x25dd80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x25DD7Cu, 0x25DD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DD84u;
label_25dd84:
    // 0x25dd84: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x25dd84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x25dd88: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x25dd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25dd8c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x25dd8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25dd90: 0xc0766c8  jal         func_1D9B20
    ctx->pc = 0x25DD90u;
    SET_GPR_U32(ctx, 31, 0x25DD98u);
    ctx->pc = 0x25DD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DD90u;
    // 0x25dd94: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B20u, 0x25DD90u, 0x25DD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DD98u;
label_25dd98:
    // 0x25dd98: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x25dd98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x25dd9c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x25dd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25dda0: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x25dda0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25dda4: 0x10620078  beq         $v1, $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x25DDA4u;
    {
        const bool branch_taken_0x25dda4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25DDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DDA4u;
        // 0x25dda8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dda4) {
            ctx->pc = 0x25DF88u;
            goto label_25df88;
        }
    }
    ctx->pc = 0x25DDACu;
    // 0x25ddac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25ddacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25ddb0: 0x10620075  beq         $v1, $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x25DDB0u;
    {
        const bool branch_taken_0x25ddb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25DDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DDB0u;
        // 0x25ddb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ddb0) {
            ctx->pc = 0x25DF88u;
            goto label_25df88;
        }
    }
    ctx->pc = 0x25DDB8u;
    // 0x25ddb8: 0x1062003d  beq         $v1, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x25DDB8u;
    {
        const bool branch_taken_0x25ddb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25ddb8) {
            ctx->pc = 0x25DEB0u;
            goto label_25deb0;
        }
    }
    ctx->pc = 0x25DDC0u;
    // 0x25ddc0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25DDC0u;
    {
        const bool branch_taken_0x25ddc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ddc0) {
            ctx->pc = 0x25DDD0u;
            goto label_25ddd0;
        }
    }
    ctx->pc = 0x25DDC8u;
    // 0x25ddc8: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x25DDC8u;
    {
        const bool branch_taken_0x25ddc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ddc8) {
            ctx->pc = 0x25E068u;
            goto label_25e068;
        }
    }
    ctx->pc = 0x25DDD0u;
label_25ddd0:
    // 0x25ddd0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x25ddd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25ddd4: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x25ddd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25ddd8: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x25DDD8u;
    SET_GPR_U32(ctx, 31, 0x25DDE0u);
    ctx->pc = 0x25DDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DDD8u;
    // 0x25dddc: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x25DDD8u, 0x25DDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DDE0u;
label_25dde0:
    // 0x25dde0: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x25dde0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x25dde4: 0xc60d0024  lwc1        $f13, 0x24($s0)
    ctx->pc = 0x25dde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x25dde8: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x25dde8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x25ddec: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x25ddecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x25ddf0: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x25ddf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x25ddf4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x25ddf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25ddf8: 0xc07682c  jal         func_1DA0B0
    ctx->pc = 0x25DDF8u;
    SET_GPR_U32(ctx, 31, 0x25DE00u);
    ctx->pc = 0x25DDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DDF8u;
    // 0x25ddfc: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA0B0u, 0x25DDF8u, 0x25DE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DE00u;
label_25de00:
    // 0x25de00: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x25de00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x25de04: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x25de04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25de08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25de08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25de0c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x25de0cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x25de10: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x25de10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x25de14: 0x8602001c  lh          $v0, 0x1C($s0)
    ctx->pc = 0x25de14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x25de18: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x25de18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25de1c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x25de1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25de20: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25DE20u;
    {
        const bool branch_taken_0x25de20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25DE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DE20u;
        // 0x25de24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25de20) {
            ctx->pc = 0x25DE30u;
            goto label_25de30;
        }
    }
    ctx->pc = 0x25DE28u;
    // 0x25de28: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x25DE28u;
    {
        const bool branch_taken_0x25de28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25de28) {
            ctx->pc = 0x25E070u;
            goto label_25e070;
        }
    }
    ctx->pc = 0x25DE30u;
label_25de30:
    // 0x25de30: 0x28620040  slti        $v0, $v1, 0x40
    ctx->pc = 0x25de30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x25de34: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x25DE34u;
    {
        const bool branch_taken_0x25de34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25de34) {
            ctx->pc = 0x25DE78u;
            goto label_25de78;
        }
    }
    ctx->pc = 0x25DE3Cu;
    // 0x25de3c: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x25de3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25de40: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x25de40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25de44: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x25DE44u;
    {
        const bool branch_taken_0x25de44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25de44) {
            ctx->pc = 0x25DE78u;
            goto label_25de78;
        }
    }
    ctx->pc = 0x25DE4Cu;
    // 0x25de4c: 0x8603001e  lh          $v1, 0x1E($s0)
    ctx->pc = 0x25de4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x25de50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25de50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25de54: 0xa6030038  sh          $v1, 0x38($s0)
    ctx->pc = 0x25de54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 56), (uint16_t)GPR_U32(ctx, 3));
    // 0x25de58: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x25de58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x25de5c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x25de5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25de60: 0xa603003a  sh          $v1, 0x3A($s0)
    ctx->pc = 0x25de60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 58), (uint16_t)GPR_U32(ctx, 3));
    // 0x25de64: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x25de64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x25de68: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x25de68u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x25de6c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x25de6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x25de70: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x25DE70u;
    {
        const bool branch_taken_0x25de70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DE70u;
        // 0x25de74: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25de70) {
            ctx->pc = 0x25E070u;
            goto label_25e070;
        }
    }
    ctx->pc = 0x25DE78u;
label_25de78:
    // 0x25de78: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x25de78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25de7c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x25de7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25de80: 0x45000079  bc1f        . + 4 + (0x79 << 2)
    ctx->pc = 0x25DE80u;
    {
        const bool branch_taken_0x25de80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25de80) {
            ctx->pc = 0x25E068u;
            goto label_25e068;
        }
    }
    ctx->pc = 0x25DE88u;
    // 0x25de88: 0x86030020  lh          $v1, 0x20($s0)
    ctx->pc = 0x25de88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x25de8c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x25de8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25de90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25de90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25de94: 0xa6030038  sh          $v1, 0x38($s0)
    ctx->pc = 0x25de94u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 56), (uint16_t)GPR_U32(ctx, 3));
    // 0x25de98: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x25de98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x25de9c: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x25de9cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x25dea0: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x25dea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x25dea4: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x25DEA4u;
    {
        const bool branch_taken_0x25dea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DEA4u;
        // 0x25dea8: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dea4) {
            ctx->pc = 0x25E070u;
            goto label_25e070;
        }
    }
    ctx->pc = 0x25DEACu;
    // 0x25deac: 0x0  nop
    ctx->pc = 0x25deacu;
    // NOP
label_25deb0:
    // 0x25deb0: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x25deb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x25deb4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x25deb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x25deb8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x25deb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25debc: 0xc0766c8  jal         func_1D9B20
    ctx->pc = 0x25DEBCu;
    SET_GPR_U32(ctx, 31, 0x25DEC4u);
    ctx->pc = 0x25DEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DEBCu;
    // 0x25dec0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B20u, 0x25DEBCu, 0x25DEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DEC4u;
label_25dec4:
    // 0x25dec4: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x25dec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x25dec8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x25dec8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x25decc: 0x86020038  lh          $v0, 0x38($s0)
    ctx->pc = 0x25deccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x25ded0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x25ded0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25ded4: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x25ded4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x25ded8: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x25ded8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25dedc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25dedcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25dee0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x25dee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dee4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25dee4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25dee8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x25dee8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25deec: 0x0  nop
    ctx->pc = 0x25deecu;
    // NOP
    // 0x25def0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x25def0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25def4: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x25def4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x25def8: 0x0  nop
    ctx->pc = 0x25def8u;
    // NOP
    // 0x25defc: 0x0  nop
    ctx->pc = 0x25defcu;
    // NOP
    // 0x25df00: 0xc0767e8  jal         func_1D9FA0
    ctx->pc = 0x25DF00u;
    SET_GPR_U32(ctx, 31, 0x25DF08u);
    ctx->pc = 0x1D9FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FA0u, 0x25DF00u, 0x25DF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DF08u;
label_25df08:
    // 0x25df08: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x25df08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x25df0c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25df0cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x25df10: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x25DF10u;
    SET_GPR_U32(ctx, 31, 0x25DF18u);
    ctx->pc = 0x25DF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DF10u;
    // 0x25df14: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x25DF10u, 0x25DF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DF18u;
label_25df18:
    // 0x25df18: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x25df18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25df1c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x25df1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25df20: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x25DF20u;
    SET_GPR_U32(ctx, 31, 0x25DF28u);
    ctx->pc = 0x25DF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DF20u;
    // 0x25df24: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x25DF20u, 0x25DF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DF28u;
label_25df28:
    // 0x25df28: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x25df28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x25df2c: 0xc60d0024  lwc1        $f13, 0x24($s0)
    ctx->pc = 0x25df2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x25df30: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x25df30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x25df34: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x25df34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x25df38: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x25df38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x25df3c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x25df3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25df40: 0xc07682c  jal         func_1DA0B0
    ctx->pc = 0x25DF40u;
    SET_GPR_U32(ctx, 31, 0x25DF48u);
    ctx->pc = 0x25DF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DF40u;
    // 0x25df44: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA0B0u, 0x25DF40u, 0x25DF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DF48u;
label_25df48:
    // 0x25df48: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x25df48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x25df4c: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x25df4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25df50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25df50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25df54: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x25df54u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x25df58: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x25df58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x25df5c: 0x86020038  lh          $v0, 0x38($s0)
    ctx->pc = 0x25df5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x25df60: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x25df60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25df64: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x25df64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25df68: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x25DF68u;
    {
        const bool branch_taken_0x25df68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25df68) {
            ctx->pc = 0x25E068u;
            goto label_25e068;
        }
    }
    ctx->pc = 0x25DF70u;
    // 0x25df70: 0x8602003a  lh          $v0, 0x3A($s0)
    ctx->pc = 0x25df70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 58)));
    // 0x25df74: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x25df74u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x25df78: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x25df78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x25df7c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x25DF7Cu;
    {
        const bool branch_taken_0x25df7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DF7Cu;
        // 0x25df80: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25df7c) {
            ctx->pc = 0x25E068u;
            goto label_25e068;
        }
    }
    ctx->pc = 0x25DF84u;
    // 0x25df84: 0x0  nop
    ctx->pc = 0x25df84u;
    // NOP
label_25df88:
    // 0x25df88: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x25df88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x25df8c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x25df8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x25df90: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x25df90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25df94: 0xc0766c8  jal         func_1D9B20
    ctx->pc = 0x25DF94u;
    SET_GPR_U32(ctx, 31, 0x25DF9Cu);
    ctx->pc = 0x25DF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DF94u;
    // 0x25df98: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B20u, 0x25DF94u, 0x25DF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DF9Cu;
label_25df9c:
    // 0x25df9c: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x25df9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x25dfa0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x25dfa0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x25dfa4: 0x86020038  lh          $v0, 0x38($s0)
    ctx->pc = 0x25dfa4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x25dfa8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x25dfa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25dfac: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x25dfacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x25dfb0: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x25dfb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25dfb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25dfb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25dfb8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x25dfb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dfbc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25dfbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25dfc0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x25dfc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25dfc4: 0x0  nop
    ctx->pc = 0x25dfc4u;
    // NOP
    // 0x25dfc8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x25dfc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25dfcc: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x25dfccu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x25dfd0: 0x0  nop
    ctx->pc = 0x25dfd0u;
    // NOP
    // 0x25dfd4: 0x0  nop
    ctx->pc = 0x25dfd4u;
    // NOP
    // 0x25dfd8: 0xc0767e8  jal         func_1D9FA0
    ctx->pc = 0x25DFD8u;
    SET_GPR_U32(ctx, 31, 0x25DFE0u);
    ctx->pc = 0x1D9FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FA0u, 0x25DFD8u, 0x25DFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DFE0u;
label_25dfe0:
    // 0x25dfe0: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x25dfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x25dfe4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25dfe4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x25dfe8: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x25DFE8u;
    SET_GPR_U32(ctx, 31, 0x25DFF0u);
    ctx->pc = 0x25DFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DFE8u;
    // 0x25dfec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x25DFE8u, 0x25DFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DFF0u;
label_25dff0:
    // 0x25dff0: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x25dff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25dff4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x25dff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25dff8: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x25DFF8u;
    SET_GPR_U32(ctx, 31, 0x25E000u);
    ctx->pc = 0x25DFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DFF8u;
    // 0x25dffc: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x25DFF8u, 0x25E000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E000u;
label_25e000:
    // 0x25e000: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x25e000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x25e004: 0xc60d0024  lwc1        $f13, 0x24($s0)
    ctx->pc = 0x25e004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x25e008: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x25e008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x25e00c: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x25e00cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x25e010: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x25e010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x25e014: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x25e014u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25e018: 0xc07682c  jal         func_1DA0B0
    ctx->pc = 0x25E018u;
    SET_GPR_U32(ctx, 31, 0x25E020u);
    ctx->pc = 0x25E01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E018u;
    // 0x25e01c: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA0B0u, 0x25E018u, 0x25E020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E020u;
label_25e020:
    // 0x25e020: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x25e020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x25e024: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x25e024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25e028: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x25e028u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25e02c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25e02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25e030: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x25e030u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x25e034: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x25e034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x25e038: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x25e038u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25e03c: 0x1044000a  beq         $v0, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x25E03Cu;
    {
        const bool branch_taken_0x25e03c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x25e03c) {
            ctx->pc = 0x25E068u;
            goto label_25e068;
        }
    }
    ctx->pc = 0x25E044u;
    // 0x25e044: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x25e044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x25e048: 0x86020038  lh          $v0, 0x38($s0)
    ctx->pc = 0x25e048u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x25e04c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x25e04cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25e050: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x25e050u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25e054: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25E054u;
    {
        const bool branch_taken_0x25e054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25e054) {
            ctx->pc = 0x25E068u;
            goto label_25e068;
        }
    }
    ctx->pc = 0x25E05Cu;
    // 0x25e05c: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x25e05cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x25e060: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25E060u;
    {
        const bool branch_taken_0x25e060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E060u;
        // 0x25e064: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e060) {
            ctx->pc = 0x25E070u;
            goto label_25e070;
        }
    }
    ctx->pc = 0x25E068u;
label_25e068:
    // 0x25e068: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25e068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25e06c: 0x0  nop
    ctx->pc = 0x25e06cu;
    // NOP
label_25e070:
    // 0x25e070: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25e070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25e074: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25e074u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25e078: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x25e078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25e07c: 0x3e00008  jr          $ra
    ctx->pc = 0x25E07Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E07Cu;
        // 0x25e080: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E07Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E084u;
}
