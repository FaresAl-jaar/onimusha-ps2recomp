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

// Function: sub_002B0500
// Address: 0x2b0500 - 0x2b0880
void sub_002B0500_0x2b0500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B0500_0x2b0500");
#endif

    switch (ctx->pc) {
        case 0x2b0514u: goto label_2b0514;
        case 0x2b0618u: goto label_2b0618;
        case 0x2b0734u: goto label_2b0734;
        default: break;
    }

    ctx->pc = 0x2b0500u;

    // 0x2b0500: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b0500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b0504: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2b0504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2b0508: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2b0508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b050c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B050Cu;
    {
        const bool branch_taken_0x2b050c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B050Cu;
        // 0x2b0510: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b050c) {
            ctx->pc = 0x2B0530u;
            goto label_2b0530;
        }
    }
    ctx->pc = 0x2B0514u;
label_2b0514:
    // 0x2b0514: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2b0514u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b0518: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2b0518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2b051c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2b051cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2b0520: 0x0  nop
    ctx->pc = 0x2b0520u;
    // NOP
    // 0x2b0524: 0x0  nop
    ctx->pc = 0x2b0524u;
    // NOP
    // 0x2b0528: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2B0528u;
    {
        const bool branch_taken_0x2b0528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b0528) {
            ctx->pc = 0x2B0514u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b0514;
        }
    }
    ctx->pc = 0x2B0530u;
label_2b0530:
    // 0x2b0530: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x2b0530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2b0534: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0534u;
    {
        const bool branch_taken_0x2b0534 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2B0538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0534u;
        // 0x2b0538: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0534) {
            ctx->pc = 0x2B0548u;
            goto label_2b0548;
        }
    }
    ctx->pc = 0x2B053Cu;
    // 0x2b053c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b053cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0540: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B0540u;
    {
        const bool branch_taken_0x2b0540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0540u;
        // 0x2b0544: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0540) {
            ctx->pc = 0x2B0560u;
            goto label_2b0560;
        }
    }
    ctx->pc = 0x2B0548u;
label_2b0548:
    // 0x2b0548: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b0548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b054c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2b054cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b0550: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b0550u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0554: 0x0  nop
    ctx->pc = 0x2b0554u;
    // NOP
    // 0x2b0558: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b0558u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b055c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2b055cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2b0560:
    // 0x2b0560: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x2b0560u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x2b0564: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b0564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b0568: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0568u;
    {
        const bool branch_taken_0x2b0568 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2B056Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0568u;
        // 0x2b056c: 0xe7a00020  swc1        $f0, 0x20($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0568) {
            ctx->pc = 0x2B057Cu;
            goto label_2b057c;
        }
    }
    ctx->pc = 0x2B0570u;
    // 0x2b0570: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b0570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0574: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B0574u;
    {
        const bool branch_taken_0x2b0574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0574u;
        // 0x2b0578: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0574) {
            ctx->pc = 0x2B0598u;
            goto label_2b0598;
        }
    }
    ctx->pc = 0x2B057Cu;
label_2b057c:
    // 0x2b057c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2b057cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2b0580: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b0580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b0584: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2b0584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b0588: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b0588u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b058c: 0x0  nop
    ctx->pc = 0x2b058cu;
    // NOP
    // 0x2b0590: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b0590u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b0594: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2b0594u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2b0598:
    // 0x2b0598: 0x41402  srl         $v0, $a0, 16
    ctx->pc = 0x2b0598u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x2b059c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b059cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b05a0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B05A0u;
    {
        const bool branch_taken_0x2b05a0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2B05A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B05A0u;
        // 0x2b05a4: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b05a0) {
            ctx->pc = 0x2B05B4u;
            goto label_2b05b4;
        }
    }
    ctx->pc = 0x2B05A8u;
    // 0x2b05a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b05a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b05ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B05ACu;
    {
        const bool branch_taken_0x2b05ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B05B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B05ACu;
        // 0x2b05b0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b05ac) {
            ctx->pc = 0x2B05D0u;
            goto label_2b05d0;
        }
    }
    ctx->pc = 0x2B05B4u;
label_2b05b4:
    // 0x2b05b4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2b05b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2b05b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b05b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b05bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2b05bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b05c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b05c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b05c4: 0x0  nop
    ctx->pc = 0x2b05c4u;
    // NOP
    // 0x2b05c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b05c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b05cc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2b05ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2b05d0:
    // 0x2b05d0: 0x41602  srl         $v0, $a0, 24
    ctx->pc = 0x2b05d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 24));
    // 0x2b05d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b05d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b05d8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B05D8u;
    {
        const bool branch_taken_0x2b05d8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2B05DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B05D8u;
        // 0x2b05dc: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b05d8) {
            ctx->pc = 0x2B05ECu;
            goto label_2b05ec;
        }
    }
    ctx->pc = 0x2B05E0u;
    // 0x2b05e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b05e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b05e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B05E4u;
    {
        const bool branch_taken_0x2b05e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B05E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B05E4u;
        // 0x2b05e8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b05e4) {
            ctx->pc = 0x2B0608u;
            goto label_2b0608;
        }
    }
    ctx->pc = 0x2B05ECu;
label_2b05ec:
    // 0x2b05ec: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2b05ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2b05f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b05f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b05f4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2b05f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b05f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b05f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b05fc: 0x0  nop
    ctx->pc = 0x2b05fcu;
    // NOP
    // 0x2b0600: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b0600u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b0604: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2b0604u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2b0608:
    // 0x2b0608: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x2b0608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b060c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2b060cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2b0610: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B0610u;
    {
        const bool branch_taken_0x2b0610 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0610u;
        // 0x2b0614: 0xe7a0002c  swc1        $f0, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0610) {
            ctx->pc = 0x2B0634u;
            goto label_2b0634;
        }
    }
    ctx->pc = 0x2B0618u;
label_2b0618:
    // 0x2b0618: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2b0618u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b061c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2b061cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2b0620: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2b0620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2b0624: 0x0  nop
    ctx->pc = 0x2b0624u;
    // NOP
    // 0x2b0628: 0x0  nop
    ctx->pc = 0x2b0628u;
    // NOP
    // 0x2b062c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2B062Cu;
    {
        const bool branch_taken_0x2b062c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b062c) {
            ctx->pc = 0x2B0618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b0618;
        }
    }
    ctx->pc = 0x2B0634u;
label_2b0634:
    // 0x2b0634: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2b0634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2b0638: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0638u;
    {
        const bool branch_taken_0x2b0638 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2B063Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0638u;
        // 0x2b063c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0638) {
            ctx->pc = 0x2B064Cu;
            goto label_2b064c;
        }
    }
    ctx->pc = 0x2B0640u;
    // 0x2b0640: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b0640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0644: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B0644u;
    {
        const bool branch_taken_0x2b0644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0644u;
        // 0x2b0648: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0644) {
            ctx->pc = 0x2B0664u;
            goto label_2b0664;
        }
    }
    ctx->pc = 0x2B064Cu;
label_2b064c:
    // 0x2b064c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b064cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b0650: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2b0650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b0654: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b0654u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0658: 0x0  nop
    ctx->pc = 0x2b0658u;
    // NOP
    // 0x2b065c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b065cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b0660: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2b0660u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2b0664:
    // 0x2b0664: 0x51202  srl         $v0, $a1, 8
    ctx->pc = 0x2b0664u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x2b0668: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b0668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b066c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B066Cu;
    {
        const bool branch_taken_0x2b066c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2B0670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B066Cu;
        // 0x2b0670: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b066c) {
            ctx->pc = 0x2B0680u;
            goto label_2b0680;
        }
    }
    ctx->pc = 0x2B0674u;
    // 0x2b0674: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b0674u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0678: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B0678u;
    {
        const bool branch_taken_0x2b0678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B067Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0678u;
        // 0x2b067c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0678) {
            ctx->pc = 0x2B069Cu;
            goto label_2b069c;
        }
    }
    ctx->pc = 0x2B0680u;
label_2b0680:
    // 0x2b0680: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2b0680u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2b0684: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b0684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b0688: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2b0688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b068c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b068cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0690: 0x0  nop
    ctx->pc = 0x2b0690u;
    // NOP
    // 0x2b0694: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b0694u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b0698: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2b0698u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2b069c:
    // 0x2b069c: 0x51402  srl         $v0, $a1, 16
    ctx->pc = 0x2b069cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x2b06a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b06a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b06a4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B06A4u;
    {
        const bool branch_taken_0x2b06a4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2B06A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B06A4u;
        // 0x2b06a8: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b06a4) {
            ctx->pc = 0x2B06B8u;
            goto label_2b06b8;
        }
    }
    ctx->pc = 0x2B06ACu;
    // 0x2b06ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b06acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b06b0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B06B0u;
    {
        const bool branch_taken_0x2b06b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B06B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B06B0u;
        // 0x2b06b4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b06b0) {
            ctx->pc = 0x2B06D4u;
            goto label_2b06d4;
        }
    }
    ctx->pc = 0x2B06B8u;
label_2b06b8:
    // 0x2b06b8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2b06b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2b06bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b06bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b06c0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2b06c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b06c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b06c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b06c8: 0x0  nop
    ctx->pc = 0x2b06c8u;
    // NOP
    // 0x2b06cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b06ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b06d0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2b06d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2b06d4:
    // 0x2b06d4: 0x51602  srl         $v0, $a1, 24
    ctx->pc = 0x2b06d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x2b06d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b06d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b06dc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B06DCu;
    {
        const bool branch_taken_0x2b06dc = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2B06E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B06DCu;
        // 0x2b06e0: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b06dc) {
            ctx->pc = 0x2B06F0u;
            goto label_2b06f0;
        }
    }
    ctx->pc = 0x2B06E4u;
    // 0x2b06e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b06e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b06e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B06E8u;
    {
        const bool branch_taken_0x2b06e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B06ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B06E8u;
        // 0x2b06ec: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b06e8) {
            ctx->pc = 0x2B070Cu;
            goto label_2b070c;
        }
    }
    ctx->pc = 0x2B06F0u;
label_2b06f0:
    // 0x2b06f0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2b06f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2b06f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b06f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b06f8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2b06f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b06fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b06fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0700: 0x0  nop
    ctx->pc = 0x2b0700u;
    // NOP
    // 0x2b0704: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b0704u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b0708: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2b0708u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2b070c:
    // 0x2b070c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2b070cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2b0710: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2b0710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b0714: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2b0714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b0718: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2b0718u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b071c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2b071cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b0720: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x2b0720u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2b0724: 0xf8630000  sqc2        $vf3, 0x0($v1)
    ctx->pc = 0x2b0724u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2b0728: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2b0728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b072c: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2B072Cu;
    SET_GPR_U32(ctx, 31, 0x2B0734u);
    ctx->pc = 0x2B0730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B072Cu;
    // 0x2b0730: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2B072Cu, 0x2B0734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0734u;
label_2b0734:
    // 0x2b0734: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2b0734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b0738: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2b0738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b073c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2b073cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b0740: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2b0740u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b0744: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2b0744u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b0748: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x2b0748u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2b074c: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x2b074cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2b0750: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2b0750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2b0754: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b0754u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0758: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x2b0758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b075c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b075cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b0760: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B0760u;
    {
        const bool branch_taken_0x2b0760 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b0760) {
            ctx->pc = 0x2B0778u;
            goto label_2b0778;
        }
    }
    ctx->pc = 0x2B0768u;
    // 0x2b0768: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b0768u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b076c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b076cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b0770: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B0770u;
    {
        const bool branch_taken_0x2b0770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0770u;
        // 0x2b0774: 0xc7a10024  lwc1        $f1, 0x24($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0770) {
            ctx->pc = 0x2B0794u;
            goto label_2b0794;
        }
    }
    ctx->pc = 0x2B0778u;
label_2b0778:
    // 0x2b0778: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b0778u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b077c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2b077cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2b0780: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b0780u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b0784: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b0784u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b0788: 0x0  nop
    ctx->pc = 0x2b0788u;
    // NOP
    // 0x2b078c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2b078cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2b0790: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2b0790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b0794:
    // 0x2b0794: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2b0794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2b0798: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b0798u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b079c: 0x0  nop
    ctx->pc = 0x2b079cu;
    // NOP
    // 0x2b07a0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b07a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b07a4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B07A4u;
    {
        const bool branch_taken_0x2b07a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b07a4) {
            ctx->pc = 0x2B07BCu;
            goto label_2b07bc;
        }
    }
    ctx->pc = 0x2B07ACu;
    // 0x2b07ac: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b07acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b07b0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2b07b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2b07b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B07B4u;
    {
        const bool branch_taken_0x2b07b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B07B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B07B4u;
        // 0x2b07b8: 0xc7a10028  lwc1        $f1, 0x28($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b07b4) {
            ctx->pc = 0x2B07D8u;
            goto label_2b07d8;
        }
    }
    ctx->pc = 0x2B07BCu;
label_2b07bc:
    // 0x2b07bc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b07bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b07c0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2b07c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2b07c4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b07c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b07c8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2b07c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2b07cc: 0x0  nop
    ctx->pc = 0x2b07ccu;
    // NOP
    // 0x2b07d0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2b07d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b07d4: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x2b07d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b07d8:
    // 0x2b07d8: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x2b07d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2b07dc: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2b07dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2b07e0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2b07e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2b07e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b07e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b07e8: 0x0  nop
    ctx->pc = 0x2b07e8u;
    // NOP
    // 0x2b07ec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b07ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b07f0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B07F0u;
    {
        const bool branch_taken_0x2b07f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b07f0) {
            ctx->pc = 0x2B0808u;
            goto label_2b0808;
        }
    }
    ctx->pc = 0x2B07F8u;
    // 0x2b07f8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b07f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b07fc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2b07fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2b0800: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B0800u;
    {
        const bool branch_taken_0x2b0800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0800u;
        // 0x2b0804: 0xc7a1002c  lwc1        $f1, 0x2C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0800) {
            ctx->pc = 0x2B0824u;
            goto label_2b0824;
        }
    }
    ctx->pc = 0x2B0808u;
label_2b0808:
    // 0x2b0808: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b0808u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b080c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2b080cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2b0810: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b0810u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b0814: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2b0814u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2b0818: 0x0  nop
    ctx->pc = 0x2b0818u;
    // NOP
    // 0x2b081c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2b081cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b0820: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x2b0820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b0824:
    // 0x2b0824: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x2b0824u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2b0828: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x2b0828u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2b082c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2b082cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2b0830: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b0830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0834: 0x0  nop
    ctx->pc = 0x2b0834u;
    // NOP
    // 0x2b0838: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b0838u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b083c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B083Cu;
    {
        const bool branch_taken_0x2b083c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b083c) {
            ctx->pc = 0x2B0854u;
            goto label_2b0854;
        }
    }
    ctx->pc = 0x2B0844u;
    // 0x2b0844: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b0844u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b0848: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2b0848u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2b084c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B084Cu;
    {
        const bool branch_taken_0x2b084c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B084Cu;
        // 0x2b0850: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b084c) {
            ctx->pc = 0x2B0870u;
            goto label_2b0870;
        }
    }
    ctx->pc = 0x2B0854u;
label_2b0854:
    // 0x2b0854: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b0854u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b0858: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2b0858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2b085c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b085cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b0860: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2b0860u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2b0864: 0x0  nop
    ctx->pc = 0x2b0864u;
    // NOP
    // 0x2b0868: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2b0868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b086c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b086cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b0870:
    // 0x2b0870: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x2b0870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2b0874: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2b0874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2b0878: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B087Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0878u;
        // 0x2b087c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0880u;
}
