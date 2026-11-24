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

// Function: sub_001CFA50
// Address: 0x1cfa50 - 0x1cfe8c
void sub_001CFA50_0x1cfa50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CFA50_0x1cfa50");
#endif

    switch (ctx->pc) {
        case 0x1cfa90u: goto label_1cfa90;
        case 0x1cfe7cu: goto label_1cfe7c;
        default: break;
    }

    ctx->pc = 0x1cfa50u;

    // 0x1cfa50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cfa50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cfa54: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1cfa54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cfa58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cfa58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cfa5c: 0x90853022  lbu         $a1, 0x3022($a0)
    ctx->pc = 0x1cfa5cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12322)));
    // 0x1cfa60: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CFA60u;
    {
        const bool branch_taken_0x1cfa60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1cfa60) {
            ctx->pc = 0x1CFA70u;
            goto label_1cfa70;
        }
    }
    ctx->pc = 0x1CFA68u;
    // 0x1cfa68: 0x10000105  b           . + 4 + (0x105 << 2)
    ctx->pc = 0x1CFA68u;
    {
        const bool branch_taken_0x1cfa68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfa68) {
            ctx->pc = 0x1CFE80u;
            goto label_1cfe80;
        }
    }
    ctx->pc = 0x1CFA70u;
label_1cfa70:
    // 0x1cfa70: 0x8c823028  lw          $v0, 0x3028($a0)
    ctx->pc = 0x1cfa70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12328)));
    // 0x1cfa74: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x1cfa74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x1cfa78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cfa78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfa7c: 0x24a5fd00  addiu       $a1, $a1, -0x300
    ctx->pc = 0x1cfa7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966528));
    // 0x1cfa80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cfa80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cfa84: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CFA84u;
    {
        const bool branch_taken_0x1cfa84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFA84u;
        // 0x1cfa88: 0xac823028  sw          $v0, 0x3028($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfa84) {
            ctx->pc = 0x1CFA98u;
            goto label_1cfa98;
        }
    }
    ctx->pc = 0x1CFA8Cu;
    // 0x1cfa8c: 0x0  nop
    ctx->pc = 0x1cfa8cu;
    // NOP
label_1cfa90:
    // 0x1cfa90: 0x24a50006  addiu       $a1, $a1, 0x6
    ctx->pc = 0x1cfa90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x1cfa94: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1cfa94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1cfa98:
    // 0x1cfa98: 0x2cc10004  sltiu       $at, $a2, 0x4
    ctx->pc = 0x1cfa98u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1cfa9c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CFA9Cu;
    {
        const bool branch_taken_0x1cfa9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfa9c) {
            ctx->pc = 0x1CFAB8u;
            goto label_1cfab8;
        }
    }
    ctx->pc = 0x1CFAA4u;
    // 0x1cfaa4: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1cfaa4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1cfaa8: 0x8c823028  lw          $v0, 0x3028($a0)
    ctx->pc = 0x1cfaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12328)));
    // 0x1cfaac: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1cfaacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1cfab0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1CFAB0u;
    {
        const bool branch_taken_0x1cfab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cfab0) {
            ctx->pc = 0x1CFA90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cfa90;
        }
    }
    ctx->pc = 0x1CFAB8u;
label_1cfab8:
    // 0x1cfab8: 0x2cc20004  sltiu       $v0, $a2, 0x4
    ctx->pc = 0x1cfab8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1cfabc: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1CFABCu;
    {
        const bool branch_taken_0x1cfabc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CFAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFABCu;
        // 0x1cfac0: 0x3c010041  lui         $at, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfabc) {
            ctx->pc = 0x1CFB18u;
            goto label_1cfb18;
        }
    }
    ctx->pc = 0x1CFAC4u;
    // 0x1cfac4: 0x9422fd12  lhu         $v0, -0x2EE($at)
    ctx->pc = 0x1cfac4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294966546)));
    // 0x1cfac8: 0xac823028  sw          $v0, 0x3028($a0)
    ctx->pc = 0x1cfac8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12328), GPR_U32(ctx, 2));
    // 0x1cfacc: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1cfaccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1cfad0: 0x9423fd14  lhu         $v1, -0x2EC($at)
    ctx->pc = 0x1cfad0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x40FD14u));
    // 0x1cfad4: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1cfad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1cfad8: 0x9026fd16  lbu         $a2, -0x2EA($at)
    ctx->pc = 0x1cfad8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x40FD16u));
    // 0x1cfadc: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1cfadcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1cfae0: 0x9022fd17  lbu         $v0, -0x2E9($at)
    ctx->pc = 0x1cfae0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x40FD17u));
    // 0x1cfae4: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1cfae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1cfae8: 0x22e00  sll         $a1, $v0, 24
    ctx->pc = 0x1cfae8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1cfaec: 0xac23fcd4  sw          $v1, -0x32C($at)
    ctx->pc = 0x1cfaecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966484), GPR_U32(ctx, 3));
    // 0x1cfaf0: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x1cfaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x1cfaf4: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1cfaf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1cfaf8: 0xac23fcd0  sw          $v1, -0x330($at)
    ctx->pc = 0x1cfaf8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x40FCD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x40FCD0u, _value); } while (0);
    // 0x1cfafc: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x1cfafcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1cfb00: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1cfb00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1cfb04: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x1cfb04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1cfb08: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1cfb08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1cfb0c: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x1cfb0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1cfb10: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x1CFB10u;
    {
        const bool branch_taken_0x1cfb10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFB10u;
        // 0x1cfb14: 0xac22fcd8  sw          $v0, -0x328($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966488), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfb10) {
            ctx->pc = 0x1CFE10u;
            goto label_1cfe10;
        }
    }
    ctx->pc = 0x1CFB18u;
label_1cfb18:
    // 0x1cfb18: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x1cfb18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1cfb1c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1cfb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1cfb20: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x1cfb20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x1cfb24: 0x24a5fcfa  addiu       $a1, $a1, -0x306
    ctx->pc = 0x1cfb24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966522));
    // 0x1cfb28: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1cfb28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1cfb2c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1cfb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1cfb30: 0x8c833028  lw          $v1, 0x3028($a0)
    ctx->pc = 0x1cfb30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12328)));
    // 0x1cfb34: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CFB34u;
    {
        const bool branch_taken_0x1cfb34 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x1CFB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFB34u;
        // 0x1cfb38: 0x94a60000  lhu         $a2, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfb34) {
            ctx->pc = 0x1CFB48u;
            goto label_1cfb48;
        }
    }
    ctx->pc = 0x1CFB3Cu;
    // 0x1cfb3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cfb3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cfb40: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1CFB40u;
    {
        const bool branch_taken_0x1cfb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFB40u;
        // 0x1cfb44: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfb40) {
            ctx->pc = 0x1CFB64u;
            goto label_1cfb64;
        }
    }
    ctx->pc = 0x1CFB48u;
label_1cfb48:
    // 0x1cfb48: 0x32842  srl         $a1, $v1, 1
    ctx->pc = 0x1cfb48u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1cfb4c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1cfb4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1cfb50: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1cfb50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1cfb54: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1cfb54u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cfb58: 0x0  nop
    ctx->pc = 0x1cfb58u;
    // NOP
    // 0x1cfb5c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1cfb5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1cfb60: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1cfb60u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1cfb64:
    // 0x1cfb64: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CFB64u;
    {
        const bool branch_taken_0x1cfb64 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x1CFB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFB64u;
        // 0x1cfb68: 0x62842  srl         $a1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfb64) {
            ctx->pc = 0x1CFB78u;
            goto label_1cfb78;
        }
    }
    ctx->pc = 0x1CFB6Cu;
    // 0x1cfb6c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1cfb6cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cfb70: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1CFB70u;
    {
        const bool branch_taken_0x1cfb70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFB70u;
        // 0x1cfb74: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfb70) {
            ctx->pc = 0x1CFB90u;
            goto label_1cfb90;
        }
    }
    ctx->pc = 0x1CFB78u;
label_1cfb78:
    // 0x1cfb78: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x1cfb78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x1cfb7c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1cfb7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1cfb80: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1cfb80u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cfb84: 0x0  nop
    ctx->pc = 0x1cfb84u;
    // NOP
    // 0x1cfb88: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cfb88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1cfb8c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1cfb8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1cfb90:
    // 0x1cfb90: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1cfb90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1cfb94: 0x2463fd00  addiu       $v1, $v1, -0x300
    ctx->pc = 0x1cfb94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966528));
    // 0x1cfb98: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1cfb98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cfb9c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1cfb9cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cfba0: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CFBA0u;
    {
        const bool branch_taken_0x1cfba0 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x1CFBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFBA0u;
        // 0x1cfba4: 0x46000881  sub.s       $f2, $f1, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfba0) {
            ctx->pc = 0x1CFBB4u;
            goto label_1cfbb4;
        }
    }
    ctx->pc = 0x1CFBA8u;
    // 0x1cfba8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cfba8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cfbac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1CFBACu;
    {
        const bool branch_taken_0x1cfbac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFBACu;
        // 0x1cfbb0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfbac) {
            ctx->pc = 0x1CFBD0u;
            goto label_1cfbd0;
        }
    }
    ctx->pc = 0x1CFBB4u;
label_1cfbb4:
    // 0x1cfbb4: 0x32842  srl         $a1, $v1, 1
    ctx->pc = 0x1cfbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1cfbb8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1cfbb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1cfbbc: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1cfbbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1cfbc0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1cfbc0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cfbc4: 0x0  nop
    ctx->pc = 0x1cfbc4u;
    // NOP
    // 0x1cfbc8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1cfbc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1cfbcc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1cfbccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1cfbd0:
    // 0x1cfbd0: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CFBD0u;
    {
        const bool branch_taken_0x1cfbd0 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x1CFBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFBD0u;
        // 0x1cfbd4: 0x62842  srl         $a1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfbd0) {
            ctx->pc = 0x1CFBE4u;
            goto label_1cfbe4;
        }
    }
    ctx->pc = 0x1CFBD8u;
    // 0x1cfbd8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1cfbd8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cfbdc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1CFBDCu;
    {
        const bool branch_taken_0x1cfbdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFBDCu;
        // 0x1cfbe0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfbdc) {
            ctx->pc = 0x1CFBFCu;
            goto label_1cfbfc;
        }
    }
    ctx->pc = 0x1CFBE4u;
label_1cfbe4:
    // 0x1cfbe4: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x1cfbe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x1cfbe8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1cfbe8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1cfbec: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1cfbecu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cfbf0: 0x0  nop
    ctx->pc = 0x1cfbf0u;
    // NOP
    // 0x1cfbf4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cfbf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1cfbf8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1cfbf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1cfbfc:
    // 0x1cfbfc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1cfbfcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1cfc00: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1cfc00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1cfc04: 0x2463fcfc  addiu       $v1, $v1, -0x304
    ctx->pc = 0x1cfc04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966524));
    // 0x1cfc08: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1cfc08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cfc0c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1cfc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1cfc10: 0x94a60000  lhu         $a2, 0x0($a1)
    ctx->pc = 0x1cfc10u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1cfc14: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x1cfc14u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x1cfc18: 0x2463fd02  addiu       $v1, $v1, -0x2FE
    ctx->pc = 0x1cfc18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966530));
    // 0x1cfc1c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1cfc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cfc20: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1cfc20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cfc24: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1cfc24u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1cfc28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cfc28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cfc2c: 0x0  nop
    ctx->pc = 0x1cfc2cu;
    // NOP
    // 0x1cfc30: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cfc30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1cfc34: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CFC34u;
    {
        const bool branch_taken_0x1cfc34 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x1CFC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFC34u;
        // 0x1cfc38: 0x46001042  mul.s       $f1, $f2, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfc34) {
            ctx->pc = 0x1CFC48u;
            goto label_1cfc48;
        }
    }
    ctx->pc = 0x1CFC3Cu;
    // 0x1cfc3c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1cfc3cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cfc40: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1CFC40u;
    {
        const bool branch_taken_0x1cfc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFC40u;
        // 0x1cfc44: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfc40) {
            ctx->pc = 0x1CFC64u;
            goto label_1cfc64;
        }
    }
    ctx->pc = 0x1CFC48u;
label_1cfc48:
    // 0x1cfc48: 0x62842  srl         $a1, $a2, 1
    ctx->pc = 0x1cfc48u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x1cfc4c: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x1cfc4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x1cfc50: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1cfc50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1cfc54: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1cfc54u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cfc58: 0x0  nop
    ctx->pc = 0x1cfc58u;
    // NOP
    // 0x1cfc5c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cfc5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1cfc60: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1cfc60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1cfc64:
    // 0x1cfc64: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1cfc64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cfc68: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1cfc68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1cfc6c: 0x2463fcff  addiu       $v1, $v1, -0x301
    ctx->pc = 0x1cfc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966527));
    // 0x1cfc70: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1cfc70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1cfc74: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1cfc74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cfc78: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1cfc78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1cfc7c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1cfc7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1cfc80: 0x2463fd05  addiu       $v1, $v1, -0x2FB
    ctx->pc = 0x1cfc80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966533));
    // 0x1cfc84: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1cfc84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cfc88: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1cfc88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1cfc8c: 0x0  nop
    ctx->pc = 0x1cfc8cu;
    // NOP
    // 0x1cfc90: 0xac26fcd4  sw          $a2, -0x32C($at)
    ctx->pc = 0x1cfc90u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966484), GPR_U32(ctx, 6));
    // 0x1cfc94: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1cfc94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1cfc98: 0xac26fcd0  sw          $a2, -0x330($at)
    ctx->pc = 0x1cfc98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x40FCD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x40FCD0u, _value); } while (0);
    // 0x1cfc9c: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x1cfc9cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1cfca0: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1cfca0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cfca4: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1cfca4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1cfca8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cfca8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cfcac: 0x0  nop
    ctx->pc = 0x1cfcacu;
    // NOP
    // 0x1cfcb0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cfcb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1cfcb4: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CFCB4u;
    {
        const bool branch_taken_0x1cfcb4 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x1CFCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFCB4u;
        // 0x1cfcb8: 0x46001042  mul.s       $f1, $f2, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfcb4) {
            ctx->pc = 0x1CFCC8u;
            goto label_1cfcc8;
        }
    }
    ctx->pc = 0x1CFCBCu;
    // 0x1cfcbc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1cfcbcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cfcc0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1CFCC0u;
    {
        const bool branch_taken_0x1cfcc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFCC0u;
        // 0x1cfcc4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfcc0) {
            ctx->pc = 0x1CFCE4u;
            goto label_1cfce4;
        }
    }
    ctx->pc = 0x1CFCC8u;
label_1cfcc8:
    // 0x1cfcc8: 0x62842  srl         $a1, $a2, 1
    ctx->pc = 0x1cfcc8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x1cfccc: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x1cfcccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x1cfcd0: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1cfcd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1cfcd4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1cfcd4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cfcd8: 0x0  nop
    ctx->pc = 0x1cfcd8u;
    // NOP
    // 0x1cfcdc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cfcdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1cfce0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1cfce0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1cfce4:
    // 0x1cfce4: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1cfce4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cfce8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1cfce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1cfcec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cfcecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cfcf0: 0x0  nop
    ctx->pc = 0x1cfcf0u;
    // NOP
    // 0x1cfcf4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1cfcf4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cfcf8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1CFCF8u;
    {
        const bool branch_taken_0x1cfcf8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cfcf8) {
            ctx->pc = 0x1CFD10u;
            goto label_1cfd10;
        }
    }
    ctx->pc = 0x1CFD00u;
    // 0x1cfd00: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1cfd00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1cfd04: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x1cfd04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1cfd08: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1CFD08u;
    {
        const bool branch_taken_0x1cfd08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfd08) {
            ctx->pc = 0x1CFD28u;
            goto label_1cfd28;
        }
    }
    ctx->pc = 0x1CFD10u;
label_1cfd10:
    // 0x1cfd10: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1cfd10u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1cfd14: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1cfd14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1cfd18: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1cfd18u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1cfd1c: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x1cfd1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1cfd20: 0x0  nop
    ctx->pc = 0x1cfd20u;
    // NOP
    // 0x1cfd24: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1cfd24u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_1cfd28:
    // 0x1cfd28: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x1cfd28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x1cfd2c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1cfd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1cfd30: 0x24a5fcfe  addiu       $a1, $a1, -0x302
    ctx->pc = 0x1cfd30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966526));
    // 0x1cfd34: 0x2463fd04  addiu       $v1, $v1, -0x2FC
    ctx->pc = 0x1cfd34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966532));
    // 0x1cfd38: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1cfd38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1cfd3c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1cfd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cfd40: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x1cfd40u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1cfd44: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1cfd44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfd48: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1cfd48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1cfd4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cfd4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cfd50: 0x0  nop
    ctx->pc = 0x1cfd50u;
    // NOP
    // 0x1cfd54: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cfd54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1cfd58: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CFD58u;
    {
        const bool branch_taken_0x1cfd58 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1CFD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFD58u;
        // 0x1cfd5c: 0x46001042  mul.s       $f1, $f2, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfd58) {
            ctx->pc = 0x1CFD6Cu;
            goto label_1cfd6c;
        }
    }
    ctx->pc = 0x1CFD60u;
    // 0x1cfd60: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1cfd60u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cfd64: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1CFD64u;
    {
        const bool branch_taken_0x1cfd64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFD64u;
        // 0x1cfd68: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfd64) {
            ctx->pc = 0x1CFD88u;
            goto label_1cfd88;
        }
    }
    ctx->pc = 0x1CFD6Cu;
label_1cfd6c:
    // 0x1cfd6c: 0x51842  srl         $v1, $a1, 1
    ctx->pc = 0x1cfd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x1cfd70: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x1cfd70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1cfd74: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1cfd74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1cfd78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cfd78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cfd7c: 0x0  nop
    ctx->pc = 0x1cfd7cu;
    // NOP
    // 0x1cfd80: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cfd80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1cfd84: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1cfd84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1cfd88:
    // 0x1cfd88: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1cfd88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cfd8c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1cfd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1cfd90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cfd90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cfd94: 0x0  nop
    ctx->pc = 0x1cfd94u;
    // NOP
    // 0x1cfd98: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1cfd98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cfd9c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1CFD9Cu;
    {
        const bool branch_taken_0x1cfd9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cfd9c) {
            ctx->pc = 0x1CFDB4u;
            goto label_1cfdb4;
        }
    }
    ctx->pc = 0x1CFDA4u;
    // 0x1cfda4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1cfda4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1cfda8: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x1cfda8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1cfdac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1CFDACu;
    {
        const bool branch_taken_0x1cfdac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFDACu;
        // 0x1cfdb0: 0x2ce10100  sltiu       $at, $a3, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfdac) {
            ctx->pc = 0x1CFDD0u;
            goto label_1cfdd0;
        }
    }
    ctx->pc = 0x1CFDB4u;
label_1cfdb4:
    // 0x1cfdb4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1cfdb4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1cfdb8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1cfdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1cfdbc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1cfdbcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1cfdc0: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x1cfdc0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1cfdc4: 0x0  nop
    ctx->pc = 0x1cfdc4u;
    // NOP
    // 0x1cfdc8: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1cfdc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1cfdcc: 0x2ce10100  sltiu       $at, $a3, 0x100
    ctx->pc = 0x1cfdccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
label_1cfdd0:
    // 0x1cfdd0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CFDD0u;
    {
        const bool branch_taken_0x1cfdd0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cfdd0) {
            ctx->pc = 0x1CFDE0u;
            goto label_1cfde0;
        }
    }
    ctx->pc = 0x1CFDD8u;
    // 0x1cfdd8: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x1cfdd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1cfddc: 0x0  nop
    ctx->pc = 0x1cfddcu;
    // NOP
label_1cfde0:
    // 0x1cfde0: 0x2cc10100  sltiu       $at, $a2, 0x100
    ctx->pc = 0x1cfde0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1cfde4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CFDE4u;
    {
        const bool branch_taken_0x1cfde4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cfde4) {
            ctx->pc = 0x1CFDF0u;
            goto label_1cfdf0;
        }
    }
    ctx->pc = 0x1CFDECu;
    // 0x1cfdec: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x1cfdecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1cfdf0:
    // 0x1cfdf0: 0x72e00  sll         $a1, $a3, 24
    ctx->pc = 0x1cfdf0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x1cfdf4: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x1cfdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1cfdf8: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x1cfdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x1cfdfc: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x1cfdfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1cfe00: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1cfe00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1cfe04: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1cfe04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1cfe08: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x1cfe08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1cfe0c: 0xac22fcd8  sw          $v0, -0x328($at)
    ctx->pc = 0x1cfe0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x40FCD8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x40FCD8u, _value); } while (0);
label_1cfe10:
    // 0x1cfe10: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1cfe10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1cfe14: 0x8c27fcec  lw          $a3, -0x314($at)
    ctx->pc = 0x1cfe14u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x40FCECu));
    // 0x1cfe18: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x1cfe18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x1cfe1c: 0x24a5fcd0  addiu       $a1, $a1, -0x330
    ctx->pc = 0x1cfe1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966480));
    // 0x1cfe20: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1cfe20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1cfe24: 0x8c26fce4  lw          $a2, -0x31C($at)
    ctx->pc = 0x1cfe24u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x40FCE4u));
    // 0x1cfe28: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1cfe28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1cfe2c: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x1cfe2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1cfe30: 0x8c23fcf0  lw          $v1, -0x310($at)
    ctx->pc = 0x1cfe30u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x40FCF0u));
    // 0x1cfe34: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1cfe34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1cfe38: 0x8c22fce8  lw          $v0, -0x318($at)
    ctx->pc = 0x1cfe38u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x40FCE8u));
    // 0x1cfe3c: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1cfe3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1cfe40: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1cfe40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cfe44: 0xac26fcec  sw          $a2, -0x314($at)
    ctx->pc = 0x1cfe44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x40FCECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x40FCECu, _value); } while (0);
    // 0x1cfe48: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1cfe48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1cfe4c: 0xac22fcf0  sw          $v0, -0x310($at)
    ctx->pc = 0x1cfe4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x40FCF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x40FCF0u, _value); } while (0);
    // 0x1cfe50: 0x90823026  lbu         $v0, 0x3026($a0)
    ctx->pc = 0x1cfe50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12326)));
    // 0x1cfe54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cfe54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cfe58: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1cfe58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1cfe5c: 0xa0823026  sb          $v0, 0x3026($a0)
    ctx->pc = 0x1cfe5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12326), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cfe60: 0x90863023  lbu         $a2, 0x3023($a0)
    ctx->pc = 0x1cfe60u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12323)));
    // 0x1cfe64: 0x90873026  lbu         $a3, 0x3026($a0)
    ctx->pc = 0x1cfe64u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12326)));
    // 0x1cfe68: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1cfe68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1cfe6c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1cfe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1cfe70: 0x8c443030  lw          $a0, 0x3030($v0)
    ctx->pc = 0x1cfe70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12336)));
    // 0x1cfe74: 0xc073538  jal         func_1CD4E0
    ctx->pc = 0x1CFE74u;
    SET_GPR_U32(ctx, 31, 0x1CFE7Cu);
    ctx->pc = 0x1CFE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE74u;
    // 0x1cfe78: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD4E0u, 0x1CFE74u, 0x1CFE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE7Cu;
label_1cfe7c:
    // 0x1cfe7c: 0x0  nop
    ctx->pc = 0x1cfe7cu;
    // NOP
label_1cfe80:
    // 0x1cfe80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cfe80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cfe84: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFE84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFE84u;
        // 0x1cfe88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFE84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFE8Cu;
}
