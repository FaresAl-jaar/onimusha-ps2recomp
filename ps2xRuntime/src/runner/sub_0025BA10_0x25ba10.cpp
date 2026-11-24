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

// Function: sub_0025BA10
// Address: 0x25ba10 - 0x25bc00
void sub_0025BA10_0x25ba10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025BA10_0x25ba10");
#endif

    ctx->pc = 0x25ba10u;

    // 0x25ba10: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x25ba10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x25ba14: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x25ba14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25ba18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25ba18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25ba1c: 0x0  nop
    ctx->pc = 0x25ba1cu;
    // NOP
    // 0x25ba20: 0x46006836  c.le.s      $f13, $f0
    ctx->pc = 0x25ba20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25ba24: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x25BA24u;
    {
        const bool branch_taken_0x25ba24 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25BA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA24u;
        // 0x25ba28: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ba24) {
            ctx->pc = 0x25BA40u;
            goto label_25ba40;
        }
    }
    ctx->pc = 0x25BA2Cu;
    // 0x25ba2c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x25ba2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x25ba30: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x25ba30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25ba34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25ba34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25ba38: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x25BA38u;
    {
        const bool branch_taken_0x25ba38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA38u;
        // 0x25ba3c: 0x46006b41  sub.s       $f13, $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ba38) {
            ctx->pc = 0x25BA6Cu;
            goto label_25ba6c;
        }
    }
    ctx->pc = 0x25BA40u;
label_25ba40:
    // 0x25ba40: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x25ba40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25ba44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25ba44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25ba48: 0x0  nop
    ctx->pc = 0x25ba48u;
    // NOP
    // 0x25ba4c: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x25ba4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25ba50: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x25BA50u;
    {
        const bool branch_taken_0x25ba50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25ba50) {
            ctx->pc = 0x25BA6Cu;
            goto label_25ba6c;
        }
    }
    ctx->pc = 0x25BA58u;
    // 0x25ba58: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x25ba58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x25ba5c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x25ba5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25ba60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25ba60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25ba64: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x25BA64u;
    {
        const bool branch_taken_0x25ba64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA64u;
        // 0x25ba68: 0x460d0340  add.s       $f13, $f0, $f13 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ba64) {
            ctx->pc = 0x25BA6Cu;
            goto label_25ba6c;
        }
    }
    ctx->pc = 0x25BA6Cu;
label_25ba6c:
    // 0x25ba6c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x25ba6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x25ba70: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x25ba70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25ba74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25ba74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25ba78: 0x0  nop
    ctx->pc = 0x25ba78u;
    // NOP
    // 0x25ba7c: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x25ba7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25ba80: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x25BA80u;
    {
        const bool branch_taken_0x25ba80 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25BA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA80u;
        // 0x25ba84: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ba80) {
            ctx->pc = 0x25BA9Cu;
            goto label_25ba9c;
        }
    }
    ctx->pc = 0x25BA88u;
    // 0x25ba88: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x25ba88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x25ba8c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x25ba8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25ba90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25ba90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25ba94: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x25BA94u;
    {
        const bool branch_taken_0x25ba94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA94u;
        // 0x25ba98: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ba94) {
            ctx->pc = 0x25BAC8u;
            goto label_25bac8;
        }
    }
    ctx->pc = 0x25BA9Cu;
label_25ba9c:
    // 0x25ba9c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x25ba9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25baa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25baa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25baa4: 0x0  nop
    ctx->pc = 0x25baa4u;
    // NOP
    // 0x25baa8: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x25baa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25baac: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x25BAACu;
    {
        const bool branch_taken_0x25baac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25baac) {
            ctx->pc = 0x25BAC8u;
            goto label_25bac8;
        }
    }
    ctx->pc = 0x25BAB4u;
    // 0x25bab4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x25bab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x25bab8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x25bab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25babc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25babcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25bac0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x25BAC0u;
    {
        const bool branch_taken_0x25bac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BAC0u;
        // 0x25bac4: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bac0) {
            ctx->pc = 0x25BAC8u;
            goto label_25bac8;
        }
    }
    ctx->pc = 0x25BAC8u;
label_25bac8:
    // 0x25bac8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x25bac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x25bacc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x25baccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25bad0: 0x460c68c1  sub.s       $f3, $f13, $f12
    ctx->pc = 0x25bad0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[13], ctx->f[12]);
    // 0x25bad4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25bad4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25bad8: 0x0  nop
    ctx->pc = 0x25bad8u;
    // NOP
    // 0x25badc: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x25badcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25bae0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x25BAE0u;
    {
        const bool branch_taken_0x25bae0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25BAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BAE0u;
        // 0x25bae4: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bae0) {
            ctx->pc = 0x25BAFCu;
            goto label_25bafc;
        }
    }
    ctx->pc = 0x25BAE8u;
    // 0x25bae8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x25bae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x25baec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x25baecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25baf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25baf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25baf4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x25BAF4u;
    {
        const bool branch_taken_0x25baf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BAF4u;
        // 0x25baf8: 0x460018c1  sub.s       $f3, $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25baf4) {
            ctx->pc = 0x25BB28u;
            goto label_25bb28;
        }
    }
    ctx->pc = 0x25BAFCu;
label_25bafc:
    // 0x25bafc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x25bafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25bb00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25bb00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25bb04: 0x0  nop
    ctx->pc = 0x25bb04u;
    // NOP
    // 0x25bb08: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x25bb08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25bb0c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x25BB0Cu;
    {
        const bool branch_taken_0x25bb0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25bb0c) {
            ctx->pc = 0x25BB28u;
            goto label_25bb28;
        }
    }
    ctx->pc = 0x25BB14u;
    // 0x25bb14: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x25bb14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x25bb18: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x25bb18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25bb1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25bb1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25bb20: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x25BB20u;
    {
        const bool branch_taken_0x25bb20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BB20u;
        // 0x25bb24: 0x460300c0  add.s       $f3, $f0, $f3 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bb20) {
            ctx->pc = 0x25BB28u;
            goto label_25bb28;
        }
    }
    ctx->pc = 0x25BB28u;
label_25bb28:
    // 0x25bb28: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x25bb28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x25bb2c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x25bb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x25bb30: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x25bb30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25bb34: 0x34440fdb  ori         $a0, $v0, 0xFDB
    ctx->pc = 0x25bb34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25bb38: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x25bb38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x25bb3c: 0x460e0842  mul.s       $f1, $f1, $f14
    ctx->pc = 0x25bb3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[14]);
    // 0x25bb40: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x25bb40u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x25bb44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25bb44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25bb48: 0x0  nop
    ctx->pc = 0x25bb48u;
    // NOP
    // 0x25bb4c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x25bb4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x25bb50: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x25bb50u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x25bb54: 0x0  nop
    ctx->pc = 0x25bb54u;
    // NOP
    // 0x25bb58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25bb58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25bb5c: 0x0  nop
    ctx->pc = 0x25bb5cu;
    // NOP
    // 0x25bb60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25bb60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25bb64: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x25BB64u;
    {
        const bool branch_taken_0x25bb64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25bb64) {
            ctx->pc = 0x25BB70u;
            goto label_25bb70;
        }
    }
    ctx->pc = 0x25BB6Cu;
    // 0x25bb6c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x25bb6cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_25bb70:
    // 0x25bb70: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x25bb70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25bb74: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x25BB74u;
    {
        const bool branch_taken_0x25bb74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25bb74) {
            ctx->pc = 0x25BB80u;
            goto label_25bb80;
        }
    }
    ctx->pc = 0x25BB7Cu;
    // 0x25bb7c: 0x460008c6  mov.s       $f3, $f1
    ctx->pc = 0x25bb7cu;
    ctx->f[3] = FPU_MOV_S(ctx->f[1]);
label_25bb80:
    // 0x25bb80: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x25bb80u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x25bb84: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x25bb84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25bb88: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x25BB88u;
    {
        const bool branch_taken_0x25bb88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25bb88) {
            ctx->pc = 0x25BB98u;
            goto label_25bb98;
        }
    }
    ctx->pc = 0x25BB90u;
    // 0x25bb90: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x25bb90u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x25bb94: 0x0  nop
    ctx->pc = 0x25bb94u;
    // NOP
label_25bb98:
    // 0x25bb98: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x25bb98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x25bb9c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x25bb9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25bba0: 0x46036300  add.s       $f12, $f12, $f3
    ctx->pc = 0x25bba0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[3]);
    // 0x25bba4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25bba4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25bba8: 0x0  nop
    ctx->pc = 0x25bba8u;
    // NOP
    // 0x25bbac: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x25bbacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25bbb0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x25BBB0u;
    {
        const bool branch_taken_0x25bbb0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25BBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BBB0u;
        // 0x25bbb4: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bbb0) {
            ctx->pc = 0x25BBCCu;
            goto label_25bbcc;
        }
    }
    ctx->pc = 0x25BBB8u;
    // 0x25bbb8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x25bbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x25bbbc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x25bbbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25bbc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25bbc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25bbc4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x25BBC4u;
    {
        const bool branch_taken_0x25bbc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BBC4u;
        // 0x25bbc8: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bbc4) {
            ctx->pc = 0x25BBF8u;
            goto label_25bbf8;
        }
    }
    ctx->pc = 0x25BBCCu;
label_25bbcc:
    // 0x25bbcc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x25bbccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25bbd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25bbd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25bbd4: 0x0  nop
    ctx->pc = 0x25bbd4u;
    // NOP
    // 0x25bbd8: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x25bbd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25bbdc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x25BBDCu;
    {
        const bool branch_taken_0x25bbdc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25bbdc) {
            ctx->pc = 0x25BBF8u;
            goto label_25bbf8;
        }
    }
    ctx->pc = 0x25BBE4u;
    // 0x25bbe4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x25bbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x25bbe8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x25bbe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25bbec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25bbecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25bbf0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x25BBF0u;
    {
        const bool branch_taken_0x25bbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BBF0u;
        // 0x25bbf4: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bbf0) {
            ctx->pc = 0x25BBF8u;
            goto label_25bbf8;
        }
    }
    ctx->pc = 0x25BBF8u;
label_25bbf8:
    // 0x25bbf8: 0x3e00008  jr          $ra
    ctx->pc = 0x25BBF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25BBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BBF8u;
        // 0x25bbfc: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BBF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25BC00u;
}
