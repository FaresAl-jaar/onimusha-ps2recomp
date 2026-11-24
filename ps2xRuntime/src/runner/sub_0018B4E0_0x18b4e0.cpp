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

// Function: sub_0018B4E0
// Address: 0x18b4e0 - 0x18b778
void sub_0018B4E0_0x18b4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018B4E0_0x18b4e0");
#endif

    switch (ctx->pc) {
        case 0x18b640u: goto label_18b640;
        default: break;
    }

    ctx->pc = 0x18b4e0u;

    // 0x18b4e0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x18b4e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x18b4e4: 0x8c840318  lw          $a0, 0x318($a0)
    ctx->pc = 0x18b4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 792)));
    // 0x18b4e8: 0x108000a1  beqz        $a0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x18B4E8u;
    {
        const bool branch_taken_0x18b4e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B4E8u;
        // 0x18b4ec: 0x9026cea4  lbu         $a2, -0x315C($at) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294954660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b4e8) {
            ctx->pc = 0x18B770u;
            goto label_18b770;
        }
    }
    ctx->pc = 0x18B4F0u;
    // 0x18b4f0: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x18b4f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x18b4f4: 0x24070309  addiu       $a3, $zero, 0x309
    ctx->pc = 0x18b4f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 777));
    // 0x18b4f8: 0x94236ac4  lhu         $v1, 0x6AC4($at)
    ctx->pc = 0x18b4f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x18b4fc: 0x1067009c  beq         $v1, $a3, . + 4 + (0x9C << 2)
    ctx->pc = 0x18B4FCu;
    {
        const bool branch_taken_0x18b4fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x18B500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B4FCu;
        // 0x18b500: 0x24070039  addiu       $a3, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b4fc) {
            ctx->pc = 0x18B770u;
            goto label_18b770;
        }
    }
    ctx->pc = 0x18B504u;
    // 0x18b504: 0x1067009a  beq         $v1, $a3, . + 4 + (0x9A << 2)
    ctx->pc = 0x18B504u;
    {
        const bool branch_taken_0x18b504 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x18b504) {
            ctx->pc = 0x18B770u;
            goto label_18b770;
        }
    }
    ctx->pc = 0x18B50Cu;
    // 0x18b50c: 0x24070702  addiu       $a3, $zero, 0x702
    ctx->pc = 0x18b50cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1794));
    // 0x18b510: 0x14670005  bne         $v1, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x18B510u;
    {
        const bool branch_taken_0x18b510 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x18B514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B510u;
        // 0x18b514: 0x3c073f99  lui         $a3, 0x3F99 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16281 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b510) {
            ctx->pc = 0x18B528u;
            goto label_18b528;
        }
    }
    ctx->pc = 0x18B518u;
    // 0x18b518: 0x34e7999a  ori         $a3, $a3, 0x999A
    ctx->pc = 0x18b518u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)39322);
    // 0x18b51c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x18b51cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b520: 0x0  nop
    ctx->pc = 0x18b520u;
    // NOP
    // 0x18b524: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x18b524u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_18b528:
    // 0x18b528: 0x24070712  addiu       $a3, $zero, 0x712
    ctx->pc = 0x18b528u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1810));
    // 0x18b52c: 0x14670006  bne         $v1, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x18B52Cu;
    {
        const bool branch_taken_0x18b52c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x18B530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B52Cu;
        // 0x18b530: 0x3c073f99  lui         $a3, 0x3F99 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16281 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b52c) {
            ctx->pc = 0x18B548u;
            goto label_18b548;
        }
    }
    ctx->pc = 0x18B534u;
    // 0x18b534: 0x34e7999a  ori         $a3, $a3, 0x999A
    ctx->pc = 0x18b534u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)39322);
    // 0x18b538: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x18b538u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b53c: 0x0  nop
    ctx->pc = 0x18b53cu;
    // NOP
    // 0x18b540: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x18b540u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x18b544: 0x0  nop
    ctx->pc = 0x18b544u;
    // NOP
label_18b548:
    // 0x18b548: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x18b548u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18b54c: 0x14670004  bne         $v1, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x18B54Cu;
    {
        const bool branch_taken_0x18b54c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x18B550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B54Cu;
        // 0x18b550: 0x3c074000  lui         $a3, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b54c) {
            ctx->pc = 0x18B560u;
            goto label_18b560;
        }
    }
    ctx->pc = 0x18B554u;
    // 0x18b554: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x18b554u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b558: 0x0  nop
    ctx->pc = 0x18b558u;
    // NOP
    // 0x18b55c: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x18b55cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_18b560:
    // 0x18b560: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x18b560u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x18b564: 0x14670004  bne         $v1, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x18B564u;
    {
        const bool branch_taken_0x18b564 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x18B568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B564u;
        // 0x18b568: 0x3c0740a0  lui         $a3, 0x40A0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16544 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b564) {
            ctx->pc = 0x18B578u;
            goto label_18b578;
        }
    }
    ctx->pc = 0x18B56Cu;
    // 0x18b56c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x18b56cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b570: 0x0  nop
    ctx->pc = 0x18b570u;
    // NOP
    // 0x18b574: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x18b574u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_18b578:
    // 0x18b578: 0x2407070b  addiu       $a3, $zero, 0x70B
    ctx->pc = 0x18b578u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1803));
    // 0x18b57c: 0x14670006  bne         $v1, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x18B57Cu;
    {
        const bool branch_taken_0x18b57c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x18B580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B57Cu;
        // 0x18b580: 0x3c073f99  lui         $a3, 0x3F99 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16281 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b57c) {
            ctx->pc = 0x18B598u;
            goto label_18b598;
        }
    }
    ctx->pc = 0x18B584u;
    // 0x18b584: 0x34e7999a  ori         $a3, $a3, 0x999A
    ctx->pc = 0x18b584u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)39322);
    // 0x18b588: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x18b588u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b58c: 0x0  nop
    ctx->pc = 0x18b58cu;
    // NOP
    // 0x18b590: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x18b590u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x18b594: 0x0  nop
    ctx->pc = 0x18b594u;
    // NOP
label_18b598:
    // 0x18b598: 0x24070300  addiu       $a3, $zero, 0x300
    ctx->pc = 0x18b598u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x18b59c: 0x14670004  bne         $v1, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x18B59Cu;
    {
        const bool branch_taken_0x18b59c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x18B5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B59Cu;
        // 0x18b5a0: 0x3c073fc0  lui         $a3, 0x3FC0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16320 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b59c) {
            ctx->pc = 0x18B5B0u;
            goto label_18b5b0;
        }
    }
    ctx->pc = 0x18B5A4u;
    // 0x18b5a4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x18b5a4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b5a8: 0x0  nop
    ctx->pc = 0x18b5a8u;
    // NOP
    // 0x18b5ac: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x18b5acu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_18b5b0:
    // 0x18b5b0: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x18b5b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x18b5b4: 0x14670004  bne         $v1, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x18B5B4u;
    {
        const bool branch_taken_0x18b5b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x18B5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B5B4u;
        // 0x18b5b8: 0x3c073fc0  lui         $a3, 0x3FC0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16320 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b5b4) {
            ctx->pc = 0x18B5C8u;
            goto label_18b5c8;
        }
    }
    ctx->pc = 0x18B5BCu;
    // 0x18b5bc: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x18b5bcu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b5c0: 0x0  nop
    ctx->pc = 0x18b5c0u;
    // NOP
    // 0x18b5c4: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x18b5c4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_18b5c8:
    // 0x18b5c8: 0x2407030a  addiu       $a3, $zero, 0x30A
    ctx->pc = 0x18b5c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 778));
    // 0x18b5cc: 0x14670004  bne         $v1, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x18B5CCu;
    {
        const bool branch_taken_0x18b5cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x18B5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B5CCu;
        // 0x18b5d0: 0x3c073fc0  lui         $a3, 0x3FC0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16320 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b5cc) {
            ctx->pc = 0x18B5E0u;
            goto label_18b5e0;
        }
    }
    ctx->pc = 0x18B5D4u;
    // 0x18b5d4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x18b5d4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b5d8: 0x0  nop
    ctx->pc = 0x18b5d8u;
    // NOP
    // 0x18b5dc: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x18b5dcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_18b5e0:
    // 0x18b5e0: 0x24070708  addiu       $a3, $zero, 0x708
    ctx->pc = 0x18b5e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1800));
    // 0x18b5e4: 0x14670004  bne         $v1, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x18B5E4u;
    {
        const bool branch_taken_0x18b5e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x18B5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B5E4u;
        // 0x18b5e8: 0x3c073fc0  lui         $a3, 0x3FC0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16320 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b5e4) {
            ctx->pc = 0x18B5F8u;
            goto label_18b5f8;
        }
    }
    ctx->pc = 0x18B5ECu;
    // 0x18b5ec: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x18b5ecu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b5f0: 0x0  nop
    ctx->pc = 0x18b5f0u;
    // NOP
    // 0x18b5f4: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x18b5f4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_18b5f8:
    // 0x18b5f8: 0x24070718  addiu       $a3, $zero, 0x718
    ctx->pc = 0x18b5f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1816));
    // 0x18b5fc: 0x14670004  bne         $v1, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x18B5FCu;
    {
        const bool branch_taken_0x18b5fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x18B600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B5FCu;
        // 0x18b600: 0x3c073fc0  lui         $a3, 0x3FC0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16320 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b5fc) {
            ctx->pc = 0x18B610u;
            goto label_18b610;
        }
    }
    ctx->pc = 0x18B604u;
    // 0x18b604: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x18b604u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b608: 0x0  nop
    ctx->pc = 0x18b608u;
    // NOP
    // 0x18b60c: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x18b60cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_18b610:
    // 0x18b610: 0x2407070c  addiu       $a3, $zero, 0x70C
    ctx->pc = 0x18b610u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1804));
    // 0x18b614: 0x14670006  bne         $v1, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x18B614u;
    {
        const bool branch_taken_0x18b614 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x18b614) {
            ctx->pc = 0x18B630u;
            goto label_18b630;
        }
    }
    ctx->pc = 0x18B61Cu;
    // 0x18b61c: 0x3c033fe6  lui         $v1, 0x3FE6
    ctx->pc = 0x18b61cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16358 << 16));
    // 0x18b620: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x18b620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x18b624: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18b624u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b628: 0x0  nop
    ctx->pc = 0x18b628u;
    // NOP
    // 0x18b62c: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x18b62cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_18b630:
    // 0x18b630: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x18b630u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18b634: 0x1060004e  beqz        $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x18B634u;
    {
        const bool branch_taken_0x18b634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b634) {
            ctx->pc = 0x18B770u;
            goto label_18b770;
        }
    }
    ctx->pc = 0x18B63Cu;
    // 0x18b63c: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x18b63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_18b640:
    // 0x18b640: 0xc4810100  lwc1        $f1, 0x100($a0)
    ctx->pc = 0x18b640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18b644: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x18b644u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18b648: 0x45010045  bc1t        . + 4 + (0x45 << 2)
    ctx->pc = 0x18B648u;
    {
        const bool branch_taken_0x18b648 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18B64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B648u;
        // 0x18b64c: 0x248700f0  addiu       $a3, $a0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b648) {
            ctx->pc = 0x18B760u;
            goto label_18b760;
        }
    }
    ctx->pc = 0x18B650u;
    // 0x18b650: 0xc4e20018  lwc1        $f2, 0x18($a3)
    ctx->pc = 0x18b650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18b654: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x18b654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18b658: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x18b658u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18b65c: 0x45010040  bc1t        . + 4 + (0x40 << 2)
    ctx->pc = 0x18B65Cu;
    {
        const bool branch_taken_0x18b65c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18b65c) {
            ctx->pc = 0x18B760u;
            goto label_18b760;
        }
    }
    ctx->pc = 0x18B664u;
    // 0x18b664: 0xc4e00020  lwc1        $f0, 0x20($a3)
    ctx->pc = 0x18b664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18b668: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x18b668u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18b66c: 0x4501003c  bc1t        . + 4 + (0x3C << 2)
    ctx->pc = 0x18B66Cu;
    {
        const bool branch_taken_0x18b66c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18b66c) {
            ctx->pc = 0x18B760u;
            goto label_18b760;
        }
    }
    ctx->pc = 0x18B674u;
    // 0x18b674: 0xc4e00028  lwc1        $f0, 0x28($a3)
    ctx->pc = 0x18b674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18b678: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x18b678u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18b67c: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x18B67Cu;
    {
        const bool branch_taken_0x18b67c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18b67c) {
            ctx->pc = 0x18B760u;
            goto label_18b760;
        }
    }
    ctx->pc = 0x18B684u;
    // 0x18b684: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x18b684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x18b688: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x18b688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b68c: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18B68Cu;
    {
        const bool branch_taken_0x18b68c = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x18B690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B68Cu;
        // 0x18b690: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b68c) {
            ctx->pc = 0x18B6A0u;
            goto label_18b6a0;
        }
    }
    ctx->pc = 0x18B694u;
    // 0x18b694: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18b694u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b698: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18B698u;
    {
        const bool branch_taken_0x18b698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B698u;
        // 0x18b69c: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b698) {
            ctx->pc = 0x18B6B8u;
            goto label_18b6b8;
        }
    }
    ctx->pc = 0x18B6A0u;
label_18b6a0:
    // 0x18b6a0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x18b6a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x18b6a4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x18b6a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x18b6a8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x18b6a8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b6ac: 0x0  nop
    ctx->pc = 0x18b6acu;
    // NOP
    // 0x18b6b0: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x18b6b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x18b6b4: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x18b6b4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_18b6b8:
    // 0x18b6b8: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x18b6b8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x18b6bc: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x18b6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x18b6c0: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x18b6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x18b6c4: 0xc4e20038  lwc1        $f2, 0x38($a3)
    ctx->pc = 0x18b6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18b6c8: 0xc4e00030  lwc1        $f0, 0x30($a3)
    ctx->pc = 0x18b6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18b6cc: 0x46012841  sub.s       $f1, $f5, $f1
    ctx->pc = 0x18b6ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x18b6d0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x18b6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b6d4: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x18b6d4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x18b6d8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x18b6d8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x18b6dc: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x18b6dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x18b6e0: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18b6e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x18b6e4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x18b6e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x18b6e8: 0x0  nop
    ctx->pc = 0x18b6e8u;
    // NOP
    // 0x18b6ec: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x18b6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x18b6f0: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18B6F0u;
    {
        const bool branch_taken_0x18b6f0 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x18B6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B6F0u;
        // 0x18b6f4: 0xa42818  mult        $a1, $a1, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b6f0) {
            ctx->pc = 0x18B704u;
            goto label_18b704;
        }
    }
    ctx->pc = 0x18B6F8u;
    // 0x18b6f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18b6f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b6fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18B6FCu;
    {
        const bool branch_taken_0x18b6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B6FCu;
        // 0x18b700: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b6fc) {
            ctx->pc = 0x18B720u;
            goto label_18b720;
        }
    }
    ctx->pc = 0x18B704u;
label_18b704:
    // 0x18b704: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x18b704u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x18b708: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x18b708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x18b70c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x18b70cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x18b710: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x18b710u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b714: 0x0  nop
    ctx->pc = 0x18b714u;
    // NOP
    // 0x18b718: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18b718u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18b71c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x18b71cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_18b720:
    // 0x18b720: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x18b720u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18b724: 0x38c30001  xori        $v1, $a2, 0x1
    ctx->pc = 0x18b724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
    // 0x18b728: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18b728u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18b72c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x18b72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x18b730: 0x8c630040  lw          $v1, 0x40($v1)
    ctx->pc = 0x18b730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x18b734: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18b734u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x18b738: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x18b738u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x18b73c: 0x0  nop
    ctx->pc = 0x18b73cu;
    // NOP
    // 0x18b740: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x18b740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x18b744: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18b744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18b748: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x18b748u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18b74c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18b74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18b750: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x18b750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18b754: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x18b754u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x18b758: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18B758u;
    {
        const bool branch_taken_0x18b758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B758u;
        // 0x18b75c: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b758) {
            ctx->pc = 0x18B770u;
            goto label_18b770;
        }
    }
    ctx->pc = 0x18B760u;
label_18b760:
    // 0x18b760: 0x248401a0  addiu       $a0, $a0, 0x1A0
    ctx->pc = 0x18b760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 416));
    // 0x18b764: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x18b764u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18b768: 0x1460ffb5  bnez        $v1, . + 4 + (-0x4B << 2)
    ctx->pc = 0x18B768u;
    {
        const bool branch_taken_0x18b768 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18b768) {
            ctx->pc = 0x18B640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18b640;
        }
    }
    ctx->pc = 0x18B770u;
label_18b770:
    // 0x18b770: 0x3e00008  jr          $ra
    ctx->pc = 0x18B770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B778u;
}
