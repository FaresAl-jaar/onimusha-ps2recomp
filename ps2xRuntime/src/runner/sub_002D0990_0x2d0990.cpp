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

// Function: sub_002D0990
// Address: 0x2d0990 - 0x2d0d10
void sub_002D0990_0x2d0990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0990_0x2d0990");
#endif

    switch (ctx->pc) {
        case 0x2d09a4u: goto label_2d09a4;
        case 0x2d0aa8u: goto label_2d0aa8;
        case 0x2d0bc4u: goto label_2d0bc4;
        default: break;
    }

    ctx->pc = 0x2d0990u;

    // 0x2d0990: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d0990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d0994: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2d0994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d0998: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2d0998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d099c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D099Cu;
    {
        const bool branch_taken_0x2d099c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D09A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D099Cu;
        // 0x2d09a0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d099c) {
            ctx->pc = 0x2D09C0u;
            goto label_2d09c0;
        }
    }
    ctx->pc = 0x2D09A4u;
label_2d09a4:
    // 0x2d09a4: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2d09a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d09a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d09a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d09ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d09acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d09b0: 0x0  nop
    ctx->pc = 0x2d09b0u;
    // NOP
    // 0x2d09b4: 0x0  nop
    ctx->pc = 0x2d09b4u;
    // NOP
    // 0x2d09b8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D09B8u;
    {
        const bool branch_taken_0x2d09b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d09b8) {
            ctx->pc = 0x2D09A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d09a4;
        }
    }
    ctx->pc = 0x2D09C0u;
label_2d09c0:
    // 0x2d09c0: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x2d09c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2d09c4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D09C4u;
    {
        const bool branch_taken_0x2d09c4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2D09C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D09C4u;
        // 0x2d09c8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d09c4) {
            ctx->pc = 0x2D09D8u;
            goto label_2d09d8;
        }
    }
    ctx->pc = 0x2D09CCu;
    // 0x2d09cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d09ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d09d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D09D0u;
    {
        const bool branch_taken_0x2d09d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D09D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D09D0u;
        // 0x2d09d4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d09d0) {
            ctx->pc = 0x2D09F0u;
            goto label_2d09f0;
        }
    }
    ctx->pc = 0x2D09D8u;
label_2d09d8:
    // 0x2d09d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d09d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d09dc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2d09dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2d09e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d09e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d09e4: 0x0  nop
    ctx->pc = 0x2d09e4u;
    // NOP
    // 0x2d09e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d09e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d09ec: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2d09ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2d09f0:
    // 0x2d09f0: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x2d09f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x2d09f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d09f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d09f8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D09F8u;
    {
        const bool branch_taken_0x2d09f8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2D09FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D09F8u;
        // 0x2d09fc: 0xe7a00020  swc1        $f0, 0x20($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d09f8) {
            ctx->pc = 0x2D0A0Cu;
            goto label_2d0a0c;
        }
    }
    ctx->pc = 0x2D0A00u;
    // 0x2d0a00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d0a00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d0a04: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D0A04u;
    {
        const bool branch_taken_0x2d0a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0A04u;
        // 0x2d0a08: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0a04) {
            ctx->pc = 0x2D0A28u;
            goto label_2d0a28;
        }
    }
    ctx->pc = 0x2D0A0Cu;
label_2d0a0c:
    // 0x2d0a0c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2d0a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2d0a10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d0a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d0a14: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2d0a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2d0a18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d0a18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d0a1c: 0x0  nop
    ctx->pc = 0x2d0a1cu;
    // NOP
    // 0x2d0a20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d0a20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d0a24: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2d0a24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2d0a28:
    // 0x2d0a28: 0x41402  srl         $v0, $a0, 16
    ctx->pc = 0x2d0a28u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x2d0a2c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d0a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d0a30: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D0A30u;
    {
        const bool branch_taken_0x2d0a30 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2D0A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0A30u;
        // 0x2d0a34: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0a30) {
            ctx->pc = 0x2D0A44u;
            goto label_2d0a44;
        }
    }
    ctx->pc = 0x2D0A38u;
    // 0x2d0a38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d0a38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d0a3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D0A3Cu;
    {
        const bool branch_taken_0x2d0a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0A3Cu;
        // 0x2d0a40: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0a3c) {
            ctx->pc = 0x2D0A60u;
            goto label_2d0a60;
        }
    }
    ctx->pc = 0x2D0A44u;
label_2d0a44:
    // 0x2d0a44: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2d0a44u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2d0a48: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d0a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d0a4c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2d0a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2d0a50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d0a50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d0a54: 0x0  nop
    ctx->pc = 0x2d0a54u;
    // NOP
    // 0x2d0a58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d0a58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d0a5c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2d0a5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2d0a60:
    // 0x2d0a60: 0x41602  srl         $v0, $a0, 24
    ctx->pc = 0x2d0a60u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 24));
    // 0x2d0a64: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d0a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d0a68: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D0A68u;
    {
        const bool branch_taken_0x2d0a68 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2D0A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0A68u;
        // 0x2d0a6c: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0a68) {
            ctx->pc = 0x2D0A7Cu;
            goto label_2d0a7c;
        }
    }
    ctx->pc = 0x2D0A70u;
    // 0x2d0a70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d0a70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d0a74: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D0A74u;
    {
        const bool branch_taken_0x2d0a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0A74u;
        // 0x2d0a78: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0a74) {
            ctx->pc = 0x2D0A98u;
            goto label_2d0a98;
        }
    }
    ctx->pc = 0x2D0A7Cu;
label_2d0a7c:
    // 0x2d0a7c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2d0a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2d0a80: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d0a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d0a84: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2d0a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2d0a88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d0a88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d0a8c: 0x0  nop
    ctx->pc = 0x2d0a8cu;
    // NOP
    // 0x2d0a90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d0a90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d0a94: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2d0a94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2d0a98:
    // 0x2d0a98: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x2d0a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d0a9c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2d0a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d0aa0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D0AA0u;
    {
        const bool branch_taken_0x2d0aa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0AA0u;
        // 0x2d0aa4: 0xe7a0002c  swc1        $f0, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0aa0) {
            ctx->pc = 0x2D0AC4u;
            goto label_2d0ac4;
        }
    }
    ctx->pc = 0x2D0AA8u;
label_2d0aa8:
    // 0x2d0aa8: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2d0aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d0aac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d0aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d0ab0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d0ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d0ab4: 0x0  nop
    ctx->pc = 0x2d0ab4u;
    // NOP
    // 0x2d0ab8: 0x0  nop
    ctx->pc = 0x2d0ab8u;
    // NOP
    // 0x2d0abc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D0ABCu;
    {
        const bool branch_taken_0x2d0abc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0abc) {
            ctx->pc = 0x2D0AA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d0aa8;
        }
    }
    ctx->pc = 0x2D0AC4u;
label_2d0ac4:
    // 0x2d0ac4: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2d0ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2d0ac8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D0AC8u;
    {
        const bool branch_taken_0x2d0ac8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2D0ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0AC8u;
        // 0x2d0acc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0ac8) {
            ctx->pc = 0x2D0ADCu;
            goto label_2d0adc;
        }
    }
    ctx->pc = 0x2D0AD0u;
    // 0x2d0ad0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d0ad0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d0ad4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D0AD4u;
    {
        const bool branch_taken_0x2d0ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0AD4u;
        // 0x2d0ad8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0ad4) {
            ctx->pc = 0x2D0AF4u;
            goto label_2d0af4;
        }
    }
    ctx->pc = 0x2D0ADCu;
label_2d0adc:
    // 0x2d0adc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d0adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d0ae0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2d0ae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2d0ae4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d0ae4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d0ae8: 0x0  nop
    ctx->pc = 0x2d0ae8u;
    // NOP
    // 0x2d0aec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d0aecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d0af0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2d0af0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2d0af4:
    // 0x2d0af4: 0x51202  srl         $v0, $a1, 8
    ctx->pc = 0x2d0af4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x2d0af8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d0af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d0afc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D0AFCu;
    {
        const bool branch_taken_0x2d0afc = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2D0B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0AFCu;
        // 0x2d0b00: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0afc) {
            ctx->pc = 0x2D0B10u;
            goto label_2d0b10;
        }
    }
    ctx->pc = 0x2D0B04u;
    // 0x2d0b04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d0b04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d0b08: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D0B08u;
    {
        const bool branch_taken_0x2d0b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0B08u;
        // 0x2d0b0c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0b08) {
            ctx->pc = 0x2D0B2Cu;
            goto label_2d0b2c;
        }
    }
    ctx->pc = 0x2D0B10u;
label_2d0b10:
    // 0x2d0b10: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2d0b10u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2d0b14: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d0b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d0b18: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2d0b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2d0b1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d0b1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d0b20: 0x0  nop
    ctx->pc = 0x2d0b20u;
    // NOP
    // 0x2d0b24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d0b24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d0b28: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2d0b28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2d0b2c:
    // 0x2d0b2c: 0x51402  srl         $v0, $a1, 16
    ctx->pc = 0x2d0b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x2d0b30: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d0b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d0b34: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D0B34u;
    {
        const bool branch_taken_0x2d0b34 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2D0B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0B34u;
        // 0x2d0b38: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0b34) {
            ctx->pc = 0x2D0B48u;
            goto label_2d0b48;
        }
    }
    ctx->pc = 0x2D0B3Cu;
    // 0x2d0b3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d0b3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d0b40: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D0B40u;
    {
        const bool branch_taken_0x2d0b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0B40u;
        // 0x2d0b44: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0b40) {
            ctx->pc = 0x2D0B64u;
            goto label_2d0b64;
        }
    }
    ctx->pc = 0x2D0B48u;
label_2d0b48:
    // 0x2d0b48: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2d0b48u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2d0b4c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d0b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d0b50: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2d0b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2d0b54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d0b54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d0b58: 0x0  nop
    ctx->pc = 0x2d0b58u;
    // NOP
    // 0x2d0b5c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d0b5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d0b60: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2d0b60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2d0b64:
    // 0x2d0b64: 0x51602  srl         $v0, $a1, 24
    ctx->pc = 0x2d0b64u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x2d0b68: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d0b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d0b6c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D0B6Cu;
    {
        const bool branch_taken_0x2d0b6c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2D0B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0B6Cu;
        // 0x2d0b70: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0b6c) {
            ctx->pc = 0x2D0B80u;
            goto label_2d0b80;
        }
    }
    ctx->pc = 0x2D0B74u;
    // 0x2d0b74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d0b74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d0b78: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D0B78u;
    {
        const bool branch_taken_0x2d0b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0B78u;
        // 0x2d0b7c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0b78) {
            ctx->pc = 0x2D0B9Cu;
            goto label_2d0b9c;
        }
    }
    ctx->pc = 0x2D0B80u;
label_2d0b80:
    // 0x2d0b80: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2d0b80u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2d0b84: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d0b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d0b88: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2d0b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2d0b8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d0b8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d0b90: 0x0  nop
    ctx->pc = 0x2d0b90u;
    // NOP
    // 0x2d0b94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d0b94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d0b98: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2d0b98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2d0b9c:
    // 0x2d0b9c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2d0b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2d0ba0: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x2d0ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d0ba4: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2d0ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d0ba8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2d0ba8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d0bac: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2d0bacu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d0bb0: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x2d0bb0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2d0bb4: 0xf8630000  sqc2        $vf3, 0x0($v1)
    ctx->pc = 0x2d0bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2d0bb8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2d0bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d0bbc: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2D0BBCu;
    SET_GPR_U32(ctx, 31, 0x2D0BC4u);
    ctx->pc = 0x2D0BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0BBCu;
    // 0x2d0bc0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2D0BBCu, 0x2D0BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0BC4u;
label_2d0bc4:
    // 0x2d0bc4: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x2d0bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d0bc8: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2d0bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d0bcc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2d0bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d0bd0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2d0bd0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d0bd4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2d0bd4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d0bd8: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x2d0bd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2d0bdc: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x2d0bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2d0be0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2d0be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2d0be4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d0be4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d0be8: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x2d0be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0bec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2d0becu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d0bf0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2D0BF0u;
    {
        const bool branch_taken_0x2d0bf0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d0bf0) {
            ctx->pc = 0x2D0C08u;
            goto label_2d0c08;
        }
    }
    ctx->pc = 0x2D0BF8u;
    // 0x2d0bf8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d0bf8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d0bfc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2d0bfcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2d0c00: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D0C00u;
    {
        const bool branch_taken_0x2d0c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0C00u;
        // 0x2d0c04: 0xc7a10024  lwc1        $f1, 0x24($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0c00) {
            ctx->pc = 0x2D0C24u;
            goto label_2d0c24;
        }
    }
    ctx->pc = 0x2D0C08u;
label_2d0c08:
    // 0x2d0c08: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2d0c08u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d0c0c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2d0c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2d0c10: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d0c10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d0c14: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2d0c14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2d0c18: 0x0  nop
    ctx->pc = 0x2d0c18u;
    // NOP
    // 0x2d0c1c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2d0c1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2d0c20: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2d0c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d0c24:
    // 0x2d0c24: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2d0c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2d0c28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d0c28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d0c2c: 0x0  nop
    ctx->pc = 0x2d0c2cu;
    // NOP
    // 0x2d0c30: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2d0c30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d0c34: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2D0C34u;
    {
        const bool branch_taken_0x2d0c34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d0c34) {
            ctx->pc = 0x2D0C4Cu;
            goto label_2d0c4c;
        }
    }
    ctx->pc = 0x2D0C3Cu;
    // 0x2d0c3c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d0c3cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d0c40: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2d0c40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2d0c44: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D0C44u;
    {
        const bool branch_taken_0x2d0c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0C44u;
        // 0x2d0c48: 0xc7a10028  lwc1        $f1, 0x28($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0c44) {
            ctx->pc = 0x2D0C68u;
            goto label_2d0c68;
        }
    }
    ctx->pc = 0x2D0C4Cu;
label_2d0c4c:
    // 0x2d0c4c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2d0c4cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d0c50: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2d0c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2d0c54: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d0c54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d0c58: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2d0c58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2d0c5c: 0x0  nop
    ctx->pc = 0x2d0c5cu;
    // NOP
    // 0x2d0c60: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2d0c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2d0c64: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x2d0c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d0c68:
    // 0x2d0c68: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x2d0c68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2d0c6c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2d0c6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2d0c70: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2d0c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2d0c74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d0c74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d0c78: 0x0  nop
    ctx->pc = 0x2d0c78u;
    // NOP
    // 0x2d0c7c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2d0c7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d0c80: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2D0C80u;
    {
        const bool branch_taken_0x2d0c80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d0c80) {
            ctx->pc = 0x2D0C98u;
            goto label_2d0c98;
        }
    }
    ctx->pc = 0x2D0C88u;
    // 0x2d0c88: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d0c88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d0c8c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2d0c8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2d0c90: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D0C90u;
    {
        const bool branch_taken_0x2d0c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0C90u;
        // 0x2d0c94: 0xc7a1002c  lwc1        $f1, 0x2C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0c90) {
            ctx->pc = 0x2D0CB4u;
            goto label_2d0cb4;
        }
    }
    ctx->pc = 0x2D0C98u;
label_2d0c98:
    // 0x2d0c98: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2d0c98u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d0c9c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2d0c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2d0ca0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d0ca0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d0ca4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2d0ca4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2d0ca8: 0x0  nop
    ctx->pc = 0x2d0ca8u;
    // NOP
    // 0x2d0cac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2d0cacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2d0cb0: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x2d0cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d0cb4:
    // 0x2d0cb4: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x2d0cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2d0cb8: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x2d0cb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2d0cbc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2d0cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2d0cc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d0cc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d0cc4: 0x0  nop
    ctx->pc = 0x2d0cc4u;
    // NOP
    // 0x2d0cc8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2d0cc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d0ccc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2D0CCCu;
    {
        const bool branch_taken_0x2d0ccc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d0ccc) {
            ctx->pc = 0x2D0CE4u;
            goto label_2d0ce4;
        }
    }
    ctx->pc = 0x2D0CD4u;
    // 0x2d0cd4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d0cd4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d0cd8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2d0cd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2d0cdc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D0CDCu;
    {
        const bool branch_taken_0x2d0cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0CDCu;
        // 0x2d0ce0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0cdc) {
            ctx->pc = 0x2D0D00u;
            goto label_2d0d00;
        }
    }
    ctx->pc = 0x2D0CE4u;
label_2d0ce4:
    // 0x2d0ce4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2d0ce4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d0ce8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2d0ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2d0cec: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d0cecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d0cf0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2d0cf0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2d0cf4: 0x0  nop
    ctx->pc = 0x2d0cf4u;
    // NOP
    // 0x2d0cf8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2d0cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2d0cfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d0cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d0d00:
    // 0x2d0d00: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x2d0d00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2d0d04: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2d0d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2d0d08: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0D08u;
        // 0x2d0d0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0D10u;
}
